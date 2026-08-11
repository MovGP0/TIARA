/* Ghidra address: 01b1e860 */
/* Ghidra symbol: FUN_01b1e860 */


void FUN_01b1e860(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8 [4];
  undefined1 auStack_98 [47];
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  local_69 = param_2;
  FUN_00414610(param_1);
  FUN_00415dd0(local_40,local_res8[0],0);
  FUN_017f5440(&local_30,local_40[0]);
  FUN_01350dd0(&local_48,&local_30);
  FUN_00416880(local_20,local_48);
  iVar2 = FUN_00416db0(local_20[0],L"SelectPart");
  if (iVar2 == 0) {
    FUN_01350dd0(&local_50,&local_30);
    FUN_00416880(&local_28,local_50);
    lVar3 = FUN_019ac500(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_28);
    if (lVar3 != 0) {
      cVar1 = FUN_01350fa0(&local_30);
      if (cVar1 == '\0') {
        cVar1 = FUN_01b1e700(auStack_98,lVar3);
        if (cVar1 == '\0') goto code_r0x01b1ea37;
      }
      lVar4 = FUN_01b1e530(auStack_98,lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
      }
      if (local_69 != '\0') {
        cVar1 = FUN_0198a580(lVar3);
        if (cVar1 == '\x05') {
          FUN_00415dd0(&local_60,local_res8[0],0);
          FUN_013510a0(&local_58,local_60,"SelectWire");
          FUN_00416880(local_res8,local_58);
        }
        FUN_00415dd0(&local_68,local_res8[0],0);
        FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_68,0,1);
      }
      cVar1 = FUN_0198a580(lVar3);
      if (cVar1 == '\x04') {
        FUN_01b1e7a0(auStack_98,local_res8[0]);
      }
    }
  }
  else {
    FUN_01b1e7a0(auStack_98,local_res8[0]);
  }
code_r0x01b1ea37:
  FUN_00414590(&local_68,6);
  FUN_004144d0(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return;
}

