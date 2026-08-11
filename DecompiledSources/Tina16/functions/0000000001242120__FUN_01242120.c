/* Ghidra address: 01242120 */
/* Ghidra symbol: FUN_01242120 */


undefined8 FUN_01242120(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_10;
  
  uVar1 = *param_1;
  local_10._0_2_ = (short)uVar1;
  local_10._4_2_ = (short)((ulonglong)uVar1 >> 0x20);
  bVar2 = local_10._4_2_ < (short)local_10;
  local_10 = uVar1;
  if (bVar2) {
    FUN_01242110(&local_10,(longlong)&local_10 + 4);
  }
  if (local_10._6_2_ < local_10._2_2_) {
    FUN_01242110((longlong)&local_10 + 2,(longlong)&local_10 + 6);
  }
  return local_10;
}

