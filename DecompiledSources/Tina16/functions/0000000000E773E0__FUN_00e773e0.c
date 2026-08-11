/* Ghidra address: 00e773e0 */
/* Ghidra symbol: FUN_00e773e0 */


void FUN_00e773e0(char param_1,byte param_2,uint *param_3)

{
  if (param_1 != '\0') {
    *param_3 = *param_3 | 1 << (param_2 & 0x1f);
  }
  return;
}

