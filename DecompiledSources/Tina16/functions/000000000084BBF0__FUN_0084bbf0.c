/* Ghidra address: 0084bbf0 */
/* Ghidra symbol: FUN_0084bbf0 */


void FUN_0084bbf0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x10))) {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    if (param_2 <= iVar3) {
      iVar3 = (iVar3 - param_2) + 1;
      do {
        uVar1 = *(undefined8 *)(param_1 + 8);
        uVar2 = FUN_0084b550(uVar1,param_2 + 1);
        FUN_0084b650(uVar1,param_2,uVar2);
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0084b650(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),0);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return;
}

