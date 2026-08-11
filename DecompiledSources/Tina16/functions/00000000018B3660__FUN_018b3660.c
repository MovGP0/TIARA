/* Ghidra address: 018b3660 */
/* Ghidra symbol: FUN_018b3660 */


void FUN_018b3660(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_0181b910(param_1,param_2);
  FUN_00452320(param_1 + 0x800);
  FUN_00452320(param_1 + 0x808);
  if (param_2 != *(int *)PTR_DAT_02001400) {
    uVar2 = FUN_007416c0(&PTR_FUN_00732068,1,param_1);
    *(undefined8 *)(param_1 + 0x800) = uVar2;
    uVar2 = FUN_007416c0(&PTR_FUN_00732068,1,param_1);
    *(undefined8 *)(param_1 + 0x808) = uVar2;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x318);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x318));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x318);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x768) + 0x318));
    uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x318));
    FUN_0180c730(uVar2,param_2);
    uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x318));
    FUN_0180c730(uVar2,param_2);
  }
  return;
}

