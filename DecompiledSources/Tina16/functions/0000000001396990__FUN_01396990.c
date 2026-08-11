/* Ghidra address: 01396990 */
/* Ghidra symbol: FUN_01396990 */


undefined1 FUN_01396990(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_50;
  int local_48;
  byte local_41;
  undefined1 local_22;
  char local_21;
  longlong local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_22 = 0;
  local_21 = '\x01';
  local_20 = *(longlong *)(param_1 + 0x488);
  puVar1 = auStack_88;
  if (local_20 != 0) {
    *(undefined1 *)(local_20 + 0x1401) = 1;
    puVar1 = auStack_88;
    if (*(char *)(local_20 + 0x49c) != '\x01') {
      local_41 = FUN_013968d0(local_20);
      FUN_017d18e0(local_20,8);
      cVar2 = FUN_017d1390(*(undefined8 *)(local_20 + 0x4c0));
      if ((cVar2 != '\0') || (cVar2 = FUN_01b07dd0(local_20), cVar2 != '\0')) {
        FUN_017dcfd0(*(undefined8 *)(local_20 + 0xd8),0,1);
        FUN_017d9ab0(*(undefined8 *)(local_20 + 0xd8),0);
        if (*(char *)(local_20 + 0x325) == '\0') {
          *(byte *)(local_20 + 0x326) = *(char *)(local_20 + 0x13b8) != '\0' & local_41;
          cVar2 = FUN_01b07dd0(local_20);
          if (cVar2 == '\0') {
            FUN_016f5430(local_20,1,2);
          }
          else {
            FUN_016f39b0(local_20,1,2);
          }
          *(undefined1 *)(local_20 + 0x13b8) = 1;
        }
        else {
          FUN_016f6430(local_20,1,0);
          FUN_016f3620(local_20,0,1);
        }
        FUN_017d9ab0(*(undefined8 *)(local_20 + 0xd8),0);
      }
      if (*(char *)(local_20 + 0x49c) != '\x01') {
        *(int *)(local_20 + 0x498) = *(int *)(local_20 + 0x498) + 1;
        if (*(char *)(local_20 + 0x324) != '\0') {
          if (*PTR_DAT_020052b8 == '\0') {
            uVar3 = FUN_01b04b70(&PTR_FUN_01af3038,1,local_20);
            FUN_004134c0(uVar3);
          }
          else {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,&local_68,0x10a);
            FUN_013a4820(*(undefined8 *)PTR_DAT_020032b8,local_68);
            FUN_0044d440();
          }
        }
        local_50 = FUN_01d347d0(*(undefined8 *)(local_20 + 0x4c0),0);
        FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),*(undefined8 *)(local_50 + 8));
        if (*PTR_DAT_020052b8 != '\0') {
          FUN_017d22b0(local_20);
          FUN_017d1f40(local_20);
        }
        FUN_0165dc50(*(undefined8 *)(local_20 + 0x110));
        FUN_016f6430(local_20,7,0);
        FUN_017dcfd0(*(undefined8 *)(local_20 + 0xd8),1,1);
        iVar4 = *(int *)(*(longlong *)(local_20 + 0x4c0) + 0x10);
        local_48 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar3 = FUN_01d347d0(*(undefined8 *)(local_20 + 0x4c0),local_48);
            FUN_01390c30(local_20,uVar3);
            local_48 = local_48 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_016f6430(local_20,8,0);
        iVar4 = *(int *)(*(longlong *)(local_20 + 0x4c0) + 0x10);
        local_48 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar3 = FUN_01d347d0(*(undefined8 *)(local_20 + 0x4c0),local_48);
            FUN_01390c30(local_20,uVar3);
            local_48 = local_48 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),*(undefined8 *)(local_20 + 0x148));
        FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x120),*(undefined8 *)(local_20 + 0x150));
        if (*PTR_DAT_02002b78 != '\0') {
          uVar3 = FUN_019a45d0();
          FUN_0138fd60(uVar3,local_20);
          uVar3 = FUN_019a45d0();
          FUN_019af4e0(uVar3);
          FUN_017d3250(local_20);
          FUN_017d3e50(local_20);
          FUN_017d4030(local_20);
          cVar2 = FUN_0135a0c0(local_20,1,1);
          if ((cVar2 != '\0') && (*PTR_DAT_020052b8 != '\0')) {
            FUN_01c88130(*(undefined8 *)PTR_DAT_02004e40,3);
          }
        }
      }
      puVar1 = local_60;
      if ((*PTR_DAT_020052b8 != '\0') && (*PTR_DAT_020028a0 != '\0')) {
        *PTR_DAT_020028a0 = 0;
        *PTR_DAT_02004c20 = 0;
      }
    }
    local_60 = puVar1;
    local_21 = '\0';
    *(undefined1 *)(local_20 + 0x1401) = 0;
    puVar1 = local_60;
  }
  local_60 = puVar1;
  if ((local_20 != 0) && (*(char *)(local_20 + 0x1400) != '\0' || local_21 != '\0')) {
    FUN_00f513f0(local_20,1);
  }
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_013a48d0(*(undefined8 *)PTR_DAT_020032b8);
    cVar2 = FUN_01b07dd0(local_20);
    if (cVar2 == '\0') {
      FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"StopAnalysis()",0,1);
    }
  }
  FUN_00414480(&local_68);
  return local_22;
}

