/* Ghidra address: 0106cd00 */
/* Ghidra symbol: FUN_0106cd00 */


void FUN_0106cd00(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0xe0,L"Hex file (*.hex)|*.hex");
  FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0x100,&DAT_0106ce68);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xa8))(*(longlong **)(param_1 + 0x6f8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f8),local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_20[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_28);
    FUN_00414ad0(param_1 + 0x708,local_28);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

