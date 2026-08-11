/* Ghidra address: 013b2f00 */
/* Ghidra symbol: FUN_013b2f00 */


void FUN_013b2f00(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_013b2ec0(param_2,iVar2);
        (**(code **)(*param_1 + 0x20))(param_1,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

