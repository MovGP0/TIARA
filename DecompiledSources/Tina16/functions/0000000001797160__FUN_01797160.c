/* Ghidra address: 01797160 */
/* Ghidra symbol: FUN_01797160 */


void FUN_01797160(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_90;
  int local_8c;
  short local_88 [2];
  short local_84;
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined4 local_44;
  short *local_40 [2];
  
  uVar2 = FUN_00b959a0(0x50,0x38);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (iVar7 - 1U < 0x80000000) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017aaf70);
      if (cVar1 != '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        uVar2 = FUN_00b95a90(lVar4 + 0x18);
        *(undefined4 *)(param_2 + 0x24) = uVar2;
        break;
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_44 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = FUN_00b959a0(0,0);
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017ab260);
      if (cVar1 != '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        uVar2 = FUN_00b95a90(lVar4 + 0x18);
        *(undefined4 *)(param_2 + 0x28) = uVar2;
        *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) - *(short *)(param_2 + 0x24);
        *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) - *(short *)(param_2 + 0x26);
        break;
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar3 = FUN_00b95b20(0x7fff,0x7fff,0xffff8001,0xffff8001);
  *(undefined8 *)(param_2 + 0xc) = uVar3;
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_2 + 0xc);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017aad48);
      if (cVar1 == '\0') {
        plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        (**(code **)(*plVar5 + 0x40))(plVar5,local_88);
        FUN_017ad620(local_64,local_88);
        FUN_00b95ba0(local_88,param_2 + 0xc);
        thunk_FUN_0408d40e(local_54,local_88,local_64);
        uVar3 = FUN_00b95b50(local_54);
        *(undefined8 *)(param_2 + 0xc) = uVar3;
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a79c0);
        if (cVar1 == '\0') {
          FUN_00b95ba0(local_88,param_2 + 0x14);
          thunk_FUN_0408d40e(local_54,local_88,local_64);
        }
        uVar3 = FUN_00b95b50(local_54);
        *(undefined8 *)(param_2 + 0x14) = uVar3;
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00498350(local_74,0,0,0,0);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017ab8b8);
      if (cVar1 != '\0') {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        FUN_017b6e20(uVar3,local_74);
        uVar3 = FUN_00b95b50(local_74);
        *(undefined8 *)(param_2 + 0x14) = uVar3;
        break;
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00498350(local_74,0,0,0,0);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017ad080);
      if (cVar1 != '\0') {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        FUN_017b6e20(uVar3,local_74);
        uVar3 = FUN_00b95b50(local_74);
        *(undefined8 *)(param_2 + 0x1c) = uVar3;
        break;
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar2 = FUN_00b959a0(0,0);
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017ab548);
      if (cVar1 != '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        uVar2 = FUN_00b95a90(lVar4 + 0x18);
        *(undefined4 *)(param_2 + 0x2c) = uVar2;
        *(short *)(param_2 + 0x2c) = *(short *)(param_2 + 0x2c) - *(short *)(param_2 + 0x24);
        *(short *)(param_2 + 0x2e) = *(short *)(param_2 + 0x2e) - *(short *)(param_2 + 0x26);
        break;
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00b95ba0(local_54,param_2 + 0xc);
  iVar7 = -(int)(short)local_44;
  iVar8 = -(int)local_44._2_2_;
  FUN_00429ca0(local_54,iVar7,iVar8);
  uVar3 = FUN_00b95b50(local_54);
  *(undefined8 *)(param_2 + 0xc) = uVar3;
  FUN_00b95ba0(local_54,param_2 + 0x14);
  FUN_00429ca0(local_54,iVar7,iVar8);
  uVar3 = FUN_00b95b50(local_54);
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  FUN_00b95ba0(local_54,param_2 + 0x1c);
  FUN_00429ca0(local_54,iVar7,iVar8);
  uVar3 = FUN_00b95b50(local_54);
  *(undefined8 *)(param_2 + 0x1c) = uVar3;
  FUN_00c3c900();
  FUN_00c3c990(param_2);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  local_90 = 0;
  if (-1 < iVar7 + -1) {
    do {
      if ((param_3 == '\0') ||
         (lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90),
         *(char *)(lVar4 + 0x21) != '\0')) {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a79c0);
        if (cVar1 == '\0') {
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a8d10);
          if (cVar1 == '\0') {
            uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
            cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a9680);
            if (cVar1 == '\0') {
              uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
              cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a9fa8);
              if (cVar1 == '\0') {
                uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
                cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a83d8);
                if (cVar1 == '\0') {
                  uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
                  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017ac7a0);
                  if (cVar1 != '\0') {
                    plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
                    iVar8 = (int)plVar5[0xb] + *(int *)((longlong)plVar5 + 0x5c);
                    puVar6 = (undefined4 *)FUN_004095c0((longlong)(iVar8 + 0x20));
                    *puVar6 = 0x6a;
                    puVar6[1] = 0x105;
                    puVar6[2] = iVar8 + 0x14;
                    local_40[0] = (short *)(puVar6 + 3);
                    (**(code **)(*plVar5 + 0x40))(plVar5,local_88);
                    *(short *)(puVar6 + 3) = local_88[0] - (short)local_44;
                    (**(code **)(*plVar5 + 0x40))(plVar5,local_88);
                    *(short *)((longlong)puVar6 + 0xe) = local_84 - local_44._2_2_;
                    *(char *)(puVar6 + 4) = (char)plVar5[0xc];
                    *(undefined1 *)((longlong)puVar6 + 0x11) =
                         *(undefined1 *)((longlong)plVar5 + 0x61);
                    *(undefined1 *)((longlong)puVar6 + 0x12) =
                         *(undefined1 *)((longlong)plVar5 + 99);
                    *(undefined1 *)((longlong)puVar6 + 0x13) =
                         *(undefined1 *)((longlong)plVar5 + 100);
                    puVar6[5] = (int)plVar5[0xb];
                    puVar6[6] = *(undefined4 *)((longlong)plVar5 + 0x5c);
                    puVar6[7] = *(undefined4 *)((longlong)plVar5 + 0x7c);
                    local_40[0] = (short *)(puVar6 + 8);
                    FUN_017b8380(plVar5,local_40[0]);
                    FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar6);
                  }
                }
                else {
                  lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
                  puVar6 = (undefined4 *)
                           FUN_004095c0((uint)*(byte *)(lVar4 + 0x40) +
                                        (uint)*(byte *)(lVar4 + 0x140) + 0x22);
                  *puVar6 = 0x67;
                  puVar6[1] = 0x105;
                  puVar6[2] = (uint)*(byte *)(lVar4 + 0x40) + (uint)*(byte *)(lVar4 + 0x140) + 0x16;
                  local_40[0] = (short *)(puVar6 + 3);
                  FUN_00409a70(lVar4 + 0x40,local_40[0],*(byte *)(lVar4 + 0x40) + 1);
                  FUN_017919d0(local_40,*(byte *)(lVar4 + 0x40) + 1);
                  *(undefined1 *)local_40[0] = 0;
                  FUN_017919d0(local_40,1);
                  FUN_00409a70(lVar4 + 0x140,local_40[0],*(byte *)(lVar4 + 0x140) + 1);
                  FUN_017919d0(local_40,*(byte *)(lVar4 + 0x140) + 1);
                  *(undefined1 *)local_40[0] = 0;
                  FUN_017919d0(local_40,1);
                  *local_40[0] = *(short *)(lVar4 + 0x18) - (short)local_44;
                  local_40[0][1] = *(short *)(lVar4 + 0x1c) - local_44._2_2_;
                  *(undefined8 *)(local_40[0] + 2) = *(undefined8 *)(lVar4 + 0x240);
                  *(undefined1 *)(local_40[0] + 6) = *(undefined1 *)(lVar4 + 0x248);
                  *(undefined1 *)((longlong)local_40[0] + 0xd) = *(undefined1 *)(lVar4 + 0x249);
                  *(undefined4 *)(local_40[0] + 7) = *(undefined4 *)(lVar4 + 0x24c);
                  FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar6);
                }
              }
              else {
                lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
                iVar8 = *(int *)(lVar4 + 0x60) * 4;
                puVar6 = (undefined4 *)FUN_004095c0((longlong)(iVar8 + 0x20));
                *puVar6 = 0x68;
                puVar6[1] = 0x105;
                puVar6[2] = iVar8 + 0x14;
                local_40[0] = (short *)(puVar6 + 3);
                uVar3 = FUN_00b95b20(*(int *)(lVar4 + 0x18) - (int)(short)local_44,
                                     *(int *)(lVar4 + 0x1c) - (int)local_44._2_2_,
                                     *(int *)(lVar4 + 0x48) - (int)(short)local_44,
                                     *(int *)(lVar4 + 0x4c) - (int)local_44._2_2_);
                *(undefined8 *)(puVar6 + 3) = uVar3;
                puVar6[5] = *(undefined4 *)(lVar4 + 100);
                puVar6[6] = *(undefined4 *)(lVar4 + 0x68);
                *(undefined2 *)(puVar6 + 7) = *(undefined2 *)(lVar4 + 0x6c);
                *(undefined2 *)((longlong)puVar6 + 0x1e) = *(undefined2 *)(lVar4 + 0x60);
                local_40[0] = (short *)(puVar6 + 8);
                if (0 < *(int *)(lVar4 + 0x60)) {
                  iVar8 = *(int *)(lVar4 + 0x60);
                  local_8c = 0;
                  if (-1 < iVar8 + -1) {
                    do {
                      uVar2 = FUN_00b95a90(*(longlong *)(lVar4 + 0x58) + (longlong)local_8c * 8);
                      *(undefined4 *)(local_40[0] + (longlong)local_8c * 2) = uVar2;
                      local_8c = local_8c + 1;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                  }
                }
                FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar6);
              }
            }
            else {
              puVar6 = (undefined4 *)FUN_004095c0(0x1f);
              *puVar6 = 0x66;
              puVar6[1] = 0x105;
              puVar6[2] = 0x13;
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
              *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(lVar4 + 0x50);
              uVar3 = FUN_00b95b20(*(int *)(lVar4 + 0x18) - (int)(short)local_44,
                                   *(int *)(lVar4 + 0x1c) - (int)local_44._2_2_,
                                   *(int *)(lVar4 + 0x48) - (int)(short)local_44,
                                   *(int *)(lVar4 + 0x4c) - (int)local_44._2_2_);
              *(undefined8 *)((longlong)puVar6 + 0xd) = uVar3;
              *(undefined4 *)((longlong)puVar6 + 0x15) = *(undefined4 *)(lVar4 + 0x54);
              *(undefined4 *)((longlong)puVar6 + 0x19) = *(undefined4 *)(lVar4 + 0x58);
              *(undefined2 *)((longlong)puVar6 + 0x1d) = *(undefined2 *)(lVar4 + 0x5c);
              FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar6);
            }
          }
          else {
            puVar6 = (undefined4 *)FUN_004095c0(0x28);
            *puVar6 = 0x65;
            puVar6[1] = 0x105;
            puVar6[2] = 0x1c;
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
            uVar3 = FUN_00b95b20(*(int *)(lVar4 + 0x18) - (int)(short)local_44,
                                 *(int *)(lVar4 + 0x1c) - (int)local_44._2_2_,
                                 *(int *)(lVar4 + 0x48) - (int)(short)local_44,
                                 *(int *)(lVar4 + 0x4c) - (int)local_44._2_2_);
            *(undefined8 *)(puVar6 + 3) = uVar3;
            puVar6[5] = *(undefined4 *)(lVar4 + 0x50);
            *(undefined2 *)(puVar6 + 6) = *(undefined2 *)(lVar4 + 0x54);
            *(undefined1 *)((longlong)puVar6 + 0x1a) = 0;
            *(undefined2 *)((longlong)puVar6 + 0x1b) = 100;
            *(undefined4 *)((longlong)puVar6 + 0x1d) = 0xfffffffe;
            *(undefined1 *)((longlong)puVar6 + 0x21) = 0;
            *(undefined2 *)((longlong)puVar6 + 0x22) = 100;
            puVar6[9] = 0xfffffffe;
            FUN_004ae7e0(*(undefined8 *)(param_2 + 0x38),puVar6);
          }
        }
        else {
          puVar6 = (undefined4 *)FUN_004095c0(0x3a);
          *puVar6 = 100;
          puVar6[1] = 0x105;
          puVar6[2] = 0x2e;
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_90);
          FUN_00415020(puVar6 + 3,lVar4 + 0x40,0x10);
          *(undefined1 *)((longlong)puVar6 + 0x1d) = *(undefined1 *)(lVar4 + 0x140);
          *(undefined1 *)((longlong)puVar6 + 0x1e) = *(undefined1 *)(lVar4 + 0x144);
          *(undefined1 *)((longlong)puVar6 + 0x1f) = *(undefined1 *)(lVar4 + 0x145);
          *(undefined1 *)(puVar6 + 8) = *(undefined1 *)(lVar4 + 0x147);
          *(short *)((longlong)puVar6 + 0x21) = *(short *)(lVar4 + 0x18) - (short)local_44;
          *(short *)((longlong)puVar6 + 0x23) = *(short *)(lVar4 + 0x1c) - local_44._2_2_;
          *(undefined1 *)((longlong)puVar6 + 0x25) = *(undefined1 *)(lVar4 + 0x148);
          *(undefined8 *)((longlong)puVar6 + 0x26) = *(undefined8 *)(lVar4 + 0x154);
          *(undefined8 *)((longlong)puVar6 + 0x2e) = *(undefined8 *)(lVar4 + 0x160);
          *(undefined4 *)((longlong)puVar6 + 0x36) = *(undefined4 *)(lVar4 + 0x168);
          FUN_004ae7e0(*(undefined8 *)(param_2 + 0x30),puVar6);
        }
      }
      local_90 = local_90 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

