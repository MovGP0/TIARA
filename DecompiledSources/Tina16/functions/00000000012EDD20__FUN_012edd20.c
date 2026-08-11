/* Ghidra address: 012edd20 */
/* Ghidra symbol: FUN_012edd20 */


void FUN_012edd20(longlong param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x6d0) + 0xe0,L"Extensible Markup Language|*.xml");
  FUN_00414ad0(*(longlong *)(param_1 + 0x6d0) + 0x100,&DAT_012ede84);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_10);
  FUN_00724420(*(undefined8 *)(param_1 + 0x6d0),local_10);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0xa8))(*(longlong **)(param_1 + 0x6d0));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6d0),&local_18);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_18);
  }
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return;
}

