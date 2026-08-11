/* Ghidra address: 01bf6300 */
/* Ghidra symbol: FUN_01bf6300 */


void FUN_01bf6300(longlong param_1)

{
  if ((DAT_01fe2178 != (longlong *)0x0) &&
     ((param_1 == 0 || ((param_1 != 0 && (*(char *)(param_1 + 0x4c0) != '\0')))))) {
    (**(code **)(*DAT_01fe2178 + 0x28))(DAT_01fe2178,param_1);
  }
  return;
}

