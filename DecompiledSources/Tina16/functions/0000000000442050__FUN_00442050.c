/* Ghidra address: 00442050 */
/* Ghidra symbol: FUN_00442050 */


longlong * FUN_00442050(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_230 [528];
  
  uVar3 = FUN_00416740(param_2);
  iVar1 = thunk_FUN_041b7fae(uVar3,local_230,0x104);
  if (iVar1 < 0x105) {
    FUN_00414740(param_1,local_230,iVar1);
  }
  else if (0 < iVar1) {
    FUN_004169f0(param_1,iVar1);
    uVar4 = FUN_00416740(*param_1);
    iVar2 = thunk_FUN_041b7fae(uVar3,uVar4,iVar1);
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

