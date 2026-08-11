/* Ghidra address: 00f2f5c0 */
/* Ghidra symbol: FUN_00f2f5c0 */


undefined8 FUN_00f2f5c0(longlong *param_1)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((char)param_1[3] == '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,local_20);
    local_28 = FUN_00f2e9d0(&LAB_00f22a90,1,local_20[0]);
  }
  else {
    local_28 = FUN_00f2e930(&LAB_00f22a90,1);
  }
  FUN_00414480(local_20);
  return local_28;
}

