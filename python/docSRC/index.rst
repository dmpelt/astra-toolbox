.. .. documentation master file, created by
   sphinx-quickstart on Wed Mar 13 16:36:32 2013.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

The ASTRA Toolbox
=================

The ASTRA Toolbox is a MATLAB and Python toolbox of high-performance GPU primitives for 2D and 3D tomography.

We support 2D parallel and fan beam geometries, and 3D parallel and cone beam. All of them have highly flexible source/detector positioning.

A large number of 2D and 3D algorithms are available, including FBP, SIRT, SART, CGLS.

The basic forward and backward projection operations are GPU-accelerated, and directly callable from MATLAB and Python to enable building new algorithms.

Documentation
=============

Python API reference:

.. toctree::
   :maxdepth: 4

   data2d
   data3d
   projector
   algorithm
   matrix
   creators
   functions
   operator
   plugins
   matlab
   astra
.. astra
.. builder

For more information, see the matlab and python code samples in samples/ and on http://sf.net/projects/astra-toolbox .

References
==========

If you use the ASTRA Toolbox for your research, we would appreciate it if you would refer to the following paper:

* W. van Aarle, W. J. Palenstijn, J. De Beenhouwer, T. Altantzis, S. Bals, K J. Batenburg, and J. Sijbers, "The ASTRA Toolbox: A platform for advanced algorithm development in electron tomography", Ultramicroscopy (2015), http://dx.doi.org/10.1016/j.ultramic.2015.05.002

Additionally, if you use parallel beam GPU code, we would appreciate it if you would refer to the following paper:

* W. J. Palenstijn, K J. Batenburg, and J. Sijbers, "Performance improvements for iterative electron tomography reconstruction using graphics processing units (GPUs)", Journal of Structural Biology, vol. 176, issue 2, pp. 250-253, 2011, http://dx.doi.org/10.1016/j.jsb.2011.07.017

License
=======

The ASTRA Toolbox is open source under the GPLv3 license.

Contact
=======

email: astra@uantwerpen.be website: http://sf.net/projects/astra-toolbox

Copyright: 2010-2015, iMinds-Vision Lab, University of Antwerp 2014-2015, CWI, Amsterdam http://visielab.uantwerpen.be/ and http://www.cwi.nl/


Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`

