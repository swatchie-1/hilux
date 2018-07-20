from distutils.core import setup
setup(name='HLXspendfrom',
      version='1.0',
      description='Command-line utility for hilux "coin control"',
      author='Gavin Andresen',
      author_email='gavin@hiluxfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
