/* Ghidra address: 00d77ec0 */
/* Ghidra symbol: FUN_00d77ec0 */


void FUN_00d77ec0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  *(char *)(param_1 + 0xf4) = (char)param_2;
  iVar2 = FUN_00d77c90(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00d77c90();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_00d77ca0(param_1,iVar3);
        FUN_00d77ec0(uVar1,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

