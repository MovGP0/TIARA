/* Ghidra address: 0080dc50 */
/* Ghidra symbol: FUN_0080dc50 */


char FUN_0080dc50(longlong param_1)

{
  char local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_11 = FUN_0080e4b0(param_1);
  if (local_11 != '\0') {
    FUN_0080f350(param_1,&local_10);
    local_11 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))
                         (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x2d0),local_10,3
                          ,0);
  }
  FUN_00414480(&local_10);
  return local_11;
}

