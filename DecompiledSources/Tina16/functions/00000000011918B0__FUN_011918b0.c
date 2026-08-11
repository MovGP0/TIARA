/* Ghidra address: 011918b0 */
/* Ghidra symbol: FUN_011918b0 */


undefined8 FUN_011918b0(longlong *param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  uint local_3f64;
  undefined1 local_3f58 [16];
  undefined1 local_3f48 [16];
  undefined1 local_3f38 [16];
  undefined1 local_3f28 [16];
  undefined1 local_3f18 [16];
  undefined1 local_3f08 [16];
  undefined1 local_3ef8 [16];
  double local_3ee8 [488];
  undefined1 local_2fa8;
  double local_2f40 [499];
  undefined1 local_1fa8;
  double local_1f98 [501];
  double local_ff0 [9];
  undefined1 local_fa8;
  
  local_fa8 = 0;
  local_1fa8 = 0;
  local_2fa8 = 0;
  iVar7 = *(int *)(*param_1 + 0x1fa0);
  *(int *)(*param_1 + 0x1fa0) = iVar7 * 2;
  pdVar5 = (double *)(*param_1 + 0x50);
  pdVar6 = local_ff0;
  for (lVar3 = 0x1f5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar5 = (double *)(*param_1 + 0xff8);
  pdVar6 = local_1f98;
  for (lVar3 = 0x1f5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  bVar8 = iVar7 % 2 == 1;
  if (bVar8) {
    local_2f40[0] = local_ff0[1];
    local_2f40[1] = param_2 * local_ff0[2];
    local_2f40[2] = local_ff0[1] * param_3 * param_3;
    local_3ee8[0] = local_1f98[1];
    local_3ee8[1] = param_2 * local_1f98[2];
    local_3ee8[2] = local_1f98[1] * param_3 * param_3;
  }
  uVar4 = (uint)bVar8;
  iVar7 = (iVar7 + 1) / 2 + -1;
  if ((int)uVar4 <= iVar7) {
    iVar7 = (iVar7 - uVar4) + 1;
    local_3f64 = uVar4;
    do {
      iVar1 = local_3f64 * 3;
      iVar2 = local_3f64 * 6 + uVar4 * -3;
      if (local_ff0[iVar1] == 0.0) {
        local_2f40[iVar2] = 0.0;
        dVar9 = (double)FUN_0040c760(local_ff0[iVar1 + 2]);
        local_2f40[iVar2 + 1] = dVar9 * param_2;
        local_2f40[iVar2 + 2] = 0.0;
        local_2f40[iVar2 + 3] = 0.0;
        dVar9 = (double)FUN_0040c760(local_ff0[iVar1 + 2]);
        local_2f40[iVar2 + 4] = dVar9 * param_2;
        local_2f40[iVar2 + 5] = 0.0;
      }
      else {
        FUN_01236c30(local_3ef8,local_ff0[iVar1],0);
        FUN_01236c30(local_3f08,local_ff0[iVar1 + 1],0);
        FUN_01236c30(local_3f18,local_ff0[iVar1 + 2],0);
        FUN_01236d30(local_3ef8,local_3f08,local_3f18,local_3f28,local_3f38);
        FUN_01236c30(local_3ef8,0x3ff0000000000000,0);
        FUN_01236cd0(local_3f48,local_3f28);
        FUN_01236c30(local_3f58,param_2,0);
        FUN_01236c60(local_3f08,local_3f48,local_3f58);
        FUN_01236c30(local_3f18,param_3 * param_3,0);
        FUN_01236d30(local_3ef8,local_3f08,local_3f18,local_3f28,local_3f38);
        local_2f40[iVar2] = 1.0;
        dVar9 = (double)FUN_01236eb0(local_3f28);
        local_2f40[iVar2 + 1] = dVar9 * -2.0;
        FUN_01236b00(local_3f58,local_3f28);
        FUN_01236c60(local_3f48,local_3f28,local_3f58);
        dVar9 = (double)FUN_01236eb0(local_3f48);
        local_2f40[iVar2 + 2] = dVar9;
        local_2f40[iVar2 + 3] = 1.0;
        dVar9 = (double)FUN_01236eb0(local_3f38);
        local_2f40[iVar2 + 4] = dVar9 * -2.0;
        FUN_01236b00(local_3f58,local_3f38);
        FUN_01236c60(local_3f48,local_3f38,local_3f58);
        dVar9 = (double)FUN_01236eb0(local_3f48);
        local_2f40[iVar2 + 5] = dVar9;
      }
      FUN_01236c30(local_3ef8,local_1f98[iVar1],0);
      FUN_01236c30(local_3f08,local_1f98[iVar1 + 1],0);
      FUN_01236c30(local_3f18,local_1f98[iVar1 + 2],0);
      FUN_01236d30(local_3ef8,local_3f08,local_3f18,local_3f28,local_3f38);
      FUN_01236c30(local_3ef8,0x3ff0000000000000,0);
      FUN_01236cd0(local_3f48,local_3f28);
      FUN_01236c30(local_3f58,param_2,0);
      FUN_01236c60(local_3f08,local_3f48,local_3f58);
      FUN_01236c30(local_3f18,param_3 * param_3,0);
      FUN_01236d30(local_3ef8,local_3f08,local_3f18,local_3f28,local_3f38);
      local_3ee8[iVar2] = 1.0;
      dVar9 = (double)FUN_01236eb0(local_3f28);
      local_3ee8[iVar2 + 1] = dVar9 * -2.0;
      FUN_01236b00(local_3f58,local_3f28);
      FUN_01236c60(local_3f48,local_3f28,local_3f58);
      dVar9 = (double)FUN_01236eb0(local_3f48);
      local_3ee8[iVar2 + 2] = dVar9;
      local_3ee8[iVar2 + 3] = 1.0;
      dVar9 = (double)FUN_01236eb0(local_3f38);
      local_3ee8[iVar2 + 4] = dVar9 * -2.0;
      FUN_01236b00(local_3f58,local_3f38);
      FUN_01236c60(local_3f48,local_3f38,local_3f58);
      dVar9 = (double)FUN_01236eb0(local_3f48);
      local_3ee8[iVar2 + 5] = dVar9;
      local_3f64 = local_3f64 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  pdVar5 = local_2f40;
  pdVar6 = (double *)(*param_1 + 0x50);
  for (lVar3 = 0x1f5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar5 = local_3ee8;
  pdVar6 = (double *)(*param_1 + 0xff8);
  for (lVar3 = 0x1f5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  return 0;
}

