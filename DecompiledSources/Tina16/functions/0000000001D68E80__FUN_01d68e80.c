/* Ghidra address: 01d68e80 */
/* Ghidra symbol: FUN_01d68e80 */


double FUN_01d68e80(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                   char param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int local_a4 [5];
  longlong local_90;
  int local_60 [12];
  
  dVar11 = 0.0;
  uVar6 = 0;
  plVar5 = (longlong *)0x0;
  while( true ) {
    if ((int)uVar6 < (int)*(uint *)(*param_3 + 0x10)) {
      if (*(uint *)(*param_3 + 0x10) <= uVar6) {
        FUN_00594f90();
      }
      bVar8 = param_6 != **(longlong **)(*(longlong *)(*param_3 + 8) + (longlong)(int)uVar6 * 8);
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) break;
    uVar6 = uVar6 + 1;
  }
  if ((int)uVar6 < (int)*(uint *)(*param_3 + 0x10)) {
    if (*(uint *)(*param_3 + 0x10) <= uVar6) {
      FUN_00594f90();
    }
    plVar5 = (longlong *)**(undefined8 **)(*(longlong *)(*param_3 + 8) + (longlong)(int)uVar6 * 8);
  }
  if (plVar5 != (longlong *)0x0) {
    if (param_5 == '\0') {
      dVar11 = (double)FUN_01d68980(param_1,plVar5,param_4,(undefined4)param_6);
    }
    else if (param_5 == '\x01') {
      dVar10 = 0.0;
      dVar11 = 0.0;
      lVar4 = FUN_0082ccd0(&PTR_FUN_00825200,1);
      iVar1 = (**(code **)(*plVar5 + 0x1c8))();
      iVar7 = 0;
      if (-1 < iVar1 + -1) {
        do {
          iVar2 = (**(code **)(*plVar5 + 0x210))(plVar5,iVar7);
          local_90 = lVar4 + 8;
          local_60[0] = iVar2;
          iVar3 = FUN_00596920(local_90,local_60);
          dVar11 = dVar10;
          if (iVar3 == -1) {
            local_a4[0] = iVar2;
            FUN_00597de0(lVar4 + 8,local_a4);
            dVar11 = *(double *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar2 * 8);
            dVar9 = (double)FUN_01d68980(param_1,plVar5,param_4,iVar2);
            dVar11 = dVar10 + dVar11 * dVar9;
          }
          iVar7 = iVar7 + 1;
          iVar1 = iVar1 + -1;
          dVar10 = dVar11;
        } while (iVar1 != 0);
      }
      FUN_00410f20(lVar4);
    }
  }
  return dVar11;
}

