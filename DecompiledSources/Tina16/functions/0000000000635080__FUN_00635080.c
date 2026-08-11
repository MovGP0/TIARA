/* Ghidra address: 00635080 */
/* Ghidra symbol: FUN_00635080 */


void FUN_00635080(uint param_1,undefined2 *param_2,ushort *param_3,undefined2 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar6 = FUN_0041f930();
  if (param_1 == *(uint *)(lVar6 + 0x250)) {
    lVar6 = FUN_0041f930();
    *param_2 = *(undefined2 *)(lVar6 + 0x254);
    lVar6 = FUN_0041f930();
    *param_3 = *(ushort *)(lVar6 + 0x256);
    lVar6 = FUN_0041f930();
    *param_4 = *(undefined2 *)(lVar6 + 600);
  }
  else {
    uVar5 = param_1 & 0xff;
    uVar8 = param_1 >> 8;
    bVar7 = (byte)(param_1 >> 8);
    if ((param_1 & 0xff) <= (uVar8 & 0xff)) {
      uVar5 = (uint)bVar7;
    }
    uVar3 = (ushort)(byte)(param_1 >> 0x10);
    if (uVar5 <= uVar3) {
      uVar5 = (uint)uVar3;
    }
    dVar10 = (double)uVar5;
    if ((param_1 & 0xff) < (uVar8 & 0xff)) {
      uVar5 = param_1 & 0xff;
    }
    else {
      uVar5 = (uint)bVar7;
    }
    if (uVar3 <= uVar5) {
      uVar5 = (uint)uVar3;
    }
    dVar11 = (double)uVar5;
    uVar1 = FUN_0040c840(((dVar10 + dVar11) * 240.0 + 255.0) / 510.0);
    *param_3 = uVar1;
    if (dVar10 == dVar11) {
      *param_2 = 0xa0;
      *param_4 = 0;
    }
    else {
      if (120.0 < (double)*param_3) {
        dVar9 = ((dVar10 - dVar11) * 240.0 + (510.0 - (dVar10 + dVar11)) / 2.0) /
                (510.0 - (dVar10 + dVar11));
      }
      else {
        dVar9 = ((dVar10 - dVar11) * 240.0 + (dVar10 + dVar11) / 2.0) / (dVar10 + dVar11);
      }
      uVar1 = FUN_0040c840(((dVar10 - (double)(param_1 & 0xff)) * 40.0 + (dVar10 - dVar11) / 2.0) /
                           (dVar10 - dVar11));
      uVar2 = FUN_0040c840(((dVar10 - (double)(uVar8 & 0xff)) * 40.0 + (dVar10 - dVar11) / 2.0) /
                           (dVar10 - dVar11));
      uVar3 = FUN_0040c840(((dVar10 - (double)uVar3) * 40.0 + (dVar10 - dVar11) / 2.0) /
                           (dVar10 - dVar11));
      if ((double)(param_1 & 0xff) == dVar10) {
        dVar10 = (double)(int)((uint)uVar3 - (uint)uVar2);
      }
      else if ((double)(uVar8 & 0xff) == dVar10) {
        dVar10 = ((double)uVar1 - (double)uVar3) + 80.0;
      }
      else {
        dVar10 = ((double)uVar2 - (double)uVar1) + 160.0;
      }
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + 240.0;
      }
      if (240.0 < dVar10) {
        dVar10 = dVar10 - 240.0;
      }
      uVar4 = FUN_0040c770(dVar10);
      *param_2 = uVar4;
      uVar4 = FUN_0040c840(dVar9);
      *param_4 = uVar4;
    }
    lVar6 = FUN_0041f930();
    *(uint *)(lVar6 + 0x250) = param_1;
    lVar6 = FUN_0041f930();
    *(undefined2 *)(lVar6 + 0x254) = *param_2;
    lVar6 = FUN_0041f930();
    *(ushort *)(lVar6 + 0x256) = *param_3;
    lVar6 = FUN_0041f930();
    *(undefined2 *)(lVar6 + 600) = *param_4;
  }
  return;
}

