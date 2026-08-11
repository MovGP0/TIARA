/* Ghidra address: 00949480 */
/* Ghidra symbol: FUN_00949480 */


void FUN_00949480(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    param_1 = FUN_0044d490(&PTR_FUN_00901268,1,
                           L"No resource resolver assigned to DOM implementation.");
    FUN_004134c0();
  }
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x88))(*(longlong **)(param_1 + 0x80));
  return;
}

