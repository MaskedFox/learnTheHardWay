try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup
    
config = {
    "description" : "Learn Python3 the Hard Way",
    "author" : "Masked Fox",
    "url" : "github",
    "download_url" : "https://github.com/MaskedFox/learnTheHardWay",
    "author_email" : "iammaskedfx@gmail.com",
    "version" : "0.1",
    "install_requires" : ["nose"],
    "packages" : ["NAME"],
    "scripts" : [],
    "name" : "LPTHW"
}

setup(**config)
