/* Ghidra address: 00c37230 */
/* Ghidra symbol: FUN_00c37230 */


void FUN_00c37230(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  char local_1d;
  int local_1c;
  
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_38 = 0;
  FUN_00414480(PTR_DAT_02004010 + 0xb1);
  *PTR_DAT_020052b8 = 0;
  *PTR_DAT_02005960 = 1;
  local_1c = FUN_00409d20();
  local_2c = 1;
  do {
    if (local_1c < 1) {
      FUN_00414560(&local_b0,0x10);
      FUN_00414480(&local_28);
      return;
    }
    FUN_00409da0(&local_28,local_2c);
    for (local_1d = -1; local_1d < '\x0e'; local_1d = local_1d + '\x01') {
      FUN_004169a0(&local_48,s___HELP___to_get_this_help_01ea26ed + (longlong)local_1d * 0x3d);
      FUN_00b90780(&local_40,local_48);
      FUN_0043e130(&local_50,local_28);
      iVar2 = FUN_00416db0(local_40,local_50);
      if (iVar2 == 0) break;
    }
    cVar1 = local_1d;
    lVar3 = (longlong)local_1d;
    if (lVar3 < 8) {
      if (lVar3 == 7) {
        *PTR_DAT_02002e58 = 1;
      }
      else if (lVar3 < 5) {
        if (lVar3 == 4) {
          FUN_00c37020(auStack_e8,&local_70);
          FUN_00414ad0(PTR_DAT_020019a8,local_70);
          FUN_00c37020(auStack_e8,&local_80);
          FUN_00416dc0(&local_88,L".TSC",2,3);
          FUN_00c37150(auStack_e8,&local_78,local_80,local_88);
          FUN_00414ad0(PTR_DAT_02004010 + 0xb1,local_78);
          *PTR_DAT_020028f0 = 1;
        }
        else if (lVar3 == -1) {
          *PTR_DAT_02002760 = 1;
        }
        else if (lVar3 - 1U < 2) {
          FUN_00c37020(auStack_e8,&local_58);
          FUN_00414ad0(PTR_DAT_02003d18,local_58);
          if (*(longlong *)PTR_DAT_02003d18 == 0) {
            FUN_00414ad0(PTR_DAT_02003d18,&DAT_00c377dc);
          }
          FUN_00c37150(auStack_e8,&local_60,*(undefined8 *)PTR_DAT_02003d18,&DAT_00c377fc);
          local_c8 = local_60;
          FUN_00416cd0(PTR_DAT_02003d18,3,*(undefined8 *)PTR_DAT_02001340,&DAT_00c377ec);
          *PTR_DAT_020023b0 = 1;
          if (cVar1 == '\x02') {
            *PTR_DAT_02003d20 = 1;
          }
        }
        else {
          if (lVar3 - 1U != 2) goto LAB_00c37654;
          FUN_00c37020(auStack_e8,&local_68);
          FUN_00414ad0(PTR_DAT_02004118,local_68);
          *PTR_DAT_020035f0 = 1;
        }
      }
      else if (lVar3 == 5) {
        *PTR_DAT_02005960 = 1;
      }
      else {
        if (lVar3 != 6) goto LAB_00c37654;
        *PTR_DAT_020052b8 = 1;
      }
    }
    else if (lVar3 < 0xc) {
      if (lVar3 != 0xb) {
        if (lVar3 == 8) {
          FUN_00c37020(auStack_e8,&local_90);
        }
        else if (lVar3 == 9) {
          *PTR_DAT_02005828 = 1;
        }
        else {
          if (lVar3 != 10) goto LAB_00c37654;
          *PTR_DAT_02005b28 = 1;
        }
      }
    }
    else if ((lVar3 != 0xc) && (lVar3 != 0xd)) {
LAB_00c37654:
      FUN_00416dc0(&local_a0,L".TSC",2,3);
      FUN_00c37150(auStack_e8,&local_98,local_28,local_a0);
      FUN_00414ad0(PTR_DAT_02004010 + 0xb1,local_98);
      cVar1 = FUN_00440a20(*(undefined8 *)(PTR_DAT_02004010 + 0xb1),1);
      if (cVar1 == '\0') {
        FUN_00416dc0(&local_b0,L".SCH",2,3);
        FUN_00c37150(auStack_e8,&local_a8,local_28,local_b0);
        FUN_00414ad0(PTR_DAT_02004010 + 0xb1,local_a8);
        cVar1 = FUN_00440a20(*(undefined8 *)(PTR_DAT_02004010 + 0xb1),1);
        if (cVar1 == '\0') {
          FUN_00416ba0(&local_28,L"Syntax or file not found:",local_28);
        }
        else {
          local_1d = '\r';
        }
      }
      else {
        local_1d = '\r';
      }
    }
    local_2c = local_2c + 1;
    local_1c = local_1c + -1;
  } while( true );
}

