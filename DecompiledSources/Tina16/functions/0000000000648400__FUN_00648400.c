/* Ghidra address: 00648400 */
/* Ghidra symbol: FUN_00648400 */


void FUN_00648400(char *param_1)

{
  if (*param_1 == '\0') {
    *param_1 = '\x01';
  }
  else if (*param_1 == '\x01') {
    *param_1 = '\0';
  }
  return;
}

