/* Ghidra address: 01084820 */
/* Ghidra symbol: FUN_01084820 */


void FUN_01084820(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_28,PTR_PTR_02005880);
  FUN_00b8e650(uVar2,local_20,L"HDLStrings.Msg_RemoveAllFiles",local_28);
  cVar1 = FUN_01079230(param_1,local_20[0]);
  if (cVar1 != '\0') {
    FUN_01084690(param_1,*(undefined8 *)(param_1 + 0xc00));
  }
  FUN_00414560(&local_28,2);
  return;
}

