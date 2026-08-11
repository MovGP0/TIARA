/* Ghidra address: 007ff8c0 */
/* Ghidra symbol: FUN_007ff8c0 */


void FUN_007ff8c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar2 = *(longlong *)(param_1 + 0x108);
  FUN_0064ccb0(param_1,param_2,&local_38);
  if (((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x78) == lVar1)) &&
     (lVar2 != *(longlong *)(param_1 + 0x108))) {
    FUN_00655b90(param_1);
  }
  return;
}

