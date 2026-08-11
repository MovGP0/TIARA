/* Ghidra address: 0196a360 */
/* Ghidra symbol: FUN_0196a360 */


undefined8 FUN_0196a360(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)*(int *)(param_1 + 0x1f0) / (double)DAT_01fb7de8;
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}

