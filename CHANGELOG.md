# Change Log
All notable changes to this project will be documented in this file.
This project does _NOT_ adhere to [Semantic Versioning](http://semver.org/).

## [Unreleased]


## [1.7.1beta] - 2015-12-23
NB: This release has a beta tag as it contains two new big experimental features.
### Fixed
- fix crash with certain 2D CUDA FP calls

## [1.7beta] - 2015-12-04
NB: This release has a beta tag as it contains two new big experimental features.
### Added
- experimental MPI distributed computing support in Python
- experimental support in Python for FP and BP of objects composited from multiple 3d data objects, at possibly different resolutions. This also removes some restrictions on data size for 3D GPU FP and BP.
- support for Python algorithm plugins
- removed restrictions on volume geometries:
    - The volume no longer has to be centered.
    - Voxels still have to be cubes, but no longer 1x1x1.

### Fixed
- build fixes for newer platforms
- various consistency and bug fixes

## [1.6] - 2015-05-29
### Added
- integrate and improve python interface
- integrate opSpot-based opTomo operator

### Fixed
- build fixes for newer platforms
- various consistency and bug fixes

## [1.5] - 2015-01-30
### Added
- add support for fan beam FBP
- remove limits on number of angles in GPU code (They are still limited by available memory, however)

### Changed
- update the included version of the DART algorithm

### Fixed
- build fixes for newer platforms
- various consistency and bug fixes

## [1.4] - 2014-04-07
### Added
- add global astra_set_gpu_index

### Fixed
- various consistency and bug fixes


## 1.3 - 2013-07-02
### Added
- add a version of the DART algorithm (written by Wim van Aarle)

### Fixed
- various consistency and bug fixes

## 1.2 - 2013-03-01
### Fixed
- various consistency and bug fixes

## 1.1 - 2012-10-24
### Added
- add support for matlab single arrays in mex interface

## 1.0 - 2012-08-22
### Added
- first public release

[Unreleased]: https://github.com/astra-toolbox/astra-toolbox/compare/v1.7.1...HEAD
[1.7.1beta]: https://github.com/astra-toolbox/astra-toolbox/compare/v1.7...v1.7.1
[1.7beta]: https://github.com/astra-toolbox/astra-toolbox/compare/v1.6...v1.7
[1.6]: https://github.com/astra-toolbox/astra-toolbox/compare/v1.5...v1.6
[1.5]: https://github.com/astra-toolbox/astra-toolbox/compare/v1.4...v1.5
[1.4]: https://github.com/astra-toolbox/astra-toolbox/compare/v1.3...v1.4
