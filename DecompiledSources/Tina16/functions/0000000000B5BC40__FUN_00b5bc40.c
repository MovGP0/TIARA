/* Ghidra address: 00b5bc40 */
/* Ghidra symbol: FUN_00b5bc40 */


double FUN_00b5bc40(uint param_1)

{
  undefined8 local_10;
  
  if ((param_1 & 2) == 0) {
    local_10 = (double)((ulonglong)(param_1 & 0xfffffffc) << 0x20);
  }
  else {
    local_10 = (double)(int)((longlong)((longlong)(int)param_1 & 0xfffffffffffffffcU) / 4);
  }
  if ((param_1 & 1) != 0) {
    local_10 = local_10 / 100.0;
  }
  return local_10;
}

