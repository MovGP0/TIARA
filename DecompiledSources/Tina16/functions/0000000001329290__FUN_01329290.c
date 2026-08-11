/* Ghidra address: 01329290 */
/* Ghidra symbol: FUN_01329290 */


undefined1 FUN_01329290(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  undefined8 local_48;
  int local_40;
  byte local_39;
  undefined1 local_22;
  char local_21;
  longlong local_20;
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_22 = 0;
  local_21 = '\x01';
  local_20 = *(longlong *)(param_1 + 0x488);
  puVar1 = auStack_b8;
  if (local_20 != 0) {
    *(undefined1 *)(local_20 + 0x1439) = 1;
    local_48 = FUN_00b921a0(0);
    if (*(char *)(local_20 + 0x49c) != '\x01') {
      local_39 = FUN_013291b0(local_20);
      if (*(char *)(local_20 + 0x325) == '\0') {
        *(byte *)(local_20 + 0x326) = *(char *)(local_20 + 0x1424) != '\0' & local_39;
        cVar2 = FUN_01b07dd0(local_20);
        if (cVar2 == '\0') {
          FUN_016f5430(local_20,1,2);
        }
        else {
          FUN_016f39b0(local_20,1,2);
        }
        *(undefined1 *)(local_20 + 0x1424) = 1;
      }
      else {
        FUN_016f6430(local_20,1,0);
        FUN_016f3620(local_20,0,1);
      }
      if (*(char *)(local_20 + 0x49c) != '\x01') {
        FUN_016f6430(local_20,1,0);
        *(int *)(local_20 + 0x498) = *(int *)(local_20 + 0x498) + 1;
        FUN_017d18e0(local_20,1);
        iVar4 = *(int *)(*(longlong *)(local_20 + 0x4c0) + 0x10);
        local_40 = 0;
        if (-1 < iVar4 + -1) {
          do {
            local_58 = FUN_01d347d0(*(undefined8 *)(local_20 + 0x4c0),local_40);
            FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),*(undefined8 *)(local_58 + 8));
            local_40 = local_40 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (*(char *)(local_20 + 0x324) == '\0') {
          FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),*(undefined8 *)(local_20 + 0x140))
          ;
          FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),*(undefined8 *)(local_20 + 0x148))
          ;
          if (*PTR_DAT_02002b78 != '\0') {
            uVar3 = FUN_019a45d0();
            FUN_0131f840(uVar3,local_20);
            local_98 = 1;
            FUN_016f68a0(local_20,1,1,*(undefined1 *)(local_20 + 0xdef));
            FUN_012bc9f0(local_20,*(undefined1 *)(local_20 + 0xdef),0,0);
            uVar3 = FUN_019a45d0();
            FUN_019af4e0(uVar3);
            FUN_0135a0c0(local_20,1,1);
          }
        }
        else if ((*(char *)(local_20 + 0x326) == '\0') || (*(char *)(local_20 + 0x325) != '\0')) {
          uVar3 = FUN_00b89270();
          FUN_00b8e520(uVar3,&local_80,0x10a);
          FUN_016fe2a0(local_80,0x1585,0);
          FUN_0044d440();
        }
        else {
          *(undefined1 *)(local_20 + 0x326) = 0;
          cVar2 = FUN_01b07dd0(local_20);
          if (cVar2 == '\0') {
            FUN_016f5430(local_20,1,2);
          }
          else {
            FUN_016f39b0(local_20,1,2);
          }
          *(undefined1 *)(local_20 + 0x1424) = 1;
          FUN_016f6430(local_20,1,0);
          *(int *)(local_20 + 0x498) = *(int *)(local_20 + 0x498) + 1;
          FUN_017d18e0(local_20,1);
          iVar4 = *(int *)(*(longlong *)(local_20 + 0x4c0) + 0x10);
          local_40 = 0;
          if (-1 < iVar4 + -1) {
            do {
              local_60 = FUN_01d347d0(*(undefined8 *)(local_20 + 0x4c0),local_40);
              FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),*(undefined8 *)(local_60 + 8))
              ;
              local_40 = local_40 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (*(char *)(local_20 + 0x324) == '\0') {
            FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),
                         *(undefined8 *)(local_20 + 0x140));
            FUN_01b07850(local_20,*(undefined8 *)(local_20 + 0x118),
                         *(undefined8 *)(local_20 + 0x148));
            if (*PTR_DAT_02002b78 != '\0') {
              uVar3 = FUN_019a45d0();
              FUN_0131f840(uVar3,local_20);
              local_98 = 1;
              FUN_016f68a0(local_20,1,1,*(undefined1 *)(local_20 + 0xdef));
              FUN_012bc9f0(local_20,1,0,0);
              uVar3 = FUN_019a45d0();
              FUN_019af4e0(uVar3);
              FUN_0135a0c0(local_20,1,1);
            }
          }
          else {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,&local_78,0x10a);
            FUN_016fe2a0(local_78,0x1585,local_20);
            FUN_0044d440();
          }
        }
      }
    }
    local_21 = '\0';
    *(undefined1 *)(local_20 + 0x1439) = 0;
    dVar5 = (double)FUN_00b921a0(local_48);
    *(double *)(local_20 + 0xf20) = dVar5 + *(double *)(local_20 + 0xf20);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  if ((local_20 != 0) && (*(char *)(local_20 + 0x1438) != '\0' || local_21 != '\0')) {
    FUN_00f51380(local_20,1);
  }
  FUN_00414560(&local_80,2);
  return local_22;
}

