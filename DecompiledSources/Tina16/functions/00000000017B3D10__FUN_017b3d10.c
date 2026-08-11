/* Ghidra address: 017b3d10 */
/* Ghidra symbol: FUN_017b3d10 */


void FUN_017b3d10(longlong param_1,undefined8 *param_2)

{
  undefined8 local_10;
  
  local_10 = *param_2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    local_10._4_4_ = (int)((ulonglong)local_10 >> 0x20);
    local_10 = CONCAT44((local_10._4_4_ + 4) / 8 << 3,((int)local_10 + 4) / 8 << 3);
  }
  FUN_017afcc0(param_1,&local_10);
  return;
}

