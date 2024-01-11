import tkinter as tk
from tkinter import messagebox
import networkx as nx
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg


class GraphEditor:
    def __init__(self, master):
        self.master = master
        self.master.title("Graph Editor")
        self.master.geometry("600x400")

        self.graph = nx.Graph()
        self.canvas = None
        self.draw_graph()

        # Entry for node label
        self.node_label_entry = tk.Entry(self.master)
        self.node_label_entry.pack()

        # Buttons
        add_node_button = tk.Button(self.master, text="Add Node", command=self.add_node)
        add_node_button.pack()

        add_edge_button = tk.Button(self.master, text="Add Edge", command=self.add_edge)
        add_edge_button.pack()

        delete_node_button = tk.Button(self.master, text="Delete Node", command=self.delete_node)
        delete_node_button.pack()

        delete_edge_button = tk.Button(self.master, text="Delete Edge", command=self.delete_edge)
        delete_edge_button.pack()

    def draw_graph(self):
        if self.canvas:
            self.canvas.get_tk_widget().destroy()

        self.canvas = FigureCanvasTkAgg(plt.figure())
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

        pos = nx.spring_layout(self.graph)
        nx.draw(self.graph, pos, with_labels=True, font_weight='bold', ax=plt.gca())
        self.canvas.draw()

    def add_node(self):
        label = self.node_label_entry.get()
        if label:
            self.graph.add_node(label)
            self.draw_graph()
            self.node_label_entry.delete(0, tk.END)
        else:
            messagebox.showwarning("Warning", "Please enter a node label.")

    def add_edge(self):
        label = self.node_label_entry.get()
        if label in self.graph.nodes:
            selected_node = label
            self.node_label_entry.delete(0, tk.END)
            messagebox.showinfo("Select Node", "Select another node to create an edge.")
            self.master.bind("<Button-1>", lambda event: self.select_edge_node(event, selected_node))
        else:
            messagebox.showwarning("Warning", "Please enter a valid node label.")

    def select_edge_node(self, event, selected_node):
        x, y = event.x, event.y
        node = None
        for n, (nx, ny) in nx.spring_layout(self.graph).items():
            if x - 30 < nx * 300 < x + 30 and y - 30 < ny * 300 < y + 30:
                node = n
                break
        if node and node != selected_node:
            self.graph.add_edge(selected_node, node)
            self.draw_graph()
        else:
            messagebox.showwarning("Warning", "Please select a valid node.")

    def delete_node(self):
        label = self.node_label_entry.get()
        if label in self.graph.nodes:
            self.graph.remove_node(label)
            self.draw_graph()
            self.node_label_entry.delete(0, tk.END)
        else:
            messagebox.showwarning("Warning", "Please enter a valid node label.")

    def delete_edge(self):
        label = self.node_label_entry.get()
        if label in self.graph.nodes:
            selected_node = label
            self.node_label_entry.delete(0, tk.END)
            messagebox.showinfo("Select Node", "Select another node to delete the edge.")
            self.master.bind("<Button-1>", lambda event: self.select_edge_to_delete(event, selected_node))
        else:
            messagebox.showwarning("Warning", "Please enter a valid node label.")

    def select_edge_to_delete(self, event, selected_node):
        x, y = event.x, event.y
        node = None
        for n, (nx, ny) in nx.spring_layout(self.graph).items():
            if x - 30 < nx * 300 < x + 30 and y - 30 < ny * 300 < y + 30:
                node = n
                break
        if node and node != selected_node:
            if self.graph.has_edge(selected_node, node):
                self.graph.remove_edge(selected_node, node)
                self.draw_graph()
        else:
            messagebox.showwarning("Warning", "Please select a valid node.")


if __name__ == "__main__":
    root = tk.Tk()
    app = GraphEditor(root)
    root.mainloop()