/* Ghidra address: 01084920 */
/* Ghidra symbol: FUN_01084920 */


void FUN_01084920(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = FUN_0107a3b0(param_1,*(undefined8 *)(param_1 + 0xab0));
  if (cVar1 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02005178);
    FUN_00b8e650(uVar2,local_20,L"HDLStrings.Msg_RemoveFromProject",local_28);
    cVar1 = FUN_01079230(param_1,local_20[0]);
    if (cVar1 != '\0') {
      FUN_01084690(param_1,*(undefined8 *)(param_1 + 0xab0));
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

