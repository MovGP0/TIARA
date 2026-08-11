/* Ghidra address: 00c7f3b0 */
/* Ghidra symbol: FUN_00c7f3b0 */


undefined8 FUN_00c7f3b0(longlong param_1,undefined8 param_2,int param_3)

{
  if ((param_3 < 0) || (*(int *)(param_1 + 0x10) <= param_3)) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(*(longlong **)(param_1 + 0x28),param_2);
  }
  return param_2;
}

