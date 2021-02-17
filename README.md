# AniSurfDis

This MATLAB code computes elastic fields (especially image forces) due to single dislocations in different bi-crystal configurations with surfaces. The theory is based on the image decomposition method developed by Wu and Wang (2007) within the framework of two-dimensional linear anisotropic elasticity (Stroh formalism).                      

The surfaces can be stiff layers of finite thickness adjacent to the free surfaces or purely free surfaces.

The grain boundary (GB) can be an interphase of finite thickness with a given stiffness or a perfect planar interface without thickness.

In the code, the variables with "_I", "_II", "_SU", "_SD" and "_GB" indicate the material properties for the crystal I, the crystal II, the upper stiff layer, the bottom stiff layer and the interphase GB, respectively.

Several "for" loops can be used for multi-CPUs acceleration with "parfor" which is the tolerant option (the MATLAB Parallel Computing Toolbox is needed). For single core calculations, they can be used by simply changing the "parfor" by "for". 

There are four functions that can be used for C-MEX acceleration: "coef_rho", "Rho_density", "rho_distri" and "stress" (the MATLAB Coder Toolbox is needed within MATLAB 2018a or more recent versions). The C_MEX acceleration is the tolerant option with _mex at the end of each function name. The code can be used without this acceleration scheme by simply deleting the "_mex" of each function name in the code.

For more details, please check in the reference papers. 

References  

[1] H.Y. Wang, M.S. Wu and H. Fan, 2007. Image decomposition method for the analysis of a mixed dislocation in a general multilayer. International Journal of Solids and Structures 44, 1563-1581. 

[2] X. Chen, T. Richeton, C. Motz and S. Berbenni, 2021. Surface effects on image stresses and dislocation pile-ups in anisotropic bi-crystals. International Journal of Plasticity                                                                     
