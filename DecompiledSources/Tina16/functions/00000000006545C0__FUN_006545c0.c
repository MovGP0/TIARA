/* Ghidra address: 006545c0 */
/* Ghidra symbol: FUN_006545c0 */


void FUN_006545c0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  longlong local_50;
  int local_44;
  longlong local_40;
  longlong local_38;
  
  local_60 = auStack_88;
  iVar2 = FUN_00654c00(param_1);
  if (iVar2 != 0) {
    local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(short *)(param_1 + 0x318) = *(short *)(param_1 + 0x318) + 1;
    local_58 = param_1;
    iVar2 = FUN_00654c00();
    local_44 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_50 = FUN_00654bc0(param_1,local_44);
        if (*(byte *)(local_50 + 0xad) < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)local_50 >> 8),1) <<
                   (*(byte *)(local_50 + 0xad) & 0x1f) & 0x18U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          uVar3 = FUN_00654bc0(param_1,local_44);
          FUN_004ae7e0(local_38,uVar3);
        }
        local_44 = local_44 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    pcVar4 = (code *)FUN_00411550(param_1,0xffbd);
    (*pcVar4)(param_1);
    while (0 < *(int *)(local_38 + 0x10)) {
      local_40 = FUN_004aeac0(local_38,*(int *)(local_38 + 0x10) + -1);
      if (*(char *)(local_40 + 0xad) == '\x03') {
        FUN_0064c650(local_40,4);
      }
      else {
        FUN_0064c650(local_40,3);
      }
      FUN_004ae870(local_38,*(int *)(local_38 + 0x10) + -1);
    }
    FUN_00410f20(local_38);
    FUN_00654410(param_1);
    if (param_2 != '\0') {
      iVar2 = FUN_00654c00();
      local_44 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_00654bc0(param_1,local_44);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00640c18);
          if (cVar1 != '\0') {
            uVar3 = FUN_00654bc0(param_1,local_44);
            pcVar4 = (code *)FUN_00411550(uVar3,0xffb1);
            (*pcVar4)(uVar3,1);
          }
          local_44 = local_44 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

