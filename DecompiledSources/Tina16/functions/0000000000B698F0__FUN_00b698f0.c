/* Ghidra address: 00b698f0 */
/* Ghidra symbol: FUN_00b698f0 */


undefined8 FUN_00b698f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00415d10(param_1,(ulonglong)(uint)(iVar1 / 4) * 3,0);
  uVar3 = FUN_00414df0(param_1);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  uVar4 = FUN_00415ab0(param_2);
  uVar2 = FUN_00b69770(uVar4,uVar3,uVar2);
  FUN_00415d10(param_1,uVar2,0);
  return param_1;
}

