/* Ghidra address: 014ba390 */
/* Ghidra symbol: FUN_014ba390 */


void FUN_014ba390(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  if (cVar1 != '\0') {
    FUN_004155b0(param_1 + 0xd50,&DAT_014ba430);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (cVar1 != '\0') {
    FUN_004155b0(param_1 + 0xd50,&LAB_014ba440);
  }
  uVar2 = FUN_004425e0(param_1 + 0x74a,*(undefined8 *)(param_1 + 0xd50));
  _HTerm_SendText(*(undefined8 *)(param_1 + 0xd58),uVar2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),0);
  return;
}

