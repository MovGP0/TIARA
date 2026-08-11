/* Ghidra address: 00d77e50 */
/* Ghidra symbol: FUN_00d77e50 */


void FUN_00d77e50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0x90) = param_2;
  iVar2 = FUN_00d77c90(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00d77c90();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_00d77ca0(param_1,iVar3);
        FUN_00d77e50(uVar1,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

