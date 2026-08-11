/* Ghidra address: 00c7ab80 */
/* Ghidra symbol: FUN_00c7ab80 */


void FUN_00c7ab80(longlong param_1)

{
  *(undefined1 *)(param_1 + 1000) = 1;
  *(undefined1 *)(param_1 + 0x3e9) = 1;
  *(longlong *)(param_1 + 400) = DAT_02019d30;
  DAT_02019d30 = param_1;
  *PTR_DAT_020036c0 = 0;
  return;
}

