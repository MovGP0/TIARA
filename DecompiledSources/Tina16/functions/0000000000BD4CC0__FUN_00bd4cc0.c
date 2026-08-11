/* Ghidra address: 00bd4cc0 */
/* Ghidra symbol: FUN_00bd4cc0 */


int FUN_00bd4cc0(longlong param_1,ushort param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  uVar1 = (uint)param_2;
  if (uVar1 < 0x80) {
    local_2c = *(int *)(param_1 + 0x658 + (ulonglong)uVar1 * 4);
    if (local_2c == 0) {
      uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x20));
      FUN_00416780(&local_20,param_2);
      local_2c = FUN_00bd19b0(uVar2,local_20);
      *(int *)(param_1 + 0x658 + (ulonglong)uVar1 * 4) = local_2c;
    }
  }
  else {
    uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x20));
    FUN_00416780(&local_28,param_2);
    local_2c = FUN_00bd19b0(uVar2,local_28);
  }
  FUN_00414560(&local_28,2);
  return local_2c;
}

