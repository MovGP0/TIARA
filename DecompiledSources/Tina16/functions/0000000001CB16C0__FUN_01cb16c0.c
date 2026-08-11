/* Ghidra address: 01cb16c0 */
/* Ghidra symbol: FUN_01cb16c0 */


void FUN_01cb16c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0xc,4);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_01d311c0(param_2,*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 9,9);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

