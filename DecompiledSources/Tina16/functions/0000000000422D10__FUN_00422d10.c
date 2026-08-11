/* Ghidra address: 00422d10 */
/* Ghidra symbol: FUN_00422d10 */


undefined4 FUN_00422d10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *param_1;
  local_10 = (int)uVar1;
  if (local_10 < -0x8000) {
    local_10._0_2_ = 0x8000;
  }
  else if (local_10 < 0x8000) {
    local_10._0_2_ = (undefined2)uVar1;
  }
  else {
    local_10._0_2_ = 0x7fff;
  }
  uStack_c = (int)((ulonglong)uVar1 >> 0x20);
  if (uStack_c < -0x8000) {
    local_14 = CONCAT22(0x8000,(undefined2)local_10);
  }
  else if (uStack_c < 0x8000) {
    uStack_c._0_2_ = (undefined2)((ulonglong)uVar1 >> 0x20);
    local_14 = CONCAT22((undefined2)uStack_c,(undefined2)local_10);
  }
  else {
    local_14 = CONCAT22(0x7fff,(undefined2)local_10);
  }
  return local_14;
}

