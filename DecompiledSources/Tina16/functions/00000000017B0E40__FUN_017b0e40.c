/* Ghidra address: 017b0e40 */
/* Ghidra symbol: FUN_017b0e40 */


void FUN_017b0e40(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = *param_2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((int)local_20 % 8 != 0) {
      iVar1 = FUN_017ad250((double)(int)local_20);
      local_20 = CONCAT44(local_20._4_4_,((int)local_20 + iVar1 * 4) / 8 << 3);
    }
    if (local_20._4_4_ % 8 != 0) {
      iVar1 = FUN_017ad250((double)local_20._4_4_);
      local_20 = CONCAT44((local_20._4_4_ + iVar1 * 4) / 8 << 3,(int)local_20);
    }
  }
  FUN_017afcc0(param_1,&local_20);
  return;
}

