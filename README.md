# STRONG2020 HaSP School

[![code style: prettier](https://img.shields.io/badge/code_style-prettier-ff69b4.svg?style=flat-square)](https://github.com/prettier/prettier)
[![Google Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/github/ComPWA/strong2020-salamanca/blob/main)
[![GitHub Pages](https://github.com/ComPWA/strong2020-salamanca/actions/workflows/docs.yml/badge.svg)](https://github.com/ComPWA/strong2020-salamanca/actions/workflows/docs.yml)

This (unofficial) repository contains the exercises for the [STRONG2020 HaSP School](https://indico.ific.uv.es/event/6803) which was organised in Salamanca in 2023. Many of the files hosted in this repository originate from the [lecture material](https://indico.ific.uv.es/event/6803/timetable).

## Installation

1. Install [Miniconda](https://docs.conda.io/en/latest/miniconda.html)

2. Create and activate the virtual environment:

   ```shell
   conda env create
   conda activate strong2020-salamanca
   ```

3. Run notebooks in [Jupyter Lab](https://jupyter.org):

   ```shell
   jupyter lab
   ```

## Documentation

The website [compwa.github.io/strong2020-salamanca](https://compwa.github.io/strong2020-salamanca) is automatically generated from the notebooks in this repository using [Sphinx](https://www.sphinx-doc.org) and [MyST-NB](https://myst-nb.rtfd.io). You can also run the notebooks and build the documentation locally as follows:

```shell
tox -e docnb
```

Alternatively, you can run the notebooks without building the documentation with

```shell
tox -e nb
```

or build the documentation without running the notebooks with

```shell
tox -e doc
```
