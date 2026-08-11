/* Ghidra address: 008af5f0 */
/* Ghidra symbol: FUN_008af5f0 */


void FUN_008af5f0(longlong param_1,longlong *param_2,byte param_3)

{
  char cVar1;
  longlong local_res8 [4];
  undefined1 auStack_b8 [32];
  undefined *local_98;
  longlong *local_80;
  byte local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  longlong local_28;
  int local_1c;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = (undefined *)0x0;
  local_38 = 0;
  local_res8[0] = param_1;
  local_80 = param_2;
  local_71 = param_3;
  FUN_00414610(param_1);
  local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
  FUN_00874ee0(&local_40,local_res8,&DAT_008af91c,1);
  FUN_0089ee60(&local_48,0,0x20);
  local_98 = &DAT_008af92c;
  FUN_00416cd0(&local_38,3,local_48,*(undefined8 *)(&DAT_01e258c0 + (ulonglong)local_71 * 8));
  while (local_res8[0] != 0) {
    FUN_0043eb50(&local_50,local_res8[0]);
    FUN_00414b50(local_res8,local_50);
    if (local_res8[0] == 0) break;
    local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
    FUN_00874ee0(&local_58,local_res8,&DAT_008af93c,1);
    FUN_0043ea00(&local_28,local_58);
    FUN_0043eb50(&local_60,local_res8[0]);
    FUN_00414b50(local_res8,local_60);
    cVar1 = FUN_00879090(local_res8[0],&DAT_008af94c);
    if (cVar1 == '\0') {
      local_1c = FUN_008b0400(local_38,local_res8[0],0xffffffff,1);
      if (local_1c == 0) {
        FUN_00414b50(&local_30,local_res8[0]);
        FUN_00414480(local_res8);
      }
      else {
        FUN_00416dc0(&local_30,local_res8[0],1,local_1c + -1);
        if (*(short *)(local_res8[0] + -2 + (longlong)local_1c * 2) == 0x3b) {
          local_1c = local_1c + 1;
        }
        FUN_00416e20(local_res8,1,local_1c + -1);
      }
    }
    else {
      FUN_008af470(auStack_b8,&local_68,local_res8);
      FUN_00414b50(&local_30,local_68);
    }
    if ((local_28 != 0) && (local_30 != (undefined *)0x0 || cVar1 != '\0')) {
      local_98 = local_30;
      FUN_00416cd0(&local_70,3,local_28,&DAT_008af93c);
      (**(code **)(*local_80 + 0x80))(local_80,local_70,cVar1);
    }
  }
  FUN_00414560(&local_70,10);
  FUN_00414480(local_res8);
  return;
}

