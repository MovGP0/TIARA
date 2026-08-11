/* Ghidra address: 01b24b70 */
/* Ghidra symbol: FUN_01b24b70 */


undefined1 FUN_01b24b70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  longlong *local_res10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  int local_68;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x60))(local_20,local_res8);
  local_21 = 0;
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_3c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_60,local_3c);
      local_30 = (longlong *)FUN_01b21190(local_60,0x2c,0);
      local_48 = -1;
      local_4c = -1;
      iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
      if (1 < iVar3) {
        cVar1 = FUN_01b22620(local_30,L"https://",&local_48,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_01b22620(local_30,L"http://",&local_4c,1);
          if (cVar1 == '\0') goto LAB_01b24d81;
        }
        local_21 = 1;
        if (0 < local_48) {
          local_44 = local_48;
        }
        if (0 < local_4c) {
          local_44 = local_4c;
        }
        (**(code **)(*local_30 + 0x18))(local_30,&local_58,local_44);
        local_68 = 0;
        if (local_58 != 0) {
          local_68 = *(int *)(local_58 + -4);
        }
        local_40 = local_68;
        if (*(short *)(local_58 + -2 + (longlong)local_68 * 2) == 0x29) {
          FUN_00416e20(&local_58,local_68,1);
        }
        cVar1 = FUN_01b22620(local_30,L"Product info",&local_48,1);
        if (cVar1 != '\0') {
          local_88 = 1;
          FUN_00450070(&local_78,local_58,&DAT_01b24ea8,L"$slash$");
          FUN_00414b50(&local_58,local_78);
          (**(code **)(*local_res10 + 0x78))(local_res10,local_58);
        }
      }
LAB_01b24d81:
      FUN_00410f20(local_30);
      local_3c = local_3c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_78);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_res8);
  return local_21;
}

