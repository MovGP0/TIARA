/* Ghidra address: 01b2cc80 */
/* Ghidra symbol: FUN_01b2cc80 */


undefined1 FUN_01b2cc80(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  undefined1 uVar5;
  int iVar7;
  longlong local_res8 [4];
  ushort local_7a;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 uVar6;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar6 = 0;
  uVar5 = 0;
  iVar7 = 0;
  if (local_res8[0] != 0) {
    iVar7 = *(int *)(local_res8[0] + -4);
  }
  FUN_00414480(&local_30);
  FUN_00414480(param_2);
  iVar3 = 1;
  if (0 < iVar7) {
    do {
      sVar1 = *(short *)(local_res8[0] + -2 + (longlong)iVar3 * 2);
      if (sVar1 != 0x20) {
        FUN_00416780(&local_40,sVar1);
        FUN_00416ad0(&local_30,local_40);
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414b50(&local_38,local_30);
  iVar7 = 0;
  if (local_38 != 0) {
    iVar7 = *(int *)(local_38 + -4);
  }
  FUN_00414480(&local_30);
  iVar7 = iVar7 + -1;
  iVar3 = 1;
  if (0 < iVar7) {
    do {
      uVar4 = *(ushort *)(local_38 + -2 + (longlong)iVar3 * 2);
      if ((uVar4 == 0x2f) || (uVar4 == 0x22)) {
        uVar4 = 0x27;
      }
      local_7a = *(ushort *)(local_38 + -2 + (longlong)(iVar3 + 1) * 2);
      if ((local_7a == 0x2f) || (local_7a == 0x22)) {
        local_7a = 0x27;
      }
      if (((uVar4 == 0x27) || (uVar4 == 0x2b)) || (uVar4 == 0x2a)) {
        if (local_7a != uVar4) {
          FUN_00416780(&local_48,uVar4);
          FUN_00416ad0(&local_30,local_48);
        }
      }
      else {
        FUN_00416780(&local_50,uVar4);
        FUN_00416ad0(&local_30,local_50);
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00416780(&local_58,local_7a);
  FUN_00416ad0(&local_30,local_58);
  FUN_00414b50(&local_38,local_30);
  iVar7 = 0;
  if (local_38 != 0) {
    iVar7 = *(int *)(local_38 + -4);
  }
  iVar7 = iVar7 + -1;
  iVar3 = 1;
  if (0 < iVar7) {
    do {
      uVar4 = *(ushort *)(local_38 + -2 + (longlong)iVar3 * 2);
      local_7a = *(ushort *)(local_38 + -2 + (longlong)(iVar3 + 1) * 2);
      FUN_00416780(&local_60,uVar4);
      FUN_00416ad0(param_2,local_60);
      if (((uVar4 == 0x29) && (local_7a != 0x2a)) &&
         ((local_7a != 0x2b && ((local_7a != 0x29 && (local_7a != 0)))))) {
        FUN_00416ad0(param_2,&DAT_01b2d11c);
      }
      if ((((0x40 < uVar4) && (uVar4 < 0x5b)) || ((0x30 < uVar4 && (uVar4 < 0x3a)))) &&
         ((((0x40 < local_7a && (local_7a < 0x5b)) || (local_7a == 0x27)) || (local_7a == 0x28)))) {
        FUN_00416ad0(param_2,&DAT_01b2d11c);
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00416780(&local_68,local_7a);
  FUN_00416ad0(param_2,local_68);
  FUN_00414b50(&local_38,*param_2);
  iVar7 = 0;
  if (local_38 != 0) {
    iVar7 = *(int *)(local_38 + -4);
  }
  FUN_00414480(param_2);
  bVar2 = false;
  iVar7 = iVar7 + -1;
  iVar3 = 1;
  if (0 < iVar7) {
    do {
      sVar1 = *(short *)(local_38 + -2 + (longlong)iVar3 * 2);
      local_7a = *(ushort *)(local_38 + -2 + (longlong)(iVar3 + 1) * 2);
      if (!bVar2) {
        FUN_00416780(&local_70,sVar1);
        FUN_00416ad0(param_2,local_70);
      }
      if ((((sVar1 == 0x2b) || (sVar1 == 0x2a)) || ((sVar1 == 0x27 || (sVar1 == 0x28)))) &&
         ((local_7a == 0x2b || (local_7a == 0x2a)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar5 = uVar6;
      if (bVar2) {
        uVar5 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + -1;
      uVar6 = uVar5;
    } while (iVar7 != 0);
  }
  if (!bVar2) {
    FUN_00416780(&local_78,local_7a);
    FUN_00416ad0(param_2,local_78);
  }
  FUN_00414560(&local_78,10);
  FUN_00414480(local_res8);
  return uVar5;
}

