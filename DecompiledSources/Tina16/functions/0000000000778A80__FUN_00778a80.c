/* Ghidra address: 00778a80 */
/* Ghidra symbol: FUN_00778a80 */


longlong * FUN_00778a80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = thunk_FUN_041b2403(param_2,0xe,0,0);
  FUN_00414740(param_1,0,iVar1);
  if (iVar1 != 0) {
    uVar4 = FUN_00416740(*param_1);
    iVar2 = thunk_FUN_041b2403(param_2,0xd,(longlong)(iVar1 + 1),uVar4);
    if (0 < iVar1 - iVar2) {
      iVar3 = 0;
      if (*param_1 != 0) {
        iVar3 = *(int *)(*param_1 + -4);
      }
      FUN_004169f0(param_1,iVar3 - (iVar1 - iVar2));
    }
  }
  return param_1;
}

