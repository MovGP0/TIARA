/* Ghidra address: 01859130 */
/* Ghidra symbol: FUN_01859130 */


longlong * FUN_01859130(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 extraout_AH;
  undefined1 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 *local_80;
  byte local_69;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_30;
  
  local_80 = auStack_d8;
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  local_b0 = CONCAT44(local_b0._4_4_,uVar4);
  local_b8 = uVar3;
  local_30 = (longlong *)FUN_00a395e0(&PTR_FUN_01858398,1,6,8);
  lVar7 = FUN_00a39e90(param_1);
  cVar1 = *(char *)(lVar7 + 0x491);
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    FUN_005fdf10(local_30[0x29]);
    uVar8 = FUN_005ffa40(local_30[0x29]);
    uVar3 = (**(code **)(*local_30 + 0x60))(local_30);
    uVar4 = (**(code **)(*local_30 + 0x48))(local_30);
    local_b0 = FUN_005ffa40(param_1[0x29]);
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xcc0020;
    local_b8 = uVar4;
    thunk_FUN_0415fcd2(uVar8,0,0,uVar3);
    FUN_005fe090(local_30[0x29]);
    iVar5 = (**(code **)(*param_1 + 0x48))();
    local_68 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar8 = FUN_00a3c1b0(local_30,local_68);
        iVar6 = (**(code **)(*param_1 + 0x60))(param_1);
        FUN_0040d200(uVar8,(longlong)iVar6,0xff);
        local_68 = local_68 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (cVar1 == '\x03') {
    uVar8 = FUN_00a33e30(param_1[0x2c],&PTR_FUN_00a31a70);
    local_40 = FUN_004113f0(uVar8,&PTR_FUN_00a31a70);
    uVar8 = FUN_00a33e30(param_1[0x2c],&PTR_FUN_00a31730);
    local_48 = FUN_004113f0(uVar8,&PTR_FUN_00a31730);
    iVar5 = (**(code **)(*param_1 + 0x48))();
    local_68 = 0;
    if (-1 < iVar5 + -1) {
      do {
        local_50 = FUN_00a3c240(local_30,local_68);
        local_58 = FUN_00a3c240(param_1,local_68);
        local_60 = FUN_00a3c1b0(local_30,local_68);
        iVar6 = (**(code **)(*param_1 + 0x60))();
        local_64 = 0;
        if (-1 < iVar6 + -1) {
          do {
            lVar7 = FUN_00a39e90(param_1);
            cVar1 = *(char *)(lVar7 + 0x490);
            if (cVar1 == '\x01') {
              local_69 = *(byte *)(local_58 + local_64 / 8) >> (7U - (char)(local_64 % 8) & 0x1f) &
                         1;
            }
            else if ((cVar1 == '\x02') || (cVar1 == '\x04')) {
              local_69 = *(byte *)(local_58 + local_64 / 2) >>
                         (('\x01' - (char)(local_64 % 2)) * '\x04' & 0x1fU) & 0xf;
            }
            else if (cVar1 == '\b') {
              local_69 = *(byte *)(local_58 + local_64);
            }
            else {
              uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unknown PNG BitDepth");
              FUN_004134c0(uVar8);
            }
            uVar2 = FUN_00a38d30(local_48,local_69);
            lVar7 = (longlong)local_64;
            *(undefined1 *)(local_50 + lVar7 * 3) = uVar2;
            FUN_00a38d30(local_48,local_69);
            *(undefined1 *)(local_50 + 1 + lVar7 * 3) = extraout_AH;
            FUN_00a38d30(local_48,local_69);
            *(undefined1 *)(local_50 + 2 + lVar7 * 3) = extraout_var;
            if (local_40 == 0) {
              *(undefined1 *)(local_60 + lVar7) = 0xff;
            }
            else {
              *(undefined1 *)(local_60 + lVar7) =
                   *(undefined1 *)(local_40 + 0x29 + (ulonglong)local_69);
            }
            local_64 = local_64 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_68 = local_68 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (cVar1 == '\x04') {
    FUN_005fdf10(local_30[0x29]);
    uVar8 = FUN_005ffa40(local_30[0x29]);
    uVar3 = (**(code **)(*local_30 + 0x60))(local_30);
    uVar4 = (**(code **)(*local_30 + 0x48))(local_30);
    local_b0 = FUN_005ffa40(param_1[0x29]);
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xcc0020;
    local_b8 = uVar4;
    thunk_FUN_0415fcd2(uVar8,0,0,uVar3);
    FUN_005fe090(local_30[0x29]);
    iVar5 = (**(code **)(*param_1 + 0x48))();
    local_68 = 0;
    if (-1 < iVar5 + -1) {
      do {
        local_58 = FUN_00a3c1b0(param_1,local_68);
        local_60 = FUN_00a3c1b0(local_30,local_68);
        iVar6 = (**(code **)(*param_1 + 0x60))(param_1);
        FUN_00409a70(local_58,local_60,(longlong)iVar6);
        local_68 = local_68 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    (**(code **)(*local_30 + 0x10))(local_30,param_1);
  }
  return local_30;
}

