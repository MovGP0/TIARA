/* Ghidra address: 01a51650 */
/* Ghidra symbol: FUN_01a51650 */


void FUN_01a51650(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a51560(param_1,local_20);
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_48,local_2c);
      local_28 = (longlong *)FUN_01b21190(local_48,0x2c,0);
      local_38 = -1;
      local_3c = -1;
      iVar3 = (**(code **)(*local_28 + 0x28))(local_28);
      if (1 < iVar3) {
        cVar1 = FUN_01b22620(local_28,L"https://",&local_38,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_01b22620(local_28,L"http://",&local_3c,1);
          if (cVar1 == '\0') goto LAB_01a51837;
        }
        if (0 < local_38) {
          local_34 = local_38;
        }
        if (0 < local_3c) {
          local_34 = local_3c;
        }
        (**(code **)(*local_28 + 0x18))(local_28,&local_50,local_34);
        local_58 = 0;
        if (local_50 != 0) {
          local_58 = *(int *)(local_50 + -4);
        }
        local_30 = local_58;
        if (*(short *)(local_50 + -2 + (longlong)local_58 * 2) == 0x29) {
          FUN_00416e20(&local_50,local_58,1);
        }
        cVar1 = FUN_01b22620(local_28,L"Product info",&local_38,1);
        if (cVar1 != '\0') {
          local_78 = 1;
          FUN_00450070(&local_68,local_50,&DAT_01a5193c,L"$slash$");
          FUN_00414b50(&local_50,local_68);
          (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x78))
                    (*(longlong **)(param_1 + 0x8f0),local_50);
          *(undefined4 *)(param_1 + 0x93c) = 1;
        }
      }
LAB_01a51837:
      FUN_00410f20(local_28);
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_68);
  FUN_00414560(&local_50,2);
  return;
}

