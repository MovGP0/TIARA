/* Ghidra address: 01818d90 */
/* Ghidra symbol: FUN_01818d90 */


undefined8 FUN_01818d90(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)*(int *)(param_1 + 0x4b0) / (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)
  ;
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}

