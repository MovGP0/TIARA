/* Ghidra address: 0083ffa0 */
/* Ghidra symbol: FUN_0083ffa0 */


void FUN_0083ffa0(longlong param_1,uint *param_2,int param_3,uint param_4,char param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  int local_58;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x180) + 0x490);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    FUN_005fd6d0(*(undefined8 *)(lVar5 + 0x78),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x180) + 0x4d0));
    if (param_5 == '\0') {
      FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x78),*(undefined4 *)(param_1 + 0xa0));
    }
    else {
      FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x78),*(undefined4 *)(param_1 + 0x98));
    }
    lVar5 = *(longlong *)(lVar5 + 0x78);
    if (1 < *(int *)(*(longlong *)(lVar5 + 0x18) + 0x2c)) {
      local_48 = 0;
      local_44 = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x28);
      local_40 = 0;
      uVar9 = thunk_FUN_04164f7c(0x12200,*(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x2c),
                                 &local_48,0,0);
      FUN_005fd610(lVar5,uVar9);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x148);
    local_50 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),param_3);
    local_50 = *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)param_4 * 4) + (uVar1 >> 1) +
               local_50;
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x180);
    sVar6 = (short)(param_4 >> 0x10);
    pcVar10 = (code *)FUN_00411550(uVar9,CONCAT62((int6)sVar6,0xffc5));
    cVar7 = (*pcVar10)(uVar9);
    if ((cVar7 != '\0') && (param_4 == 0)) {
      local_50 = local_50 + 1;
    }
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)(param_4 ^ 1) * 4);
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)((param_4 ^ 1) + 2) * 4);
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x180);
    pcVar10 = (code *)FUN_00411550(uVar9,CONCAT62((int6)sVar6,0xffc5));
    cVar7 = (*pcVar10)(uVar9);
    if (cVar7 != '\0') {
      iVar11 = iVar11 + 1;
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)(int)(param_4 + 2) * 4);
    uVar1 = *param_2;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x144);
    local_4c = 0;
    local_58 = param_3;
    do {
      *(int *)(lVar5 + (longlong)(int)(local_4c + param_4) * 4) = local_50;
      *(undefined4 *)(lVar5 + (longlong)(int)(local_4c + (param_4 ^ 1)) * 4) = uVar2;
      *(int *)(lVar5 + (longlong)(int)(local_4c + 2 + param_4) * 4) = local_50;
      *(int *)(lVar5 + (longlong)(int)(local_4c + 2 + (param_4 ^ 1)) * 4) = iVar11;
      local_4c = local_4c + 4;
      do {
        local_58 = local_58 + 1;
        iVar8 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),local_58);
        if (0 < (int)(iVar8 + *param_2)) break;
      } while (local_58 <= (int)param_2[4]);
      local_50 = local_50 + iVar8 + *param_2;
    } while (((local_50 <= (int)(iVar3 + uVar1)) && (local_58 <= (int)param_2[4])) &&
            ((int)local_4c <= iVar4 * 4));
    uVar9 = FUN_005ffa40(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x180) + 0x490));
    thunk_FUN_041c6818(uVar9,lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x138),
                       local_4c >> 2);
  }
  return;
}

