/* Ghidra address: 014ef670 */
/* Ghidra symbol: FUN_014ef670 */


void FUN_014ef670(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_38,PTR_PTR_02004e30);
  FUN_00b8e650(uVar2,local_30,L"HDLStrings.Msg_SelectDir",local_38);
  cVar1 = FUN_00d30800(local_30[0],0,local_20);
  if (cVar1 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 2000),local_20[0]);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

