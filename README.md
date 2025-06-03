
# MiniKV

> 🚀 A minimalist, educational key-value database implemented from scratch in C.

MiniKV 是一个用 C 语言从零实现的轻量级键值数据库，目标是帮助开发者深入理解数据库系统的底层原理，包括命令解析、存储引擎设计、内存管理等。

---

## ✨ 项目特色

- 🔨 **从零手写**：无依赖、无框架，手工打造所有核心模块。
- 🧠 **结构清晰**：模块分离，便于理解和扩展。
- 🧪 **学习友好**：适合系统学习数据库内核、操作系统和编译原理的同学。
- 📚 **简单命令集**：支持基本的 `SET` / `GET` / `DEL` 等操作。

---

## 📁 项目结构

```

mini-kv/
├── CMakeLists.txt
├── include
│   ├── engine.h
│   ├── parser.h
│   └── storage.h
├── README.md
└── src
    ├── engine.c
    ├── main.c
    ├── parser.c
    └── storage.c

````

---

## ⚙️ 构建 & 运行

### 1. 克隆项目

```bash
git clone git@github.com:CUMTXH/mini-kv.git
cd mini-kv
````

### 2. 构建项目

```bash
mkdir build && cd build
cmake ..
make
```

### 3. 启动数据库

```bash
./minikv
```

---

## 💡 支持的命令

MiniKV 支持简单的文本命令交互：

```sql
SET key value      # 设置键值
GET key            # 获取对应键的值
DEL key            # 删除指定键
EXIT               # 退出程序
```

---

## 🔧 后续规划（TODO）

* [ ] 添加持久化支持（WAL 或 snapshot）
* [ ] 添加 LRU 缓存策略
* [ ] 网络支持：用 TCP 实现服务端与客户端通信
* [ ] 多线程并发读写支持

---

## 🧑‍💻 开发者

| 头像                                       | 信息                                                                                      |
| ---------------------------------------- | --------------------------------------------------------------------------------------- |
| ![avatar](https://github.com/CUMTXH.png) | **seeker (CUMTXH)**<br>计算机专业 / 算法竞赛 / 数据库内核爱好者<br>[GitHub主页](https://github.com/seekerzhz) |

---

## ⭐️ Star History

[![Star History Chart](https://api.star-history.com/svg?repos=CUMTXH/mini-kv\&type=Date)](https://star-history.com/#CUMTXH/mini-kv)

---

## 📜 License

[MIT License](LICENSE)

---

> 如果你觉得这个项目对你有帮助，欢迎 Star ⭐、Fork 🍴 或提 PR 🚀。

```
