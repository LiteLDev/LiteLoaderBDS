// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_BEACONPAYMENTCONTAINERVALIDATION
#include "Extra/BeaconPaymentContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEACONPAYMENTCONTAINERVALIDATION
class BeaconPaymentContainerValidation : public ContainerValidationBase {
#include "Extra/BeaconPaymentContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~BeaconPaymentContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual int getAvailableSetCount(int, class ItemStackBase const&) const;
    /*4*/ virtual bool isItemAllowedToAdd(class ItemStack const&) const;
    /*5*/ virtual void __unk_vfn_0();
    /*
    inline bool canDestroy(class ContainerScreenContext const& a0) const{
        bool (BeaconPaymentContainerValidation::*rv)(class ContainerScreenContext const&) const;
        *((void**)&rv) = dlsym("?canDestroy@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0));
    }
    */

protected:

private:
};