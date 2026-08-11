/* Ghidra address: 00b1e9b0 */
/* Ghidra symbol: FUN_00b1e9b0 */


undefined8 FUN_00b1e9b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined8 local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_60 = (wchar_t *)0x0;
  local_68 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  if (((ushort)(*(short *)(param_1 + 0x78) - 5U) < 2) ||
     ((ushort)(*(short *)(param_1 + 0x78) - 0x29U) < 2)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = PTR_DAT_02004830[9];
  }
  cVar1 = PTR_DAT_02004830[8];
  bVar2 = PTR_DAT_02004830[0x17e];
  FUN_004168e0(&local_50,*(undefined8 *)PTR_DAT_02004830);
  uVar4 = 0;
  FUN_00416310(&local_30,3,&DAT_00b1f154,local_50,&DAT_00b1f154);
  if (bVar2 < 0x10) {
    bVar7 = ((int)CONCAT62((int6)((ulonglong)uVar4 >> 0x10),1) << (bVar2 & 0x1f) & 0xc011U) != 0;
  }
  else {
    bVar7 = false;
  }
  pwVar5 = L"#,##0";
  FUN_00414be0(&local_38,L"#,##0");
  if (cVar6 != '\0') {
    FUN_00416020(&local_58,local_38,&DAT_00b1f170);
    FUN_004168b0(&local_60,local_58);
    FUN_00417320(&local_68,0x30,cVar6);
    FUN_00416ad0(&local_60,local_68);
    pwVar5 = local_60;
    FUN_004168e0(&local_38,local_60);
  }
  if (cVar1 == '\0') {
    pwVar5 = (wchar_t *)0x0;
    FUN_00416310(&local_40,3,local_30,local_38,&DAT_00b1f178);
  }
  else if (cVar1 == '\x01') {
    pwVar5 = (wchar_t *)0x0;
    FUN_00416310(&local_40,3,local_38,local_30,&DAT_00b1f178);
  }
  else if (cVar1 == '\x02') {
    pwVar5 = (wchar_t *)0x0;
    FUN_00416310(&local_40,4,local_30,&DAT_00b1f180,local_38,&DAT_00b1f178);
  }
  else if (cVar1 == '\x03') {
    pwVar5 = (wchar_t *)0x0;
    FUN_00416310(&local_40,4,local_38,&DAT_00b1f180,local_30,&DAT_00b1f178);
  }
  if (bVar7) {
    uVar3 = *(short *)(param_1 + 0x78) - 0x28;
    if (uVar3 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)pwVar5 >> 8),1) << ((byte)uVar3 & 0x1f) & 0x1eU) != 0
      ;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_00416310(&local_40,3,&DAT_00b1f18c,local_40,&DAT_00b1f198);
    }
  }
  if (bVar2 < 9) {
    if (bVar2 == 8) {
      FUN_00416310(&local_48,4,&DAT_00b1f1a8,local_38,&DAT_00b1f180,local_30);
    }
    else if (bVar2 < 5) {
      if (bVar2 == 4) {
        FUN_00416310(&local_48,4,&DAT_00b1f1a0,local_38,local_30,&DAT_00b1f198);
      }
      else if (bVar2 == 0) {
        FUN_00416310(&local_48,4,&DAT_00b1f1a0,local_30,local_38,&DAT_00b1f198);
      }
      else if (bVar2 == 1) {
        FUN_00416310(&local_48,3,&DAT_00b1f1a8,local_30,local_38);
      }
      else if (bVar2 == 2) {
        FUN_00416310(&local_48,3,local_30,&DAT_00b1f1a8,local_38);
      }
      else if (bVar2 == 3) {
        FUN_00416310(&local_48,3,local_30,local_38,&DAT_00b1f1a8);
      }
    }
    else if (bVar2 == 5) {
      FUN_00416310(&local_48,3,&DAT_00b1f1a8,local_38,local_30);
    }
    else if (bVar2 == 6) {
      FUN_00416310(&local_48,3,local_38,&DAT_00b1f1a8,local_30);
    }
    else if (bVar2 == 7) {
      FUN_00416310(&local_48,3,local_38,local_30,&DAT_00b1f1a8);
    }
  }
  else if (bVar2 < 0xd) {
    if (bVar2 == 0xc) {
      FUN_00416310(&local_48,3,local_30,&DAT_00b1f1b0,local_38);
    }
    else if (bVar2 == 9) {
      FUN_00416310(&local_48,4,&DAT_00b1f1a8,local_30,&DAT_00b1f180,local_38);
    }
    else if (bVar2 == 10) {
      FUN_00416310(&local_48,4,local_38,&DAT_00b1f180,local_30,&DAT_00b1f1a8);
    }
    else if (bVar2 == 0xb) {
      FUN_00416310(&local_48,4,local_30,&DAT_00b1f180,local_38,&DAT_00b1f1a8);
    }
  }
  else if (bVar2 == 0xd) {
    FUN_00416310(&local_48,3,local_38,&DAT_00b1f1bc,local_30);
  }
  else if (bVar2 == 0xe) {
    FUN_00416310(&local_48,5,&DAT_00b1f1a0,local_30,&DAT_00b1f180,local_38,&DAT_00b1f198);
  }
  else if (bVar2 == 0xf) {
    FUN_00416310(&local_48,5,&DAT_00b1f1a0,local_38,&DAT_00b1f180,local_30,&DAT_00b1f198);
  }
  if (bVar7) {
    FUN_00416310(&local_48,3,&DAT_00b1f1a0,local_48,&DAT_00b1f198);
  }
  FUN_00416310(param_2,3,local_40,&LAB_00b1f1c8,local_48);
  FUN_00414560(&local_68,2);
  FUN_004145c0(&local_58,6);
  return param_2;
}

