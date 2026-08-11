/* Ghidra address: 01771420 */
/* Ghidra symbol: FUN_01771420 */


undefined8 FUN_01771420(longlong param_1,char param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x62) == '\0') {
    local_28 = *(undefined8 *)(param_1 + 0xb0);
  }
  else {
    if (param_2 != '\0') {
      FUN_01768520(local_20,*(undefined8 *)(param_1 + 0x48),0);
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))
                (*(longlong **)(param_1 + 0xb0),local_20[0]);
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x90))(*(longlong **)(param_1 + 0xb8));
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
              (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xb0));
    local_28 = *(undefined8 *)(param_1 + 0xb8);
  }
  FUN_00414480(local_20);
  return local_28;
}

