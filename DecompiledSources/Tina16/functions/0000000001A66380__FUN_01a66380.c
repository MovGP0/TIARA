/* Ghidra address: 01a66380 */
/* Ghidra symbol: FUN_01a66380 */


void FUN_01a66380(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (iVar1 == 0) {
    FUN_0074a640(*(undefined8 *)(param_1 + 0x720),&PTR_DAT_01a663e4);
  }
  else {
    FUN_0074a640(*(undefined8 *)(param_1 + 0x720),L"inch");
  }
  FUN_01a65f30(param_1);
  return;
}

