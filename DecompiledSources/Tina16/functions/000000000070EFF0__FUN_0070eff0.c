/* Ghidra address: 0070eff0 */
/* Ghidra symbol: FUN_0070eff0 */


void FUN_0070eff0(longlong param_1,undefined8 param_2,ulonglong *param_3,int param_4,
                 undefined8 param_5,char param_6,char param_7,char param_8)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined7 uVar9;
  bool bVar10;
  int local_94;
  int local_90;
  undefined1 local_8c [12];
  undefined4 local_80 [7];
  uint local_64;
  undefined4 local_58;
  undefined8 local_38;
  ulonglong uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  plVar5 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar5 + 0x90))(plVar5);
  if (cVar2 != '\0') {
    FUN_0040d200(local_80,0x48,0);
    local_80[0] = 4;
    uVar6 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar6,0x120b,(longlong)param_4,local_80);
    uVar9 = (undefined7)((ulonglong)(param_3 + 2) >> 8);
    if (param_8 == '\0') {
      if (param_6 == '\0') {
        if ((param_7 == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
          uVar4 = (undefined4)CONCAT71(uVar9,2);
        }
        else {
          uVar4 = (undefined4)CONCAT71(uVar9,3);
        }
      }
      else {
        uVar4 = (undefined4)CONCAT71(uVar9,4);
      }
    }
    else {
      uVar4 = (undefined4)CONCAT71(uVar9,2);
    }
    plVar5 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar5 + 0x138))(plVar5,local_8c,uVar4);
    uVar6 = FUN_00777cd0();
    uVar7 = FUN_005ffa40(param_2);
    uVar4 = 0;
    FUN_00778dc0(uVar6,uVar7,local_8c,&local_38,0,0);
    uVar6 = FUN_00786090(param_1);
    lVar8 = thunk_FUN_041b2403(uVar6,0x1209,0,0);
    local_80[0] = 0x24;
    FUN_00423b10(&local_38,0xfffffffd,0xfffffffd);
    if (lVar8 == 0) {
      bVar10 = false;
    }
    else {
      uVar6 = FUN_00786090(param_1);
      iVar3 = thunk_FUN_041b2403(uVar6,0x120b,(longlong)param_4,local_80);
      bVar10 = iVar3 != 0;
    }
    if ((bVar10) && ((local_64 & 0x800) == 0x800)) {
      thunk_FUN_0400423a(lVar8,&local_90,&local_94);
      uVar1 = local_38;
      iVar3 = FUN_004230c0(&local_38);
      iVar3 = local_38._4_4_ + iVar3 / 2;
      uVar6 = FUN_005ffa40(param_2,(longlong)local_94 % 2 & 0xffffffff);
      thunk_FUN_04153868(lVar8,local_58,uVar6,uVar1 & 0xffffffff,
                         CONCAT44(uVar4,iVar3 - local_94 / 2),1);
      local_38 = CONCAT44(local_38._4_4_,(int)local_38 + local_90 + 3);
    }
    if (param_4 < 0) {
      uVar4 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0x8024);
    }
    else if ((local_64 & 1) == 1) {
      uVar4 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0x8026);
    }
    else if ((local_64 & 2) == 2) {
      uVar4 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0x8025);
    }
    else {
      uVar4 = FUN_006520b0(*(undefined8 *)(param_1 + 0x10),0x8024);
    }
    FUN_00785c70(param_1,param_2,local_8c,param_5,&local_38,uVar4);
  }
  return;
}

