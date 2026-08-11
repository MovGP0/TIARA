/* Ghidra address: 00441b80 */
/* Ghidra symbol: FUN_00441b80 */


longlong * FUN_00441b80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_238 [520];
  undefined1 local_30 [16];
  
  uVar3 = FUN_00416740(param_2);
  iVar1 = thunk_FUN_03e425d2(uVar3,0x104,local_238,local_30);
  if (iVar1 < 0x105) {
    FUN_00414740(param_1,local_238,iVar1);
  }
  else if (0 < iVar1) {
    FUN_004169f0(param_1,iVar1);
    uVar4 = FUN_00416740(*param_1);
    iVar2 = thunk_FUN_03e425d2(uVar3,iVar1,uVar4,local_30);
    iVar1 = 0;
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + -4);
    }
    if (iVar2 < iVar1) {
      FUN_004169f0(param_1,iVar2);
    }
  }
  return param_1;
}

