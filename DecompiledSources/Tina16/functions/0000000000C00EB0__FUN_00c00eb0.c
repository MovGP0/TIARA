/* Ghidra address: 00c00eb0 */
/* Ghidra symbol: FUN_00c00eb0 */


void FUN_00c00eb0(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x498) != '\0') {
    iVar1 = FUN_00be1000(*(undefined8 *)(param_1 + 0x4a8));
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        FUN_00c00b80(param_1,iVar1,0);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    FUN_00bf3990(param_1,0xffffffff,0xffffffff);
    FUN_00bf37c0(param_1,0xffffffff,0xffffffff);
    FUN_00c03710(param_1);
  }
  return;
}

