/* Ghidra address: 0184cfa0 */
/* Ghidra symbol: FUN_0184cfa0 */


void FUN_0184cfa0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_0072d710(L"Unregistered version of FastScript.");
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  *(undefined1 *)(param_1 + 200) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x10))(*(longlong **)(param_1 + 0x128));
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}

