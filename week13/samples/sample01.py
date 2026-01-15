# ダイクストラ法
import networkx as nx
import matplotlib.pyplot as plt

# 空のグラフの生成
G = nx.Graph()

# 重み付きグラフの生成
G.add_weighted_edges_from([('a', 'b', 8), ('a', 'c', 9), ('b', 'c', 5),
                            ('b', 'e', 6), ('c', 'd', 1), ('c', 'e', 4), ('c', 'f', 2),
                            ('d', 'f', 6), ('e', 'g', 9), ('f', 'g', 3)])

# ばねモデルでノード配置
pos = nx.spring_layout(G)

# 重みのある表示
plt.figure(figsize=(8, 6)) # グラフのサイズを指定
nx.draw(G, pos, with_labels=True, node_color='lightblue', node_size=500)
edge_labels = dict([((u,v,), d['weight']) for u,v,d in G.edges(data=True)])
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)
plt.show()

# 描画
nx.draw(G, pos, with_labels=True)

# 最短経路を求める
print('SからGまでの最短経路', nx.dijkstra_path(G, 'a', 'g'))

# その時の距離
print('距離', nx.dijkstra_path_length(G, 'a', 'g'))

# 最短経路と距離の一括表示
print('一括表示', nx.single_source_dijkstra(G, 'a', 'g'))
print()

# 2ノード間ならどこでも求まる
print('指定した2ノード間の距離')
print(nx.single_source_dijkstra(G, 'a', 'b'))
print(nx.single_source_dijkstra(G, 'a', 'c'))
print(nx.single_source_dijkstra(G, 'a', 'd'))
print(nx.single_source_dijkstra(G, 'a', 'e'))
print(nx.single_source_dijkstra(G, 'a', 'f'))
