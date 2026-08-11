/* Ghidra address: 00d5a2c0 */
/* Ghidra symbol: FUN_00d5a2c0 */


undefined8 FUN_00d5a2c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00d5a2a0(param_1,iVar3);
      if (lVar1 == param_2) {
        uVar2 = FUN_00d5a2a0(param_1,iVar3);
        uVar2 = FUN_00d58480(uVar2,param_3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

