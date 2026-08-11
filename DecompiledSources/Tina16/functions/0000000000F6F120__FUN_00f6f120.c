/* Ghidra address: 00f6f120 */
/* Ghidra symbol: FUN_00f6f120 */


void FUN_00f6f120(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x98 + (longlong)iVar1 * 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9c + (longlong)iVar1 * 8) = 0xffffffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}

