/* Ghidra address: 01619b00 */
/* Ghidra symbol: FUN_01619b00 */


void FUN_01619b00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004b89e0(param_2,param_1 + 8,4);
  FUN_004b89e0(param_2,param_1 + 0xc,4);
  FUN_004b89e0(param_2,param_1 + 0x10,4);
  iVar2 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b89e0(param_2,*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8,8);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

