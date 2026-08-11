/* Ghidra address: 01c7cc40 */
/* Ghidra symbol: FUN_01c7cc40 */


void FUN_01c7cc40(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (-1 < *(int *)(param_1 + 0x17ec)) {
    iVar1 = FUN_01b1d2f0();
    iVar1 = FUN_0040c770(((double)iVar1 - (double)*(int *)(param_1 + 0x17ec)) / 10.0);
    FUN_01b1d450(&local_10,(ulonglong)(uint)(iVar1 * 2) * 5);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xa40),local_10);
  }
  FUN_00414480(&local_10);
  return;
}

