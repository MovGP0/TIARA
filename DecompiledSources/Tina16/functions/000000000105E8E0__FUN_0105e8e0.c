/* Ghidra address: 0105e8e0 */
/* Ghidra symbol: FUN_0105e8e0 */


undefined1 FUN_0105e8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_b8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_29 = 0;
  local_28 = (longlong *)0x0;
  FUN_00414480(local_res10);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_4c = 0xf;
  do {
    FUN_0043f750(&local_68,local_4c);
    local_98 = local_68;
    FUN_00416cd0(&local_38,3,local_res8,L"\\Arduino");
    cVar1 = FUN_00440b00(local_38,1);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_70,local_38,L"\\preferences.txt");
      cVar1 = FUN_00440a20(local_70,1);
      if (cVar1 == '\0') {
        local_29 = 1;
        FUN_00414ad0(local_res18,local_38);
        FUN_00414ad0(local_res10,&LAB_0105ed6c);
      }
      else {
        FUN_00416ba0(&local_78,local_38,L"\\preferences.txt");
        (**(code **)(*local_20 + 0xd8))(local_20,local_78);
        FUN_00414ad0(local_res18,local_38);
        cVar1 = FUN_01b22620(local_20,L"hardwarepath",&local_54,0);
        if (cVar1 != '\0') {
          (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_54);
          local_28 = (longlong *)FUN_01b21190(local_40,0x2e,0);
          iVar2 = (**(code **)(*local_28 + 0x28))(local_28);
          if (iVar2 == 6) {
            (**(code **)(*local_28 + 0x18))(local_28,&local_80,0);
            iVar2 = FUN_00416db0(local_80,L"last");
            if (iVar2 == 0) {
              (**(code **)(*local_28 + 0x18))(local_28,&local_88,1);
              iVar2 = FUN_00416db0(local_88,&DAT_0105ed48);
              if (iVar2 == 0) {
                local_29 = 1;
                local_50 = 2;
                do {
                  (**(code **)(*local_28 + 0x18))(local_28,&local_48,local_50);
                  FUN_00416ad0(local_res10,local_48);
                  if (local_50 < 4) {
                    FUN_00416ad0(local_res10,&DAT_0105ed5c);
                  }
                  local_50 = local_50 + 1;
                } while (local_50 != 5);
                local_50 = 5;
              }
            }
          }
        }
      }
      FUN_0105ec30(0,local_60);
      goto LAB_0105ebf5;
    }
    local_4c = local_4c + 1;
  } while (local_4c != 0x1f);
  FUN_00410f20(local_20);
  if (local_28 != (longlong *)0x0) {
    FUN_00410f20(local_28);
  }
LAB_0105ebf5:
  FUN_00414560(&local_88,5);
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_res8);
  return local_29;
}

