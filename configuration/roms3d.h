/*
** svn $Id: wc13.h 100 2011-08-17 18:22:46Z arango $
*******************************************************************************
** Copyright (c) 2002-2011 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************

/* =====================================================*/
/* Options for model configuration                      */
/* =====================================================*/
# define CURVGRID
# define PROFILE
# define SPHERICAL
# define MASKING
# define AVERAGES
# undef STATIONS
# undef PERFECT_RESTART
# undef VISC_GRID
# undef DIFF_GRID
# define NO_LBC_ATT
/* ======================================================*/
/* Options associated with momentum equations            */
/* ======================================================*/
# define SOLVE3D
# define UV_ADV
# undef UV_SADVECTION
# define UV_COR
# define UV_QDRAG
# define DJ_GRADPS
# define RI_SPLINES
/* ======================================================*/
/* Options associated with tracers equations             */
/* ======================================================*/ 
# define TS_U3HADVECTION
# define TS_C4VADVECTION
# define SALINITY
# define NONLIN_EOS
# define SPLINES_VDIFF
# define SPLINES_VVISC
/* ======================================================*/
/* Horizontal mixing of momentum and tracers             */
/* ======================================================*/
# define UV_VIS2
# define MIX_S_UV
# define TS_DIF2
# define MIX_ISO_TS
/* ======================================================*/
/* Vertical mixing of momentum and tracers               */
/* ======================================================*/
# undef GLS_MIXING
# define MY25_MIXING

#if defined GLS_MIXING || defined MY25_MIXING
# define N2S2_HORAVG
# define KANTHA_CLAYSON
#endif
/* ======================================================*/
/* Options for analytical fields configuration           */
/* ======================================================*/
# define ANA_BSFLUX
# define ANA_BTFLUX
# define ANA_DQDSST
/* ======================================================*/
/* Options for atmospheric forcing                       */
/* ======================================================*/
# define BULK_FLUXES      
# undef DIURNAL_SRFLUX   
# define SOLAR_SOURCE
# define LONGWAVE_OUT
# define EMINUSP
# undef QCORRECTION
# define ATM_PRESS
# define PRESS_COMPENSATE
/* ======================================================*/
/* Options for tidal forcing                             */
/* ======================================================*/
# undef RAMP_TIDES
# define SSH_TIDES 
# define UV_TIDES
# define ADD_FSOBC
# define ADD_M2OBC
/* ======================================================*/
/* Options for open boundary conditions                  */
/* ======================================================*/
# define RADIATION_2D
/* ======================================================*/
/*   Optimal interpolation data assimilation             */
/* ======================================================*/





