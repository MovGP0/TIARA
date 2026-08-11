/* Ghidra address: 01cb1b90 */
/* Ghidra symbol: FUN_01cb1b90 */


void FUN_01cb1b90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x20,4);
    FUN_01d311c0(param_2,param_1 + 0xc,4);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_01d311c0(param_2,*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x6c,8);
        FUN_01d311c0(param_2,*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar2 * 0x6c,
                     *(undefined4 *)(param_1 + 0x20));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

