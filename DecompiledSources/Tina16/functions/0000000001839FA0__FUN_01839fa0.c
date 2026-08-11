/* Ghidra address: 01839fa0 */
/* Ghidra symbol: FUN_01839fa0 */


undefined8 FUN_01839fa0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = *param_3;
  local_38 = *param_4;
  iVar1 = FUN_018226a0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x30),local_30);
  iVar2 = FUN_018226a0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x30),&local_38);
  if ((iVar1 == -1) || (iVar2 == -1)) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_2,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x30) + 0xa8)
                 ,iVar1,iVar2 - iVar1);
  }
  return param_2;
}

