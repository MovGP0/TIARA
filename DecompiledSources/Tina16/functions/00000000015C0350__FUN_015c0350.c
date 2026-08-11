/* Ghidra address: 015c0350 */
/* Ghidra symbol: FUN_015c0350 */


undefined4 FUN_015c0350(longlong param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  FUN_015c0660(param_1);
  if (*(char *)(param_1 + 0x4a) == '\0') {
    FUN_015bf270(local_20,param_2);
    local_c = FUN_015bff90(*(undefined8 *)(param_1 + 0x78),local_20[0]);
  }
  else {
    local_c = FUN_015bff90(*(undefined8 *)(param_1 + 0x78),param_2);
  }
  FUN_00414480(local_20);
  return local_c;
}

