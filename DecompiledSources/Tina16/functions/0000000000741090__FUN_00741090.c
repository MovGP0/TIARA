/* Ghidra address: 00741090 */
/* Ghidra symbol: FUN_00741090 */


ulonglong FUN_00741090(char param_1,ulonglong param_2)

{
  if (param_1 != '\0') {
    if ((char)param_2 == '\0') {
      param_2 = CONCAT71((int7)(param_2 >> 8),1);
    }
    else if ((char)param_2 == '\x01') {
      param_2 = 0;
    }
  }
  return param_2 & 0xffffffff;
}

