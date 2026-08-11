/* Ghidra address: 01497120 */
/* Ghidra symbol: FUN_01497120 */


void FUN_01497120(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_28,PTR_PTR_020035d8);
  FUN_00b8e650(uVar1,local_20,L"d.DesignToolObject_Msg_NewSession",local_28);
  cVar2 = FUN_01493b00(param_1,local_20[0]);
  if (cVar2 != '\0') {
    FUN_01493e40(param_1);
  }
  FUN_00414560(&local_28,2);
  return;
}

