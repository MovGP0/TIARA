/* Ghidra address: 00bc1f70 */
/* Ghidra symbol: FUN_00bc1f70 */


undefined8 FUN_00bc1f70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x148);
  FUN_004169f0(param_2,iVar2);
  if (0 < iVar2) {
    uVar1 = FUN_00414de0(param_2);
    FUN_00711330(uVar1,*(longlong *)(param_1 + 0xe0) + (longlong)*(int *)(param_1 + 0x148) * 2,iVar2
                );
  }
  return param_2;
}

