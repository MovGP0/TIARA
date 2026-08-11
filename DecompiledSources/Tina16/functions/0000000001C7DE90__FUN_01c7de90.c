/* Ghidra address: 01c7de90 */
/* Ghidra symbol: FUN_01c7de90 */


void FUN_01c7de90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = FUN_01c7d9d0(param_1);
  if ((-1 < *(int *)(param_1 + 0x17f8)) &&
     (*(int *)(param_1 + 0x17f8) < *(int *)(*(longlong *)(local_28 + 0x18) + 0x10))) {
    local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b72088,1,*(undefined8 *)PTR_DAT_02004030);
    iVar1 = *(int *)(param_1 + 0x17f8);
    uVar2 = FUN_004aeac0(*(undefined8 *)(local_28 + 0x18),iVar1);
    FUN_01b72750(local_20,iVar1 + 1,uVar2);
    iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
    if (iVar1 == 1) {
      uVar2 = FUN_004aeac0(*(undefined8 *)(local_28 + 0x18),*(undefined4 *)(param_1 + 0x17f8));
      FUN_01b72860(local_20,uVar2);
      FUN_01c7e2a0(param_1);
    }
    FUN_00410f20(local_20);
  }
  return;
}

