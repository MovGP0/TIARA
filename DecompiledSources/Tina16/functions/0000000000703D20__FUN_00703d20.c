/* Ghidra address: 00703d20 */
/* Ghidra symbol: FUN_00703d20 */


undefined8 FUN_00703d20(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_004b23b0(param_1,param_2);
  iVar2 = *(int *)(param_1[2] + 0x10) + -1;
  if (param_2 <= iVar2) {
    iVar2 = (iVar2 - param_2) + 1;
    do {
      (**(code **)(*param_1 + 0x60))(param_1,param_2);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

