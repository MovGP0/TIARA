/* Ghidra address: 0189bc30 */
/* Ghidra symbol: FUN_0189bc30 */


double FUN_0189bc30(longlong param_1,double param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x7e0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return param_2 * 25.4;
    }
    if (1 < (byte)(cVar1 - 2U)) {
      return 0.0;
    }
  }
  return param_2 * 10.0;
}

