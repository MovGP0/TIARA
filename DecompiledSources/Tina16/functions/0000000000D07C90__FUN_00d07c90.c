/* Ghidra address: 00d07c90 */
/* Ghidra symbol: FUN_00d07c90 */


void FUN_00d07c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5,undefined2 *param_6,int param_7)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar14 = ((longlong)param_7 + 1) * 2 + 0xfU & 0xfffffffffffffff0;
  uVar12 = -uVar14;
  uVar5 = uVar12 & 0xfff;
  while ((longlong)uVar12 < (longlong)uVar5) {
    auStack_1078[uVar5] = (char)(uVar5 - 0x1000);
    uVar5 = uVar5 - 0x1000;
  }
  lVar4 = -uVar14;
  puVar13 = (undefined2 *)((longlong)&local_58 + lVar4);
  for (lVar11 = (longlong)param_7 + 1; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *param_6;
    param_6 = param_6 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07d63;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (param_5 == 0) {
    local_30 = 0;
  }
  else {
    *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07dad;
    local_30 = FUN_004b6da0(param_5);
  }
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07dc7;
  lVar11 = FUN_00d05e00(param_1);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07dda;
  FUN_00414ad0(lVar11 + 0x148,local_res18);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07de6;
  lVar11 = FUN_00d05e00(param_1);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07df9;
  FUN_00414ad0(lVar11 + 0x150,param_2);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e05;
  lVar11 = FUN_00d05e00(param_1);
  *(undefined8 *)(lVar11 + 0x158) = local_res20;
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e1f;
  lVar11 = FUN_00d05df0(param_1);
  *(longlong *)(lVar11 + 0x118) = param_5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e3a;
          uVar9 = FUN_00d05e00(param_1);
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e49;
          FUN_00d03ec0(param_1,uVar9);
          plVar2 = *(longlong **)(param_1 + 0x100);
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e66;
          cVar6 = FUN_004113d0(plVar2,&PTR_FUN_00cc2da8);
          if (cVar6 != '\0') {
            uVar9 = *(undefined8 *)(param_1 + 0x208);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e81;
            FUN_00cc5380(uVar9,&local_48);
            uVar9 = local_48;
            pcVar3 = *(code **)(*plVar2 + 0x218);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e91;
            (*pcVar3)(plVar2,uVar9);
          }
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07e9d;
          uVar9 = FUN_00d05e00(param_1);
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07eac;
          uVar10 = FUN_00d05df0(param_1);
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07ebe;
          FUN_00d04af0(param_1,uVar9,uVar10);
          do {
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07eca;
            uVar10 = FUN_00d05df0(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07edd;
            FUN_00d07930(param_1,&local_50);
            uVar9 = local_50;
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07ee9;
            FUN_00d06720(uVar10,uVar9);
            uVar9 = *(undefined8 *)(param_1 + 0x210);
            uVar1 = *(undefined4 *)(param_1 + 0x1e8);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f09;
            FUN_00d06d70(uVar9,uVar1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f15;
            uVar9 = FUN_00d05e00(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f24;
            uVar10 = FUN_00d05df0(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f36;
            FUN_00d05490(param_1,uVar9,uVar10);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f42;
            uVar9 = FUN_00d05df0(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f4a;
            iVar8 = FUN_00d065e0(uVar9);
          } while (iVar8 == 100);
          uVar9 = *(undefined8 *)(param_1 + 0x210);
          *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07f74;
          bVar7 = FUN_00d07320(uVar9,(undefined2 *)((longlong)&local_58 + lVar4),param_7);
          uVar9 = local_30;
          if (bVar7 < 3) break;
          if (bVar7 == 3) {
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07fea;
            uVar9 = FUN_00d05e00(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07ff9;
            uVar10 = FUN_00d05df0(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd0800b;
            FUN_00d03810(param_1,uVar9,uVar10);
            uVar9 = local_30;
            if (param_5 != 0) {
              *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd08025;
              FUN_004b6dc0(param_5,uVar9);
              uVar9 = local_30;
              *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd08035;
              FUN_004b6e40(param_5,uVar9);
            }
            *(undefined4 *)(param_1 + 0x1c8) = 0;
            *(undefined4 *)(param_1 + 0x1cc) = 0;
          }
          else if (bVar7 == 4) {
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07fc6;
            lVar11 = FUN_00d05e00(param_1);
            *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd07fd9;
            FUN_00414ad0(lVar11 + 0x148,local_res18);
          }
        }
        if (bVar7 != 2) break;
        *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd080bd;
        FUN_0041ddd0(&local_58,PTR_PTR_02005510);
        uVar9 = local_58;
        *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd080cf;
        uVar9 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,uVar9);
        *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd080d7;
        FUN_004134c0(uVar9);
      }
      if (bVar7 != 0) break;
      if (param_5 != 0) {
        *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd08076;
        FUN_004b6dc0(param_5,uVar9);
        uVar9 = local_30;
        *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd08086;
        FUN_004b6e40(param_5,uVar9);
      }
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
    }
  } while (bVar7 != 1);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd080ea;
  uVar9 = FUN_00d05df0(param_1);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd080f2;
  cVar6 = FUN_00d063e0(uVar9);
  if (cVar6 == '\0') {
    *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd08102;
    FUN_00cbdf10(param_1);
  }
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd08111;
  FUN_00414560(&local_58,3);
  *(undefined8 *)((longlong)&uStack_80 + lVar4) = 0xd0811d;
  FUN_00414480(&local_res18);
  return;
}

