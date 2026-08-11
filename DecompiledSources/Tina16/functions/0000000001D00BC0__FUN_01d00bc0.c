/* Ghidra address: 01d00bc0 */
/* Ghidra symbol: FUN_01d00bc0 */


void FUN_01d00bc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  short local_2ae;
  int local_2ac;
  byte *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [256];
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [137];
  undefined4 local_ef;
  longlong local_b0;
  undefined8 local_a3;
  int local_40;
  uint local_3c;
  char local_35;
  undefined8 local_30 [2];
  
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_180 = 0;
  local_188 = 0;
  local_2ae = FUN_01d03160(param_1);
  *(undefined2 *)(param_1 + 0xec) = 1;
  if (*(longlong *)(param_1 + 0x168) == 0) {
    uVar3 = FUN_01d01940(param_1);
    *(ushort *)(param_1 + 0xf2) = uVar3;
    FUN_00b909a0(&local_b0,(uint)uVar3 * 0x5f);
    FUN_00b909a0(local_30,(uint)*(ushort *)(param_1 + 0xf2) * 99);
    if (local_b0 == 0) {
      FUN_00b047e0(8);
    }
    else {
      uVar6 = FUN_0172a2b0(&DAT_01728b68,1,*(undefined8 *)PTR_DAT_02001f18);
      FUN_01cfac60(param_1,local_178);
      FUN_0172a910(uVar6,local_ef);
      FUN_0172a920(uVar6,local_b0,(uint)*(ushort *)(param_1 + 0xf2) * 0x5f);
      FUN_00410f20(uVar6);
      FUN_01d3c8a0(local_b0,local_30[0],*(undefined2 *)(param_1 + 0xf2),0);
      *(undefined2 *)(param_1 + 0xf6) = 0;
      *(undefined2 *)(param_1 + 0xf4) = 0;
      FUN_01d00280(auStack_2e8);
      FUN_00b909a0(param_1 + 0x168,
                   ((uint)*(ushort *)(param_1 + 0xf2) + (uint)*(ushort *)(param_1 + 0xf6) +
                    (uint)*(ushort *)(param_1 + 0xf4) + 1) * 99);
      if (*(longlong *)(param_1 + 0x168) == 0) {
        FUN_00b047e0(8);
      }
      else {
        FUN_00409a70(local_30[0],*(longlong *)(param_1 + 0x168) + 99,(uint)uVar3 * 99);
        if (*(ushort *)(param_1 + 0xf2) != 0) {
          FUN_004095f0(local_30[0],(uint)*(ushort *)(param_1 + 0xf2) * 99);
          FUN_004095f0(local_b0,(uint)*(ushort *)(param_1 + 0xf2) * 0x5f);
        }
        sVar4 = FUN_01d01940(param_1);
        sVar4 = sVar4 + *(short *)(param_1 + 0xf6) + *(short *)(param_1 + 0xf4);
        FUN_0040d200(*(undefined8 *)(param_1 + 0x168),99,0);
        *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x5b) = param_1;
        if (*(short *)(param_1 + 0xf4) == 0) {
          *(undefined2 *)(param_1 + 0xfc) = 0;
          *(short *)(param_1 + 0xf8) = *(short *)(param_1 + 0xf2) + 1;
          *(short *)(param_1 + 0xfa) = sVar4;
        }
        else {
          *(short *)(param_1 + 0xfc) = *(short *)(param_1 + 0xf2) + 1;
          *(short *)(param_1 + 0xf8) = *(short *)(param_1 + 0xf2) + 2;
          *(short *)(param_1 + 0xfa) = sVar4;
        }
        if (*(short *)(param_1 + 0xf4) != 0) {
          FUN_01d005a0(auStack_2e8);
        }
        if (*(short *)(param_1 + 0xf6) != 0) {
          FUN_01d007a0(auStack_2e8);
        }
        local_2ac = 1;
        for (uVar8 = (uint)*(ushort *)(param_1 + 0xf2); uVar8 != 0; uVar8 = uVar8 - 1) {
          local_2a8 = (byte *)(*(longlong *)(param_1 + 0x168) + (longlong)local_2ac * 99);
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x168) + (longlong)local_2ac * 99);
          puVar10 = &local_a3;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
          *(undefined1 *)((longlong)puVar10 + 2) = *(undefined1 *)((longlong)puVar9 + 2);
          local_3c = (uint)*(ushort *)(PTR_DAT_02004368 + (ulonglong)*local_2a8 * 2);
          local_40 = local_2ac;
          if ((((local_2ae == 0x2901) || (local_2ae == 0x2902)) || (local_2ae == 0x2900)) ||
             ((cVar2 = FUN_01d3d600(local_2ae), cVar2 != '\0' || (local_3c != 0x4b0)))) {
            if ((local_2ae == 0x2900) && (local_3c == 0x4b0)) {
              FUN_01d00b50(auStack_2e8);
            }
            else {
              if (local_2ae == 0x271c) {
                local_3c = 0x3ee;
              }
              FUN_01d00440(auStack_2e8,local_2ac);
              uVar6 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,(undefined2)local_3c);
              *(undefined8 *)(local_2a8 + 0x5b) = uVar6;
              if ((local_3c == 0x3ec) || (local_3c == 0x4b0)) {
                FUN_01d43440(&local_188,local_2ac);
                FUN_00416ba0(&local_180,L"PSG_",local_188);
                FUN_00416910(local_288,local_180,0xff);
                FUN_00415020(*(longlong *)(local_2a8 + 0x5b) + 0xfe,local_288,0x50);
              }
              else {
                FUN_01d3e7b0(&local_298,(undefined2)local_3c);
                FUN_01d43440(&local_2a0,local_2ac);
                local_2c8 = local_2a0;
                FUN_00416cd0(&local_290,3,local_298,&LAB_01d01368);
                FUN_00416910(local_288,local_290,0xff);
                FUN_00415020(*(longlong *)(local_2a8 + 0x5b) + 0xfe,local_288,0x50);
              }
              lVar7 = *(longlong *)(local_2a8 + 0x5b);
              *(undefined8 *)(lVar7 + 0x168) = *(undefined8 *)(param_1 + 0x168);
              *(longlong *)(lVar7 + 0x528) = param_1;
              FUN_01d00110(auStack_2e8,lVar7 + 0x14f,
                           *(longlong *)(param_1 + 0x168) + (longlong)local_2ac * 99);
              lVar7 = *(longlong *)(local_2a8 + 0x5b);
              if (local_3c == 0x5dc) {
                uVar5 = FUN_0040c840((double)*(ushort *)(local_2a8 + 0x47));
                *(undefined2 *)(lVar7 + 0x172) = uVar5;
              }
              if (local_35 != '\0') {
                FUN_01d01990(lVar7,local_2a8[1] + 1);
              }
              sVar4 = ((ushort)local_2a8[1] - *(short *)(lVar7 + 0x172)) + 1;
              *(short *)(lVar7 + 0x170) = sVar4;
              lVar1 = *(longlong *)(lVar7 + 0x528);
              *(short *)(lVar1 + 0x170) = sVar4;
              *(undefined2 *)(lVar1 + 0x172) = *(undefined2 *)(lVar7 + 0x172);
            }
          }
          else {
            FUN_01d009c0(auStack_2e8);
          }
          local_2ac = local_2ac + 1;
        }
        FUN_01cfe000(param_1,local_2ae);
        FUN_01cffd50(param_1,local_2ae);
      }
    }
  }
  else {
    if (*(short *)(param_1 + 0xf4) != 0) {
      FUN_01d00520(auStack_2e8);
    }
    FUN_01cfe000(param_1,local_2ae);
    FUN_01cffd50(param_1,local_2ae);
  }
  FUN_00414560(&local_2a0,3);
  FUN_00414560(&local_188,2);
  return;
}

