/* Ghidra address: 014ef4e0 */
/* Ghidra symbol: FUN_014ef4e0 */


void FUN_014ef4e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_48,PTR_PTR_02004e30);
  FUN_00b8e650(uVar2,local_40,L"HDLStrings.Msg_SelectDir",local_48);
  cVar1 = FUN_00d30800(local_40[0],0,local_20);
  if (cVar1 != '\0') {
    lVar3 = FUN_0105a0d0(&DAT_01057408,1);
    FUN_00414ad0(lVar3 + 0x20,local_20[0]);
    FUN_00414ad0(lVar3 + 0x18,local_20[0]);
    cVar1 = FUN_0105f390(lVar3,0,1);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_50,PTR_PTR_02002278);
      FUN_01055ef0(local_50,&local_29);
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),*(undefined8 *)(lVar3 + 0x20));
    }
    FUN_00410f20(lVar3);
  }
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_28,2);
  return;
}

