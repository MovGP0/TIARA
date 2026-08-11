/* Ghidra address: 00682f80 */
/* Ghidra symbol: FUN_00682f80 */


void FUN_00682f80(longlong param_1,short *param_2)

{
  FUN_00680e40(param_1,param_2);
  if ((*param_2 == 0xd) && (*(char *)(param_1 + 0x4e2) == '\0')) {
    *param_2 = 0;
  }
  return;
}

