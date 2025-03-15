from setuptools import find_packages
from setuptools import setup

setup(
    name='l3xz_openmv_camera_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('l3xz_openmv_camera_interfaces', 'l3xz_openmv_camera_interfaces.*')),
)
