/* Ghidra address: 016fae30 */
/* Ghidra symbol: FUN_016fae30 */


undefined1
FUN_016fae30(undefined8 param_1,ulonglong param_2,char param_3,char param_4,longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res10 [3];
  char local_73;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_58 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_71 = 0;
  local_20[0] = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  cVar1 = FUN_00440a20(local_res10[0],1);
  local_73 = param_3;
  if (cVar1 == '\0') {
    FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,local_res10);
    local_73 = '\x01';
    if (param_4 != '\0') {
      cVar1 = FUN_00451260(&DAT_016fb244,&DAT_016fb24c,1);
      if (cVar1 == '\0') goto LAB_016faf22;
    }
    FUN_00d30b80(L"Startup warning (DDF)!",0x10);
  }
LAB_016faf22:
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 == '\0') {
    if (param_4 != '\0') {
      cVar1 = FUN_00451260(&DAT_016fb244,&DAT_016fb24c,1);
      if (cVar1 == '\0') goto LAB_016fb158;
    }
    FUN_00d30b80(L"Startup error (MDF)!",0x10);
    goto LAB_016fb158;
  }
  if (local_73 == '\0') {
    FUN_016fa170(param_1,local_20,local_res10[0],0);
  }
  else {
    uVar3 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0x20);
    FUN_016fa170(param_1,local_20,local_res10[0],uVar3);
    FUN_00410f20(uVar3);
  }
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x10))(param_5,local_20[0]);
  }
  iVar2 = (**(code **)(*local_20[0] + 0x28))(local_20[0]);
  if (iVar2 != 0) {
    (**(code **)(*local_20[0] + 0x18))(local_20[0],local_40,0);
    iVar2 = FUN_00416db0(local_40[0],L"[webdedication]");
    if (iVar2 == 0) {
      cVar1 = FUN_016faac0(param_1,local_20[0],param_4);
      if (cVar1 != '\0') {
        cVar1 = FUN_016facb0(param_1,local_20[0],param_4);
        if (cVar1 != '\0') {
          (**(code **)(*local_20[0] + 0x38))(local_20[0],&local_48);
          FUN_00415dd0(&local_50,local_48,0);
          cVar1 = FUN_00711830(local_50);
          if (cVar1 != '\0') {
            (**(code **)(*local_20[0] + 0x38))(local_20[0],&local_60);
            FUN_00415dd0(&local_68,local_60,0);
            FUN_00b0d000(&local_58,local_68,0xfde9);
            FUN_004168b0(&local_70,local_58);
            (**(code **)(*local_20[0] + 0x60))(local_20[0],local_70);
          }
          FUN_005dd980(param_1,local_20[0]);
          local_71 = 1;
          goto LAB_016fb158;
        }
      }
    }
  }
  if (param_4 == '\0') {
LAB_016fb05d:
    FUN_00d30b80(L"Startup error (DIF)!",0x10);
  }
  else {
    cVar1 = FUN_00451260(&DAT_016fb244,&DAT_016fb24c,1);
    if (cVar1 != '\0') goto LAB_016fb05d;
  }
  local_71 = 0;
LAB_016fb158:
  FUN_00410f20(local_20[0]);
  FUN_00414480(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414480(&local_60);
  FUN_00414520(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414590(&local_30,2);
  FUN_00414480(local_res10);
  return local_71;
}

