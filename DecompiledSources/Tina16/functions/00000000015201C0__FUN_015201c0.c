/* Ghidra address: 015201c0 */
/* Ghidra symbol: FUN_015201c0 */


void FUN_015201c0(longlong param_1,char param_2)

{
  int local_1c;
  
  local_1c = FUN_00f04d50(*(undefined8 *)(param_1 + 0xcf0));
  if (param_2 == '\0') {
    local_1c = local_1c + -1;
  }
  else if (param_2 == '\x01') {
    local_1c = local_1c + 1;
  }
  if (*(char *)(param_1 + 0xeba) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xb8))
              (*(longlong **)(param_1 + 0xec8),&local_1c);
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 200))(*(longlong **)(param_1 + 0xec8),local_1c);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xa0))
              (*(longlong **)(param_1 + 0xec8),&local_1c);
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xb0))(*(longlong **)(param_1 + 0xec8),local_1c)
    ;
  }
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf0),local_1c);
  return;
}

