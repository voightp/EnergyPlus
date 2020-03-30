// EnergyPlus, Copyright (c) 1996-2020, The Board of Trustees of the University of Illinois,
// The Regents of the University of California, through Lawrence Berkeley National Laboratory
// (subject to receipt of any required approvals from the U.S. Dept. of Energy), Oak Ridge
// National Laboratory, managed by UT-Battelle, Alliance for Sustainable Energy, LLC, and other
// contributors. All rights reserved.
//
// NOTICE: This Software was developed under funding from the U.S. Department of Energy and the
// U.S. Government consequently retains certain rights. As such, the U.S. Government has been
// granted for itself and others acting on its behalf a paid-up, nonexclusive, irrevocable,
// worldwide license in the Software to reproduce, distribute copies to the public, prepare
// derivative works, and perform publicly and display publicly, and to permit others to do so.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted
// provided that the following conditions are met:
//
// (1) Redistributions of source code must retain the above copyright notice, this list of
//     conditions and the following disclaimer.
//
// (2) Redistributions in binary form must reproduce the above copyright notice, this list of
//     conditions and the following disclaimer in the documentation and/or other materials
//     provided with the distribution.
//
// (3) Neither the name of the University of California, Lawrence Berkeley National Laboratory,
//     the University of Illinois, U.S. Dept. of Energy nor the names of its contributors may be
//     used to endorse or promote products derived from this software without specific prior
//     written permission.
//
// (4) Use of EnergyPlus(TM) Name. If Licensee (i) distributes the software in stand-alone form
//     without changes from the version obtained under this License, or (ii) Licensee makes a
//     reference solely to the software portion of its product, Licensee must refer to the
//     software as "EnergyPlus version X" software, where "X" is the version number Licensee
//     obtained under this License and may not use a different name for the software. Except as
//     specifically required in this Section (4), Licensee shall not use in a company name, a
//     product name, in advertising, publicity, or other promotional activities any name, trade
//     name, trademark, logo, or other designation of "EnergyPlus", "E+", "e+" or confusingly
//     similar designation, without the U.S. Department of Energy's prior written consent.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef ThermalISO15099Calc_hh_INCLUDED
#define ThermalISO15099Calc_hh_INCLUDED

// ObjexxFCL Headers
#include <ObjexxFCL/Array2A.hh>

// EnergyPlus Headers
#include <EnergyPlus/EnergyPlus.hh>

namespace EnergyPlus {

namespace ThermalISO15099Calc {

    // Data
    // private picard

    // Functions

    void film(Real64 const tex, Real64 const tw, Real64 const ws, int const iwd, Real64 &hcout, int const ibc);

    void Calc_ISO15099(int const nlayer,
                       int const iwd,
                       Real64 &tout,
                       Real64 &tind,
                       Real64 &trmin,
                       Real64 const wso,
                       Real64 const wsi,
                       Real64 const dir,
                       Real64 const outir,
                       int const isky,
                       Real64 const tsky,
                       Real64 &esky,
                       Real64 const fclr,
                       Real64 const VacuumPressure,
                       Real64 const VacuumMaxGapThickness,
                       EPVector<Real64> &gap,
                       EPVector<Real64> &thick,
                       EPVector<Real64> &scon,
                       const EPVector<Real64> &tir,
                       const EPVector<Real64> &emis,
                       Real64 const totsol,
                       Real64 const tilt,
                       const EPVector<Real64> &asol,
                       Real64 const height,
                       Real64 const heightt,
                       Real64 const width,
                       const EPVector<Real64> &presure,
                       Array2A_int const iprop,
                       Array2A<Real64> const frct,
                       Array2A<Real64> const xgcon,
                       Array2A<Real64> const xgvis,
                       Array2A<Real64> const xgcp,
                       const EPVector<Real64> &xwght,
                       const EPVector<Real64> &gama,
                       const EPVector<int> &nmix,
                       const EPVector<int> &SupportPillar,     // Shows whether or not gap have support pillar
                       const EPVector<Real64> &PillarSpacing, // Pillar spacing for each gap (used in case there is support pillar)
                       const EPVector<Real64> &PillarRadius,  // Pillar radius for each gap (used in case there is support pillar)
                       EPVector<Real64> &theta,
                       EPVector<Real64> &q,
                       EPVector<Real64> &qv,
                       Real64 &ufactor,
                       Real64 &sc,
                       Real64 &hflux,
                       Real64 &hcin,
                       Real64 &hcout,
                       Real64 &hrin,
                       Real64 &hrout,
                       Real64 &hin,
                       Real64 &hout,
                       EPVector<Real64> &hcgas,
                       EPVector<Real64> &hrgas,
                       Real64 &shgc,
                       int &nperr,
                       std::string &ErrorMessage,
                       Real64 &shgct,
                       Real64 &tamb,
                       Real64 &troom,
                       const EPVector<int> &ibc,
                       const EPVector<Real64> &Atop,
                       const EPVector<Real64> &Abot,
                       const EPVector<Real64> &Al,
                       const EPVector<Real64> &Ar,
                       const EPVector<Real64> &Ah,
                       const EPVector<Real64> &SlatThick,
                       const EPVector<Real64> &SlatWidth,
                       const EPVector<Real64> &SlatAngle,
                       const EPVector<Real64> &SlatCond,
                       const EPVector<Real64> &SlatSpacing,
                       const EPVector<Real64> &SlatCurve,
                       const EPVector<Real64> &vvent,
                       const EPVector<Real64> &tvent,
                       const EPVector<int> &LayerType,
                       const EPVector<int> &nslice,
                       const EPVector<Real64> &LaminateA,
                       const EPVector<Real64> &LaminateB,
                       const EPVector<Real64> &sumsol,
                       EPVector<Real64> &Ra,
                       EPVector<Real64> &Nu,
                       int const ThermalMod,
                       int const Debug_mode, // Switch for debug output files:
                       Real64 &ShadeEmisRatioOut,
                       Real64 &ShadeEmisRatioIn,
                       Real64 &ShadeHcRatioOut,
                       Real64 &ShadeHcRatioIn,
                       Real64 &HcUnshadedOut,
                       Real64 &HcUnshadedIn,
                       EPVector<Real64> &Keff,
                       EPVector<Real64> &ShadeGapKeffConv,
                       Real64 const SDScalar,
                       int const SHGCCalc, // SHGC calculation switch:
                       int &NumOfIterations,
                       Real64 const egdeGlCorrFac // Edge of glass correction factor
    );

    void therm1d(int const nlayer,
                 int const iwd,
                 Real64 &tout,
                 Real64 &tind,
                 Real64 const wso,
                 Real64 const wsi,
                 Real64 const VacuumPressure,
                 Real64 const VacuumMaxGapThickness,
                 Real64 const dir,
                 Real64 &ebsky,
                 Real64 const Gout,
                 Real64 const trmout,
                 Real64 const trmin,
                 Real64 &ebroom,
                 Real64 const Gin,
                 const EPVector<Real64> &tir,
                 const EPVector<Real64> &rir,
                 const EPVector<Real64> &emis,
                 const EPVector<Real64> &gap,
                 const EPVector<Real64> &thick,
                 const EPVector<Real64> &scon,
                 Real64 const tilt,
                 const EPVector<Real64> &asol,
                 Real64 const height,
                 Real64 const heightt,
                 Real64 const width,
                 Array2_int const &iprop,
                 Array2<Real64> const &frct,
                 const EPVector<Real64> &presure,
                 const EPVector<int> &nmix,
                 const EPVector<Real64> &wght,
                 Array2<Real64> const &gcon,
                 Array2<Real64> const &gvis,
                 Array2<Real64> const &gcp,
                 const EPVector<Real64> &gama,
                 const EPVector<int> &SupportPillar,
                 const EPVector<Real64> &PillarSpacing,
                 const EPVector<Real64> &PillarRadius,
                 EPVector<Real64> &theta,
                 EPVector<Real64> &q,
                 EPVector<Real64> &qv,
                 Real64 &flux,
                 Real64 &hcin,
                 Real64 &hrin,
                 Real64 &hcout,
                 Real64 &hrout,
                 Real64 &hin,
                 Real64 &hout,
                 EPVector<Real64> &hcgas,
                 EPVector<Real64> &hrgas,
                 Real64 &ufactor,
                 int &nperr,
                 std::string &ErrorMessage,
                 Real64 &tamb,
                 Real64 &troom,
                 const EPVector<int> &ibc,
                 const EPVector<Real64> &Atop,
                 const EPVector<Real64> &Abot,
                 const EPVector<Real64> &Al,
                 const EPVector<Real64> &Ar,
                 const EPVector<Real64> &Ah,
                 const EPVector<Real64> &EffectiveOpenness, // Effective layer openness [m2]
                 const EPVector<Real64> &vvent,
                 const EPVector<Real64> &tvent,
                 const EPVector<int> &LayerType,
                 EPVector<Real64> &Ra,
                 EPVector<Real64> &Nu,
                 EPVector<Real64> &vfreevent,
                 EPVector<Real64> &qcgas,
                 EPVector<Real64> &qrgas,
                 EPVector<Real64> &Ebf,
                 EPVector<Real64> &Ebb,
                 EPVector<Real64> &Rf,
                 EPVector<Real64> &Rb,
                 Real64 &ShadeEmisRatioOut,
                 Real64 &ShadeEmisRatioIn,
                 Real64 &ShadeHcModifiedOut,
                 Real64 &ShadeHcModifiedIn,
                 int const ThermalMod,
                 int const Debug_mode, // Switch for debug output files:
                 Real64 &AchievedErrorTolerance,
                 int &TotalIndex,
                 Real64 const edgeGlCorrFac // Edge of glass correction factor
    );

    void guess(Real64 const tout,
               Real64 const tind,
               int const nlayer,
               const EPVector<Real64> &gap,
               const EPVector<Real64> &thick,
               Real64 &width,
               EPVector<Real64> &theta,
               EPVector<Real64> &Ebb,
               EPVector<Real64> &Ebf,
               EPVector<Real64> &Tgap);

    void TemperaturesFromEnergy(EPVector<Real64> &theta,
                                EPVector<Real64> &Tgap,
                                const EPVector<Real64> &Ebf,
                                const EPVector<Real64> &Ebb,
                                int const nlayer,
                                int &nperr,
                                std::string &ErrorMessage);

    void solarISO15099(Real64 const totsol, Real64 const rtot, const EPVector<Real64> &rs, int const nlayer, const EPVector<Real64> &absol, Real64 &sf);

    void resist(int const nlayer,
                Real64 const trmout,
                Real64 const Tout,
                Real64 const trmin,
                Real64 const tind,
                const EPVector<Real64> &hcgas,
                const EPVector<Real64> &hrgas,
                EPVector<Real64> &Theta,
                EPVector<Real64> &qlayer,
                const EPVector<Real64> &qv,
                const EPVector<int> &LayerType,
                const EPVector<Real64> &thick,
                const EPVector<Real64> &scon,
                Real64 &ufactor,
                Real64 &flux,
                EPVector<Real64> &qcgas,
                EPVector<Real64> &qrgas);

    void hatter(int const nlayer,
                int const iwd,
                Real64 const tout,
                Real64 const tind,
                Real64 const wso,
                Real64 const wsi,
                Real64 const VacuumPressure,
                Real64 const VacuumMaxGapThickness,
                Real64 &ebsky,
                Real64 &tamb,
                Real64 &ebroom,
                Real64 &troom,
                const EPVector<Real64> &gap,
                Real64 const height,
                Real64 const heightt,
                const EPVector<Real64> &scon,
                Real64 const tilt,
                EPVector<Real64> &theta,
                const EPVector<Real64> &Tgap,
                EPVector<Real64> &Radiation,
                Real64 const trmout,
                Real64 const trmin,
                Array2_int const &iprop,
                Array2<Real64> const &frct,
                const EPVector<Real64> &presure,
                const EPVector<int> &nmix,
                const EPVector<Real64> &wght,
                Array2<Real64> const &gcon,
                Array2<Real64> const &gvis,
                Array2<Real64> const &gcp,
                const EPVector<Real64> &gama,
                const EPVector<int> &SupportPillar,
                const EPVector<Real64> &PillarSpacing,
                const EPVector<Real64> &PillarRadius,
                EPVector<Real64> &hgas,
                EPVector<Real64> &hcgas,
                EPVector<Real64> &hrgas,
                Real64 &hcin,
                Real64 &hcout,
                Real64 const hin,
                Real64 const hout,
                int const index,
                const EPVector<int> &ibc,
                int &nperr,
                std::string &ErrorMessage,
                Real64 &hrin,
                Real64 &hrout,
                EPVector<Real64> &Ra,
                EPVector<Real64> &Nu);

    void effectiveLayerCond(int const nlayer,
                            const EPVector<int> &LayerType,             // Layer type
                            const EPVector<Real64> &scon,              // Layer thermal conductivity
                            const EPVector<Real64> &thick,             // Layer thickness
                            Array2A_int const iprop,                 // Gas type in gaps
                            Array2A<Real64> const frct,              // Fraction of gas
                            const EPVector<int> &nmix,                  // Gas mixture
                            const EPVector<Real64> &pressure,          // Gas pressure [Pa]
                            const EPVector<Real64> &wght,              // Molecular weight
                            Array2A<Real64> const gcon,              // Gas specific conductivity
                            Array2A<Real64> const gvis,              // Gas specific viscosity
                            Array2A<Real64> const gcp,               // Gas specific heat
                            const EPVector<Real64> &EffectiveOpenness, // Layer effective openneess [m2]
                            EPVector<Real64> &theta,                   // Layer surface tempeartures [K]
                            EPVector<Real64> &sconScaled,             // Layer conductivity divided by thickness
                            int &nperr,                              // Error message flag
                            std::string &ErrorMessage                // Error message
    );

    void filmi(Real64 const tair,
               Real64 const t,
               int const nlayer,
               Real64 const tilt,
               Real64 const wsi,
               Real64 const height,
               Array2A_int const iprop,
               Array2A<Real64> const frct,
               const EPVector<Real64> &presure,
               const EPVector<int> &nmix,
               const EPVector<Real64> &wght,
               Array2A<Real64> const gcon,
               Array2A<Real64> const gvis,
               Array2A<Real64> const gcp,
               Real64 &hcin,
               int const ibc,
               int &nperr,
               std::string &ErrorMessage);

    void filmg(Real64 const tilt,
               const EPVector<Real64> &theta,
               const EPVector<Real64> &Tgap,
               int const nlayer,
               Real64 const height,
               const EPVector<Real64> &gap,
               Array2A_int const iprop,
               Array2A<Real64> const frct,
               Real64 const VacuumPressure,
               const EPVector<Real64> &presure,
               const EPVector<int> &nmix,
               const EPVector<Real64> &wght,
               Array2A<Real64> const gcon,
               Array2A<Real64> const gvis,
               Array2A<Real64> const gcp,
               const EPVector<Real64> &gama,
               EPVector<Real64> &hcgas,
               EPVector<Real64> &Rayleigh,
               EPVector<Real64> &Nu,
               int &nperr,
               std::string &ErrorMessage);

    void filmPillar(const EPVector<int> &SupportPillar,     // Shows whether or not gap have support pillar
                    const EPVector<Real64> &scon,          // Conductivity of glass layers
                    const EPVector<Real64> &PillarSpacing, // Pillar spacing for each gap (used in case there is support pillar)
                    const EPVector<Real64> &PillarRadius,  // Pillar radius for each gap (used in case there is support pillar)
                    int const nlayer,
                    const EPVector<Real64> &gap,
                    EPVector<Real64> &hcgas,
                    Real64 const VacuumMaxGapThickness,
                    int &nperr,
                    std::string &ErrorMessage);

    void nusselt(Real64 const tilt, Real64 const ra, Real64 const asp, Real64 &gnu, int &nperr, std::string &ErrorMessage);

    //  subroutine picard(nlayer, alpha, Ebb, Ebf, Rf, Rb, Ebbold, Ebfold, Rfold, Rbold)

    //    integer, intent(in) :: nlayer
    //    REAL(r64), intent(in) :: alpha
    //    REAL(r64), intent(in) :: Ebbold(maxlay), Ebfold(maxlay), Rbold(maxlay), Rfold(maxlay)
    //    REAL(r64), intent(inout) :: Ebb(maxlay), Ebf(maxlay), Rb(maxlay), Rf(maxlay)

    //    integer :: i

    //    do i=1,nlayer
    //      Ebb(i) = alpha * Ebb(i) + (1.0d0-alpha) * Ebbold(i)
    //      Ebf(i) = alpha * Ebf(i) + (1.0d0-alpha) * Ebfold(i)
    //      Rb(i) = alpha * Rb(i) + (1.0d0-alpha) * Rbold(i)
    //      Rf(i) = alpha * Rf(i) + (1.0d0-alpha) * Rfold(i)
    //    end do

    //    return
    //  end subroutine picard

    void adjusthhat(int const SDLayerIndex,
                    const EPVector<int> &ibc,
                    Real64 const tout,
                    Real64 const tind,
                    int const nlayer,
                    const EPVector<Real64> &theta,
                    Real64 const wso,
                    Real64 const wsi,
                    int const iwd,
                    Real64 const height,
                    Real64 const heightt,
                    Real64 const tilt,
                    const EPVector<Real64> &thick,
                    const EPVector<Real64> &gap,
                    Real64 const hout,
                    Real64 const hrout,
                    Real64 const hin,
                    Real64 const hrin,
                    Array2A_int const iprop,
                    Array2A<Real64> const frct,
                    const EPVector<Real64> &presure,
                    const EPVector<int> &nmix,
                    const EPVector<Real64> &wght,
                    Array2A<Real64> const gcon,
                    Array2A<Real64> const gvis,
                    Array2A<Real64> const gcp,
                    int const index,
                    Real64 const SDScalar,
                    const EPVector<Real64> &Ebf,
                    const EPVector<Real64> &Ebb,
                    EPVector<Real64> &hgas,
                    EPVector<Real64> &hhat,
                    int &nperr,
                    std::string &ErrorMessage);

    void storeIterationResults(int const nlayer,
                               int const index,
                               const EPVector<Real64> &theta,
                               Real64 const trmout,
                               Real64 const tamb,
                               Real64 const trmin,
                               Real64 const troom,
                               Real64 const ebsky,
                               Real64 const ebroom,
                               Real64 const hcin,
                               Real64 const hcout,
                               Real64 const hrin,
                               Real64 const hrout,
                               Real64 const hin,
                               Real64 const hout,
                               const EPVector<Real64> &Ebb,
                               const EPVector<Real64> &Ebf,
                               const EPVector<Real64> &Rb,
                               const EPVector<Real64> &Rf,
                               int &EP_UNUSED(nperr));

    void CalculateFuncResults(int const nlayer, Array2<Real64> const &a, const EPVector<Real64> &b, const EPVector<Real64> &x, EPVector<Real64> &FRes);

} // namespace ThermalISO15099Calc

} // namespace EnergyPlus

#endif
