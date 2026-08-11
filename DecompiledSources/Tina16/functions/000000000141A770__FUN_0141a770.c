/* Ghidra address: 0141a770 */
/* Ghidra symbol: FUN_0141a770 */


void FUN_0141a770(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  int local_res18;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  double local_38;
  int local_2c;
  
  local_40 = auStack_a8;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x6e3) == '\0') {
    FUN_00b8f030(local_res10);
  }
  else {
    iVar1 = *(int *)(PTR_DAT_02002898 + (longlong)local_res18 * 4);
    if (iVar1 == 0) {
      local_38 = (double)FUN_00b8f030(local_res10);
      if (local_38 < 0.0) {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_50,PTR_PTR_02004000);
        FUN_00b8e650(uVar3,&local_48,L"HDLStrings.Msg_FC_InvValue",local_50);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
        FUN_004134c0(uVar3);
      }
    }
    else if (iVar1 == 3) {
      local_2c = FUN_0043fc00(local_res10);
      if (local_2c < 0) {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_60,PTR_PTR_02004000);
        FUN_00b8e650(uVar3,&local_58,L"HDLStrings.Msg_FC_InvValue",local_60);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
        FUN_004134c0(uVar3);
      }
    }
    else if (iVar1 == 2) {
      cVar2 = FUN_015fae60(local_res10);
      if (cVar2 == '\0') {
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_70,PTR_PTR_02004000);
        FUN_00b8e650(uVar3,&local_68,L"HDLStrings.Msg_FC_InvValue",local_70);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_68);
        FUN_004134c0(uVar3);
      }
    }
  }
  FUN_00414560(&local_80,8);
  FUN_00414480(&local_res10);
  return;
}

