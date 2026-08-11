/* Ghidra address: 0106caf0 */
/* Ghidra symbol: FUN_0106caf0 */


void FUN_0106caf0(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x718) == '\0') {
    FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0xe0,L"ELF file (*.elf)|*.elf");
    FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0x100,&LAB_0106ccf4);
  }
  else {
    FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0xe0,L"Coff file (cof)|*.cof");
    FUN_00414ad0(*(longlong *)(param_1 + 0x6f8) + 0x100,&DAT_0106cca4);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xa8))(*(longlong **)(param_1 + 0x6f8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f8),local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_20[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_28);
    FUN_00414ad0(param_1 + 0x710,local_28);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

