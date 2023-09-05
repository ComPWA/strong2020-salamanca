# STRONG2020 HaSP School

This (unofficial) repository contains the exercises for the [STRONG2020 HaSP School](https://indico.ific.uv.es/event/6803) which was organised in Salamanca in 2023. Many of the files hosted in this repository originate from the [lecture material](https://indico.ific.uv.es/event/6803/timetable).

## Installation

1. Install [Miniconda](https://docs.conda.io/en/latest/miniconda.html)

2. Create and activate the virtual environment:

   ```shell
   conda env create
   conda activate strong2020
   ```

3. Run notebooks in [Jupyter Lab](https://jupyter.org):

   ```shell
   jupyter lab
   ```

## Documentation

The website [compwa.github.io/strong2020-salamanca](https://compwa.github.io/strong2020-salamanca) is automatically generated from the notebooks in this repository using [Jupyter Book](https://jupyterbook.org). You can also run the notebooks and build the documentation locally as follows:

```shell
jb build .
```

Adding the flag `-W` renders warnings as errors, which is useful for checking whether the notebooks run correctly.
