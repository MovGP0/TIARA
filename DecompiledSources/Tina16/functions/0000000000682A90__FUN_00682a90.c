/* Ghidra address: 00682a90 */
/* Ghidra symbol: FUN_00682a90 */


void FUN_00682a90(longlong param_1,byte *param_2)

{
  FUN_0064ec60(param_1,param_2);
  if (((*param_2 & 2) != 0) &&
     ((*(char *)(param_1 + 0x4e0) == '\0' || (*(char *)(param_1 + 0x4e0) == '\x01')))) {
    *param_2 = *param_2 & 0xfd;
  }
  return;
}

