/* Ghidra address: 01cc4b70 */
/* Ghidra symbol: FUN_01cc4b70 */


void FUN_01cc4b70(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double local_68;
  double local_60 [6];
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar4 = 0;
  iVar5 = param_3;
  if (-1 < param_3 + -1) {
    do {
      lVar3 = FUN_01d347d0(lVar1,*(int *)(lVar1 + 0x450) + iVar4);
      local_60[0] = *(double *)(param_2 + (longlong)(iVar4 * 2) * 8);
      lVar6 = (longlong)(iVar4 * 2 + 1);
      local_68 = *(double *)(param_2 + lVar6 * 8) + *(double *)(lVar3 + 0x188);
      *(double *)(param_2 + lVar6 * 8) = local_68;
      FUN_01cc1510(lVar3,0,local_60[0]);
      if (local_60[0] != 1.0) {
        FUN_01cc1510(lVar3,7,(local_60[0] + 1.0) / (1.0 - local_60[0]));
      }
      if (*(int *)(lVar3 + 0x2c) == 1) {
        *(double *)(lVar3 + 0x178) = local_68;
        FUN_01cc1510(lVar3,1,local_68);
        FUN_00c43ad0(local_60,&local_68);
        FUN_01cc1510(lVar3,2,local_60[0]);
        FUN_01cc1510(lVar3,3,local_68);
      }
      else {
        *(double *)(lVar3 + 0x180) = local_68 - *(double *)(lVar3 + 0x178);
        dVar7 = (double)FUN_0040c850(*(undefined8 *)(lVar3 + 0x180));
        uVar8 = FUN_0040c850(*(double *)(lVar3 + 0x180) + 6.2849306364315805);
        uVar9 = FUN_0040c850(*(double *)(lVar3 + 0x180) - 6.2849306364315805);
        dVar10 = (double)FUN_00b90650(uVar8,uVar9);
        if (dVar10 <= dVar7) {
          iVar2 = FUN_00c42630(*(undefined8 *)(lVar3 + 0x180));
          *(double *)(lVar3 + 0x188) =
               *(double *)(lVar3 + 0x188) - (double)iVar2 * 6.283185307179586;
          iVar2 = FUN_00c42630(*(undefined8 *)(lVar3 + 0x180));
          local_68 = local_68 - (double)iVar2 * 6.283185307179586;
          *(double *)(param_2 + lVar6 * 8) = local_68;
        }
        *(double *)(lVar3 + 0x178) = local_68;
        FUN_01cc1510(lVar3,1,local_68);
        FUN_00c43ad0(local_60,&local_68);
        FUN_01cc1510(lVar3,2,local_60[0]);
        FUN_01cc1510(lVar3,3,local_68);
        uVar8 = FUN_00c43b60(*(undefined8 *)(lVar3 + 0x180),*(undefined8 *)(lVar3 + 0x170));
        FUN_01cc1510(lVar3,4,uVar8);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_01cc4120(param_1,param_2,param_3 << 4);
  return;
}

