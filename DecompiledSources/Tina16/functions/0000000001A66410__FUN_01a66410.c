/* Ghidra address: 01a66410 */
/* Ghidra symbol: FUN_01a66410 */


void FUN_01a66410(longlong param_1)

{
  if (*PTR_DAT_020033c0 == '\x03') {
    FUN_0074a640(*(undefined8 *)(param_1 + 0x720),&PTR_DAT_01a66468);
  }
  else {
    FUN_0074a640(*(undefined8 *)(param_1 + 0x720),L"inch");
  }
  FUN_01a65f30(param_1);
  return;
}

