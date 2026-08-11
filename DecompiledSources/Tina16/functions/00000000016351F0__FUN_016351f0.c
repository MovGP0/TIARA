/* Ghidra address: 016351f0 */
/* Ghidra symbol: FUN_016351f0 */


int FUN_016351f0(longlong param_1,undefined4 param_2)

{
  int local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,param_2);
  local_1c = (**(code **)(**(longlong **)(param_1 + 0x590) + 0xb0))
                       (*(longlong **)(param_1 + 0x590),local_10);
  if (local_1c == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x590) + 0x78))(*(longlong **)(param_1 + 0x590),local_10)
    ;
    local_1c = (**(code **)(**(longlong **)(param_1 + 0x590) + 0x28))
                         (*(longlong **)(param_1 + 0x590));
    local_1c = local_1c + -1;
  }
  FUN_00414480(&local_10);
  return local_1c;
}

