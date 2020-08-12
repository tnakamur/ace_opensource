/* Generated by ioctls_gen.sh from definitions found in $linux/arch/arm/include/ tree. */
{ "asm/ioctls.h", "FIOQSIZE", 0, 0x545E, 0 },
{ "linux/kvm.h", "KVM_ARM_PREFERRED_TARGET", _IOC_READ, 0xaeaf, 0x20 },
{ "linux/kvm.h", "KVM_ARM_SET_DEVICE_ADDR", _IOC_WRITE, 0xaeab, 0x10 },
{ "linux/kvm.h", "KVM_ARM_VCPU_INIT", _IOC_WRITE, 0xaeae, 0x20 },
{ "linux/kvm.h", "KVM_ASSIGN_DEV_IRQ", _IOC_WRITE, 0xae70, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_PCI_DEVICE", _IOC_READ, 0xae69, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_INTX_MASK", _IOC_WRITE, 0xaea4, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_MSIX_ENTRY", _IOC_WRITE, 0xae74, 0x10 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_MSIX_NR", _IOC_WRITE, 0xae73, 0x08 },
{ "linux/kvm.h", "KVM_CHECK_EXTENSION", _IOC_NONE, 0xae03, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_DEVICE", _IOC_READ|_IOC_WRITE, 0xaee0, 0x0c },
{ "linux/kvm.h", "KVM_CREATE_IRQCHIP", _IOC_NONE, 0xae60, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_PIT", _IOC_NONE, 0xae64, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_PIT2", _IOC_WRITE, 0xae77, 0x40 },
{ "linux/kvm.h", "KVM_CREATE_VCPU", _IOC_NONE, 0xae41, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_VM", _IOC_NONE, 0xae01, 0x00 },
{ "linux/kvm.h", "KVM_DEASSIGN_DEV_IRQ", _IOC_WRITE, 0xae75, 0x40 },
{ "linux/kvm.h", "KVM_DEASSIGN_PCI_DEVICE", _IOC_WRITE, 0xae72, 0x40 },
{ "linux/kvm.h", "KVM_DIRTY_TLB", _IOC_WRITE, 0xaeaa, 0x10 },
{ "linux/kvm.h", "KVM_ENABLE_CAP", _IOC_WRITE, 0xaea3, 0x68 },
{ "linux/kvm.h", "KVM_GET_API_VERSION", _IOC_NONE, 0xae00, 0x00 },
{ "linux/kvm.h", "KVM_GET_CLOCK", _IOC_READ, 0xae7c, 0x30 },
{ "linux/kvm.h", "KVM_GET_DEVICE_ATTR", _IOC_WRITE, 0xaee2, 0x18 },
{ "linux/kvm.h", "KVM_GET_DIRTY_LOG", _IOC_WRITE, 0xae42, 0x10 },
{ "linux/kvm.h", "KVM_GET_FPU", _IOC_READ, 0xae8c, 0x00 },
{ "linux/kvm.h", "KVM_GET_IRQCHIP", _IOC_READ|_IOC_WRITE, 0xae62, 0x208 },
{ "linux/kvm.h", "KVM_GET_MP_STATE", _IOC_READ, 0xae98, 0x04 },
{ "linux/kvm.h", "KVM_GET_NR_MMU_PAGES", _IOC_NONE, 0xae45, 0x00 },
{ "linux/kvm.h", "KVM_GET_ONE_REG", _IOC_WRITE, 0xaeab, 0x10 },
{ "linux/kvm.h", "KVM_GET_REGS", _IOC_READ, 0xae81, 0x98 },
{ "linux/kvm.h", "KVM_GET_REG_LIST", _IOC_READ|_IOC_WRITE, 0xaeb0, 0x08 },
{ "linux/kvm.h", "KVM_GET_SREGS", _IOC_READ, 0xae83, 0x00 },
{ "linux/kvm.h", "KVM_GET_TSC_KHZ", _IOC_NONE, 0xaea3, 0x00 },
{ "linux/kvm.h", "KVM_GET_VCPU_MMAP_SIZE", _IOC_NONE, 0xae04, 0x00 },
{ "linux/kvm.h", "KVM_HAS_DEVICE_ATTR", _IOC_WRITE, 0xaee3, 0x18 },
{ "linux/kvm.h", "KVM_INTERRUPT", _IOC_WRITE, 0xae86, 0x04 },
{ "linux/kvm.h", "KVM_IOEVENTFD", _IOC_WRITE, 0xae79, 0x40 },
{ "linux/kvm.h", "KVM_IRQFD", _IOC_WRITE, 0xae76, 0x20 },
{ "linux/kvm.h", "KVM_IRQ_LINE", _IOC_WRITE, 0xae61, 0x08 },
{ "linux/kvm.h", "KVM_IRQ_LINE_STATUS", _IOC_READ|_IOC_WRITE, 0xae67, 0x08 },
{ "linux/kvm.h", "KVM_KVMCLOCK_CTRL", _IOC_NONE, 0xaead, 0x00 },
{ "linux/kvm.h", "KVM_NMI", _IOC_NONE, 0xae9a, 0x00 },
{ "linux/kvm.h", "KVM_REGISTER_COALESCED_MMIO", _IOC_WRITE, 0xae67, 0x10 },
{ "linux/kvm.h", "KVM_REINJECT_CONTROL", _IOC_NONE, 0xae71, 0x00 },
{ "linux/kvm.h", "KVM_RUN", _IOC_NONE, 0xae80, 0x00 },
{ "linux/kvm.h", "KVM_SET_BOOT_CPU_ID", _IOC_NONE, 0xae78, 0x00 },
{ "linux/kvm.h", "KVM_SET_CLOCK", _IOC_WRITE, 0xae7b, 0x30 },
{ "linux/kvm.h", "KVM_SET_DEVICE_ATTR", _IOC_WRITE, 0xaee1, 0x18 },
{ "linux/kvm.h", "KVM_SET_FPU", _IOC_WRITE, 0xae8d, 0x00 },
{ "linux/kvm.h", "KVM_SET_GSI_ROUTING", _IOC_WRITE, 0xae6a, 0x08 },
{ "linux/kvm.h", "KVM_SET_GUEST_DEBUG", _IOC_WRITE, 0xae9b, 0x08 },
{ "linux/kvm.h", "KVM_SET_IDENTITY_MAP_ADDR", _IOC_WRITE, 0xae48, 0x08 },
{ "linux/kvm.h", "KVM_SET_IRQCHIP", _IOC_READ, 0xae63, 0x208 },
{ "linux/kvm.h", "KVM_SET_MEMORY_REGION", _IOC_WRITE, 0xae40, 0x18 },
{ "linux/kvm.h", "KVM_SET_MP_STATE", _IOC_WRITE, 0xae99, 0x04 },
{ "linux/kvm.h", "KVM_SET_NR_MMU_PAGES", _IOC_NONE, 0xae44, 0x00 },
{ "linux/kvm.h", "KVM_SET_ONE_REG", _IOC_WRITE, 0xaeac, 0x10 },
{ "linux/kvm.h", "KVM_SET_REGS", _IOC_WRITE, 0xae82, 0x98 },
{ "linux/kvm.h", "KVM_SET_SIGNAL_MASK", _IOC_WRITE, 0xae8b, 0x04 },
{ "linux/kvm.h", "KVM_SET_SREGS", _IOC_WRITE, 0xae84, 0x00 },
{ "linux/kvm.h", "KVM_SET_TSC_KHZ", _IOC_NONE, 0xaea2, 0x00 },
{ "linux/kvm.h", "KVM_SET_TSS_ADDR", _IOC_NONE, 0xae47, 0x00 },
{ "linux/kvm.h", "KVM_SET_USER_MEMORY_REGION", _IOC_WRITE, 0xae46, 0x20 },
{ "linux/kvm.h", "KVM_SET_VAPIC_ADDR", _IOC_WRITE, 0xae93, 0x08 },
{ "linux/kvm.h", "KVM_SIGNAL_MSI", _IOC_WRITE, 0xaea5, 0x20 },
{ "linux/kvm.h", "KVM_SMI", _IOC_NONE, 0xaeb7, 0x00 },
{ "linux/kvm.h", "KVM_TPR_ACCESS_REPORTING", _IOC_READ|_IOC_WRITE, 0xae92, 0x28 },
{ "linux/kvm.h", "KVM_TRANSLATE", _IOC_READ|_IOC_WRITE, 0xae85, 0x18 },
{ "linux/kvm.h", "KVM_UNREGISTER_COALESCED_MMIO", _IOC_WRITE, 0xae68, 0x10 },
