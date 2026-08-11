/* Ghidra address: 00af6b30 */
/* Ghidra symbol: FUN_00af6b30 */


void FUN_00af6b30(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00affcf0(*(undefined8 *)(param_1 + 0x8a8));
  FUN_00affbb0(*(undefined8 *)(param_1 + 0x8a8));
  FUN_00414480(param_1 + 0x8b8);
  if ((0 < iVar1) && (*(longlong *)(param_1 + 0x558) != 0)) {
    (**(code **)(param_1 + 0x558))(*(undefined8 *)(param_1 + 0x560),param_1);
  }
  return;
}

