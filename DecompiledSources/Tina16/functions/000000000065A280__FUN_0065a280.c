/* Ghidra address: 0065a280 */
/* Ghidra symbol: FUN_0065a280 */


void FUN_0065a280(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar1 == '\0') && (param_1[0xf] != 0)) {
    FUN_00654870(param_1,0);
  }
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    thunk_FUN_04154efc(param_1[0x8d],-(uint)(cVar1 != '\0'));
  }
  return;
}

