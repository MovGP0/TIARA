/* Ghidra address: 0151f8f0 */
/* Ghidra symbol: FUN_0151f8f0 */


void FUN_0151f8f0(longlong param_1,char param_2)

{
  short local_1a;
  
  local_1a = FUN_00f04d50(*(undefined8 *)(param_1 + 0xcf8));
  if (param_2 == '\0') {
    local_1a = local_1a + -1;
  }
  else if (param_2 == '\x01') {
    local_1a = local_1a + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x138))(*(longlong **)(param_1 + 0xec8),&local_1a)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x148))(*(longlong **)(param_1 + 0xec8),local_1a);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0xcf8),local_1a);
  return;
}

