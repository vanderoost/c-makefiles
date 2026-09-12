# C Makefile

A makefile template for C projects.

The `src/` directory is structured as follows:

```
src
├── <entrypoint(s)>.c
├── <lib_a>
│   ├── <lib_a>.c
│   └── <lib_a>.h
└── <lib_b>
    ├── <lib_b>.c
    └── <lib_b>.h
```

And the Makefile will automatically detect the dependencies and compile everything in
steps.

All files in `src` in this repo are just dummy files to test whether the Makefile works.

## Blog post

This [blog post](https://vanderoost.com/articles/2026/08/05/levels-of-effective-makefile-cheatsheet/) walks through the entire setup of the Makefile.


## Screencast

A full walkthrough of setting up this Makefile from scratch:

[![The 7 habits of highly effective Makefiles](https://img.youtube.com/vi/PPDyWuWz9VE/mqdefault.jpg)](https://youtu.be/PPDyWuWz9VE)
