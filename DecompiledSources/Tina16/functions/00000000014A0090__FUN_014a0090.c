/* Ghidra address: 014a0090 */
/* Ghidra symbol: FUN_014a0090 */


void FUN_014a0090(longlong param_1,longlong *param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x62) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0),param_2);
  }
  else {
    FUN_01768520(local_20,*(undefined8 *)(param_1 + 0x48),0);
    (**(code **)(*param_2 + 0x100))(param_2,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

