/* Ghidra address: 006939a0 */
/* Ghidra symbol: FUN_006939a0 */


undefined8 * FUN_006939a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00693850(param_1,param_2);
  iVar1 = FUN_004230c0(param_2);
  if (iVar1 < 1) {
    FUN_00423010(&local_38,0,0,0,0);
    *param_2 = local_38;
    param_2[1] = uStack_30;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
    iVar3 = FUN_004230c0(param_2);
    iVar1 = iVar3 / 2;
    if (iVar2 < iVar3 / 2) {
      iVar1 = iVar2;
    }
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 4) + iVar1;
  }
  return param_2;
}

