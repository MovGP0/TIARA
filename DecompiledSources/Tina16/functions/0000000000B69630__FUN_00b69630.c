/* Ghidra address: 00b69630 */
/* Ghidra symbol: FUN_00b69630 */


undefined8 FUN_00b69630(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00415d10(param_1,((iVar1 + 2) / 3) * 4,0);
  uVar2 = FUN_00414df0(param_1);
  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = *(undefined4 *)(param_2 + -4);
  }
  uVar3 = FUN_00415ab0(param_2);
  FUN_00b693f0(uVar3,uVar2,uVar4);
  return param_1;
}

