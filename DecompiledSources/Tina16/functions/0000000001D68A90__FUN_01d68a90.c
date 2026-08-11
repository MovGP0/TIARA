/* Ghidra address: 01d68a90 */
/* Ghidra symbol: FUN_01d68a90 */


void FUN_01d68a90(longlong *param_1,undefined8 param_2,longlong param_3,byte param_4,
                 undefined1 param_5,byte param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 in_RAX;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  uint local_12c;
  undefined1 local_128 [18];
  char local_116;
  undefined1 local_f8 [18];
  char local_e6;
  int local_b4 [5];
  longlong local_a0;
  int local_70 [2];
  undefined1 local_68 [8];
  double local_60 [7];
  
  if (param_4 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 & 0x1f) & 0x42U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    lVar6 = FUN_0082ccd0(&PTR_FUN_00825200,1);
    iVar9 = *(int *)(*param_1 + 0x10);
    local_12c = 0;
    if (-1 < iVar9 + -1) {
      do {
        FUN_00597fe0(lVar6 + 8);
        if (*(uint *)(*param_1 + 0x10) <= local_12c) {
          FUN_00594f90();
        }
        plVar2 = (longlong *)
                 **(undefined8 **)(*(longlong *)(*param_1 + 8) + (longlong)(int)local_12c * 8);
        lVar7 = FUN_01d06f90();
        if (*(uint *)(*param_1 + 0x10) <= local_12c) {
          FUN_00594f90();
        }
        uVar1 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*param_1 + 8) + (longlong)(int)local_12c * 8) + 8);
        dVar13 = 0.0;
        dVar14 = 0.0;
        iVar3 = (**(code **)(*plVar2 + 0x1c8))();
        iVar8 = 0;
        if (-1 < iVar3 + -1) {
          do {
            dVar14 = dVar13;
            if ((lVar7 == 0) ||
               ((FUN_00c3d330(lVar7,local_f8,iVar8), local_e6 != '\b' &&
                (FUN_00c3d330(lVar7,local_128,iVar8), local_116 != '\t')))) {
              iVar4 = (**(code **)(*plVar2 + 0x210))(plVar2,iVar8);
              local_a0 = lVar6 + 8;
              local_70[0] = iVar4;
              iVar5 = FUN_00596920(local_a0,local_70);
              if (iVar5 == -1) {
                local_b4[0] = iVar4;
                FUN_00597de0(lVar6 + 8,local_b4);
                dVar14 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)iVar4 * 8);
                dVar11 = (double)FUN_01d68980(param_3,plVar2,param_4,iVar4);
                dVar14 = dVar13 + dVar14 * dVar11;
              }
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
            dVar13 = dVar14;
          } while (iVar3 != 0);
        }
        if (param_4 == 6) {
          FUN_016e2b00(param_2,param_3,(uint)*(ushort *)(param_1 + 1) + local_12c * 2 + 1,6,dVar14,
                       local_60,local_68,0,0,1);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[1] + (short)local_12c * 2 + 1,
                       local_60[0],0);
        }
        if (param_4 == 1) {
          uVar12 = FUN_0040c850(dVar14);
          FUN_01b08b00(param_3,plVar2,1,param_5,uVar12,uVar1,1);
        }
        if ((param_6 & param_4 == 6) != 0) {
          dVar13 = (double)FUN_01d0e4e0(param_3 + 0x5d8);
          FUN_01b08b00(param_3,plVar2,1,param_5,local_60[0] / dVar13,uVar1,1);
        }
        local_12c = local_12c + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00410f20(lVar6);
  }
  return;
}

