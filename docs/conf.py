from sphinx_api_relink.helpers import get_execution_mode

REPO_NAME = "strong2020-salamanca"
BRANCH = "main"

author = "Participants of the STRONG2020 HaSP School"
autosectionlabel_prefix_document = True
comments_config = {
    "hypothesis": True,
}
copybutton_prompt_is_regexp = True
copybutton_prompt_text = r">>> |\.\.\. "  # doctest
copyright = "2023"  # noqa: A001
exclude_patterns = [
    "_build",
    "**/.ipynb_checkpoints/",
    "**/.venv/*",
    "**/.virtual_documents/",
    "lecture24/utilities.ipynb",
]
extensions = [
    "myst_nb",
    "sphinx_book_theme",
    "sphinx_comments",
    "sphinx_copybutton",
    "sphinx_design",
    "sphinx_exercise",
    "sphinx_togglebutton",
]
html_favicon = "_static/favicon.ico"
html_js_files = [
    "https://cdnjs.cloudflare.com/ajax/libs/require.js/2.3.4/require.min.js"
]
html_last_updated_fmt = "%-d %B %Y"
html_logo = "_static/logo.svg"
html_show_copyright = False
html_static_path = ["_static"]
html_theme = "sphinx_book_theme"
html_theme_options = {
    "icon_links": [
        {
            "name": "GitHub",
            "url": f"https://github.com/ComPWA/{REPO_NAME}",
            "icon": "fa-brands fa-github",
        },
        {
            "name": "Indico",
            "url": "https://indico.ific.uv.es/event/6803",
            "icon": "https://indico.cern.ch/images/indico.ico",
            "type": "url",
        },
        {
            "name": "Launch on Binder",
            "url": (
                f"https://mybinder.org/v2/gh/ComPWA/{REPO_NAME}/{BRANCH}?urlpath=lab"
            ),
            "icon": "https://mybinder.readthedocs.io/en/latest/_static/favicon.png",
            "type": "url",
        },
        {
            "name": "Launch on Colaboratory",
            "url": f"https://colab.research.google.com/github/ComPWA/{REPO_NAME}/blob/{BRANCH}",
            "icon": "https://avatars.githubusercontent.com/u/33467679?s=100",
            "type": "url",
        },
        {
            "name": "Common Partial Wave Analysis",
            "url": "https://compwa.github.io",
            "icon": "https://compwa.github.io/_static/favicon.ico",
            "type": "url",
        },
    ],
    "launch_buttons": {
        "binderhub_url": "https://mybinder.org",
        "colab_url": "https://colab.research.google.com",
        "notebook_interface": "jupyterlab",
    },
    "path_to_docs": "docs",
    "repository_branch": "main",
    "repository_url": "https://github.com/ComPWA/strong2020-salamanca",
    "show_toc_level": 2,
    "use_download_button": False,
    "use_edit_page_button": True,
    "use_issues_button": True,
    "use_repository_button": True,
    "use_source_button": True,
}
html_title = "Solutions to STRONG2020 HaSP School"
linkcheck_anchors = False
linkcheck_ignore = [
    "https://indico.ific.uv.es/event/6803",
    "https://mmikhasenko.github.io/ReactionAmplitudeExamples.jl",
]
myst_enable_extensions = [
    "amsmath",
    "colon_fence",
    "dollarmath",
    "strikethrough",
]
myst_update_mathjax = False
mathjax_path = "https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js"
nb_execution_excludepatterns = [
    "**.ipynb_checkpoints",
    ".virtual_documents/*",
    "lecture24/utilities.ipynb",
]
nb_execution_mode = get_execution_mode()
nb_execution_show_tb = True
nb_execution_timeout = -1
suppress_warnings = [
    "mystnb.unknown_mime_type",
]
