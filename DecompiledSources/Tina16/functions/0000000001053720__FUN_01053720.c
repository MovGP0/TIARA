/* Ghidra address: 01053720 */
/* Ghidra symbol: FUN_01053720 */


void FUN_01053720(longlong param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x840) + 0x100,&DAT_01053844);
  FUN_00414ad0(*(longlong *)(param_1 + 0x840) + 0xe0,L"ASM File|*.asm");
  FUN_015fc650(&local_10);
  FUN_00724420(*(undefined8 *)(param_1 + 0x840),local_10);
  FUN_00724380(*(undefined8 *)(param_1 + 0x840),0);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0xa8))(*(longlong **)(param_1 + 0x840));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x840),&local_18);
    FUN_00f8fa10(*(undefined8 *)(param_1 + 0x9d8),local_18);
  }
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return;
}

