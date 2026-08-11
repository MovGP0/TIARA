/* Ghidra address: 01052da0 */
/* Ghidra symbol: FUN_01052da0 */


void FUN_01052da0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  cVar1 = FUN_010527b0(param_1);
  if (cVar1 == '\0') {
    FUN_00f8e0c0(*(undefined8 *)(param_1 + 0x9d8),param_2);
  }
  else if (*(longlong *)(param_1 + 0x4c0) == *(longlong *)(*(longlong *)(param_1 + 0x828) + 0x510))
  {
    FUN_00f8e0c0(*(undefined8 *)(param_1 + 0x9d8),param_2);
  }
  else {
    uVar2 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
    uVar2 = FUN_00f752b0(uVar2,8,local_1c);
    if (local_1c[0] < 2) {
      if (local_1c[0] == 0) {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_48,PTR_PTR_020049f0);
        FUN_00b8e650(uVar2,&local_40,L"HDLStrings.Msg_FC_Breakp_Sel2",local_48);
        FUN_016fd940(local_40);
      }
      else {
        FUN_00f6f920(uVar2,0x40);
        FUN_010508e0(param_1);
      }
    }
    else {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_PTR_020058f8);
      FUN_00b8e650(uVar2,local_30,L"HDLStrings.Msg_FC_Breakp_Sel",local_38);
      FUN_016fd940(local_30[0]);
    }
  }
  FUN_00414560(&local_48,4);
  return;
}

