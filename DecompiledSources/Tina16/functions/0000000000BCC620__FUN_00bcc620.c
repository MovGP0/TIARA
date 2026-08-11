/* Ghidra address: 00bcc620 */
/* Ghidra symbol: FUN_00bcc620 */


void FUN_00bcc620(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte extraout_AH;
  byte extraout_var;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  bVar3 = FUN_005fbf20(param_2);
  FUN_005fbf20(param_2);
  FUN_005fbf20(param_2);
  uVar7 = FUN_005fbf20(param_3);
  iVar8 = (uVar7 & 0xff) - (uint)bVar3;
  uVar7 = FUN_005fbf20(param_3);
  iVar9 = (uVar7 >> 8 & 0xff) - (uint)extraout_AH;
  uVar7 = FUN_005fbf20(param_3);
  iVar10 = (uVar7 >> 0x10 & 0xff) - (uint)extraout_var;
  iVar11 = FUN_00bcbe50(param_4,2,0x100);
  if (param_6 == '\0') {
    iVar1 = param_5[3];
    iVar2 = param_5[1];
    local_48 = *param_5;
    local_40 = param_5[2];
    local_4c = 0;
    iVar12 = iVar11;
    if (-1 < iVar11 + -1) {
      do {
        local_44 = thunk_FUN_03f3ed25(local_4c,iVar1 - iVar2,iVar11);
        local_44 = param_5[1] + local_44;
        local_3c = thunk_FUN_03f3ed25(local_4c + 1,iVar1 - iVar2,iVar11);
        local_3c = param_5[1] + local_3c;
        iVar13 = iVar11 + -1;
        cVar4 = thunk_FUN_03f3ed25(local_4c,iVar8,iVar13);
        cVar5 = thunk_FUN_03f3ed25(local_4c,iVar9,iVar13);
        cVar6 = thunk_FUN_03f3ed25(local_4c,iVar10,iVar13);
        FUN_005fdab0(param_1[0x10],
                     (ulonglong)
                     CONCAT12(extraout_var + cVar6,CONCAT11(extraout_AH + cVar5,bVar3 + cVar4)));
        (**(code **)(*param_1 + 0xa8))(param_1,&local_48);
        local_4c = local_4c + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  else {
    iVar1 = param_5[2];
    iVar2 = *param_5;
    local_44 = param_5[1];
    local_3c = param_5[3];
    local_4c = 0;
    iVar12 = iVar11;
    if (-1 < iVar11 + -1) {
      do {
        local_48 = thunk_FUN_03f3ed25(local_4c,iVar1 - iVar2,iVar11);
        local_48 = *param_5 + local_48;
        local_40 = thunk_FUN_03f3ed25(local_4c + 1,iVar1 - iVar2,iVar11);
        local_40 = *param_5 + local_40;
        iVar13 = iVar11 + -1;
        cVar4 = thunk_FUN_03f3ed25(local_4c,iVar8,iVar13);
        cVar5 = thunk_FUN_03f3ed25(local_4c,iVar9,iVar13);
        cVar6 = thunk_FUN_03f3ed25(local_4c,iVar10,iVar13);
        FUN_005fdab0(param_1[0x10],
                     (ulonglong)
                     CONCAT12(extraout_var + cVar6,CONCAT11(extraout_AH + cVar5,bVar3 + cVar4)));
        (**(code **)(*param_1 + 0xa8))(param_1,&local_48);
        local_4c = local_4c + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  return;
}

