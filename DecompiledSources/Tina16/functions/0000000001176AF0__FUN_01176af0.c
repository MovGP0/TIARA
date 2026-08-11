/* Ghidra address: 01176af0 */
/* Ghidra symbol: FUN_01176af0 */


undefined4 FUN_01176af0(longlong *param_1,longlong *param_2,int param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 local_154;
  undefined8 local_150;
  undefined1 local_148 [256];
  longlong local_48;
  longlong local_40 [4];
  
  local_150 = 0;
  local_40[0] = 0;
  local_48 = *param_2 + 0x15e0;
  *(undefined2 *)(*param_2 + 0x1a8) = 0x43;
  *(undefined4 *)(*param_2 + 0xb14) = 0xf;
  *(undefined4 *)(*param_2 + 0xb18) = 0;
  *(int *)(*param_2 + 0xb1c) = *(int *)(*param_2 + 0x15f8) + 1;
  FUN_011766f0(&local_48,0x58);
  puVar6 = (undefined8 *)&DAT_020412f8;
  puVar7 = (undefined8 *)(*param_2 + 0x1ac);
  for (lVar3 = 0x96; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
  iVar4 = 0;
  if (-1 < *(int *)(*param_2 + 0x15f8)) {
    iVar2 = *(int *)(*param_2 + 0x15f8) + 1;
    do {
      *(int *)(*param_2 + 0x660 + (longlong)iVar4 * 4) = *(int *)(*param_2 + 0x15ec) + 0xf;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar4 = *(int *)(*param_2 + 0x15f8);
  dVar1 = *(double *)(*param_1 + 0xb8);
  dVar9 = *(double *)(*param_1 + 0xb0);
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar5 = iVar4 + 1;
    do {
      if (*(int *)(*param_2 + 0x1610) == 0) {
        fVar8 = (float)FUN_00526700(0x41200000,(float)iVar2);
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(double *)(*param_1 + 0xb0) * (double)fVar8);
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_40);
      }
      else {
        if (*(int *)(*param_2 + 0x1610) != 1) {
          local_154 = 4;
          goto LAB_01176f0e;
        }
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(double *)(*param_1 + 0xb0) +
                     (double)iVar2 * ((dVar1 - dVar9) / (double)iVar4));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_40);
      }
      FUN_00414ad0(*param_2 + 0x60 + (longlong)iVar2 * 8,local_40[0]);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined2 *)(*param_2 + 0xc68) = 0x43;
  *(undefined4 *)(*param_2 + 0x15d4) = 0xf;
  *(undefined4 *)(*param_2 + 0x15d8) = 0;
  *(int *)(*param_2 + 0x15dc) = *(int *)(*param_2 + 0x15fc) + 1;
  FUN_011766f0(&local_48,0x59);
  puVar6 = (undefined8 *)&DAT_020412f8;
  puVar7 = (undefined8 *)(*param_2 + 0x1120);
  for (lVar3 = 0x96; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
  iVar4 = 0;
  if (-1 < *(int *)(*param_2 + 0x15fc)) {
    iVar2 = *(int *)(*param_2 + 0x15fc) + 1;
    do {
      *(int *)(*param_2 + 0xc6c + (longlong)iVar4 * 4) = *(int *)(*param_2 + 0x15e0) + -10;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_3 == 0) {
    iVar4 = *(int *)(*param_2 + 0x15fc);
    dVar1 = *(double *)(*param_1 + 0xc0);
    dVar9 = (double)iVar4;
    if (-1 < iVar4) {
      do {
        dVar10 = *(double *)(*param_1 + 0xc0) +
                 (double)(*(int *)(*param_2 + 0x15fc) - iVar4) * (-dVar1 / dVar9);
        if (-0.001 < dVar10) {
          dVar10 = 0.0;
        }
        FUN_0040fb60(local_148,dVar10,5,1);
        FUN_004169a0(local_40,local_148);
        FUN_0122a290(local_40,*(undefined8 *)PTR_DAT_020052e0,*(undefined8 *)PTR_DAT_02001b48);
        FUN_0043ea00(&local_150,local_40[0]);
        FUN_00414ad0(*param_2 + 0xb20 + (longlong)iVar4 * 8,local_150);
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
    local_154 = 0;
  }
  else {
    local_154 = 4;
  }
LAB_01176f0e:
  FUN_00414480(&local_150);
  FUN_00414480(local_40);
  return local_154;
}

