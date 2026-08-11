/* Ghidra address: 01818dc0 */
/* Ghidra symbol: FUN_01818dc0 */


undefined8 FUN_01818dc0(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)*(int *)(param_1 + 0x4b0) / 96.0;
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}

