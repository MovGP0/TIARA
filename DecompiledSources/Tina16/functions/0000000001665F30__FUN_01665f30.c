/* Ghidra address: 01665f30 */
/* Ghidra symbol: FUN_01665f30 */


void FUN_01665f30(char param_1,byte param_2,uint *param_3)

{
  if (param_1 != '\0') {
    *param_3 = *param_3 | 1 << (param_2 & 0x1f);
  }
  return;
}

