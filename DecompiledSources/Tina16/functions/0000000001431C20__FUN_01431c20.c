/* Ghidra address: 01431c20 */
/* Ghidra symbol: FUN_01431c20 */


undefined1 FUN_01431c20(longlong *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_19 = 1;
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  FUN_00b8f030(local_38);
  FUN_00414480(&local_38);
  return local_19;
}

