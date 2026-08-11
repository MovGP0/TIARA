/* Ghidra address: 0164ea30 */
/* Ghidra symbol: FUN_0164ea30 */


double FUN_0164ea30(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                   undefined8 param_5)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  int local_70 [2];
  undefined1 local_68;
  undefined8 local_60 [8];
  
  local_60[0] = 0;
  dVar11 = *(double *)
            (*(longlong *)(param_1 + 0x118) +
            (longlong)*(int *)(*(longlong *)(param_3 + 0x18) + 4) * 8);
  dVar1 = *(double *)
           (*(longlong *)(param_1 + 0x118) +
           (longlong)*(int *)(*(longlong *)(param_3 + 0x18) + 8) * 8);
  dVar8 = (double)FUN_016ed780(param_1,param_4);
  uVar9 = FUN_016ed7d0(param_1,param_4);
  if (*(double *)(param_3 + 200) < 0.0) {
    bVar2 = false;
  }
  else {
    dVar10 = (double)FUN_0040c850(dVar8 - *(double *)(param_3 + 200));
    bVar2 = dVar10 < 1e-20;
  }
  FUN_016eebe0(param_2,param_1 + 0x1b8,1,*(short *)(param_3 + 0x98) + 3,0);
  iVar3 = FUN_0040c840();
  FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x98) + 3,0);
  iVar4 = FUN_0040c840();
  if (bVar2) {
    iVar4 = iVar3;
  }
  if (*(int *)(param_3 + 0xc0) + -1 <= iVar4) {
    *(int *)(param_3 + 0xc0) = *(int *)(param_3 + 0xc0) + 0xaaaa;
    if (*(int *)(param_3 + 0xc4) < *(int *)(param_3 + 0xc0)) {
      local_68 = 0;
      local_70[0] = *(int *)(param_3 + 0xc0);
      FUN_00442f70(local_60,L"Memory limit exceed: laplace function. Number of points: %d",local_70,
                   0);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60[0]);
      FUN_004134c0(uVar5);
    }
    FUN_00409620(param_3 + 0xa8,(longlong)(*(int *)(param_3 + 0xc0) * 8));
    FUN_00409620(param_3 + 0xb0,(longlong)(*(int *)(param_3 + 0xc0) * 8));
    FUN_00409620(param_3 + 0xb8,(longlong)(*(int *)(param_3 + 0xc0) * 8));
  }
  lVar7 = (longlong)iVar4;
  *(undefined8 *)(*(longlong *)(param_3 + 0xa8) + lVar7 * 8) = uVar9;
  *(double *)(*(longlong *)(param_3 + 0xb0) + lVar7 * 8) = dVar11 - dVar1;
  if (!bVar2) {
    uVar9 = FUN_0164ae80(FUN_0164e9e0,dVar8,0x3e45798ee2308c3a,param_1,param_5);
    *(undefined8 *)(*(longlong *)(param_3 + 0xb8) + lVar7 * 8) = uVar9;
  }
  dVar11 = 0.0;
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar6 = iVar4 + 1;
    do {
      dVar11 = dVar11 + *(double *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar3 * 8) *
                        *(double *)(*(longlong *)(param_3 + 0xb8) + (longlong)(iVar4 - iVar3) * 8) *
                        *(double *)(*(longlong *)(param_3 + 0xa8) + (longlong)iVar3 * 8);
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_016eeca0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x98) + 3,(double)(iVar4 + 1),0);
  *(double *)(param_3 + 200) = dVar8;
  FUN_00414480(local_60);
  return dVar11;
}

