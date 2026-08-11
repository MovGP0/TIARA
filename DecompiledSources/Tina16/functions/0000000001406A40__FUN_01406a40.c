/* Ghidra address: 01406a40 */
/* Ghidra symbol: FUN_01406a40 */


void FUN_01406a40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [6];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) && (DAT_021084c0 == '\0')) {
    DAT_021084b0 = 1;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),local_60);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),0,0,local_60[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_68);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),1,0,local_68);
    if (DAT_021084c1 == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x7a8);
      iVar6 = *(int *)(lVar3 + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          dVar9 = *(double *)(lVar4 + 8);
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          dVar10 = *(double *)(lVar4 + 0x10);
          if (DAT_021084b1 != '\0') {
            dVar10 = (dVar10 / 180.0) * 3.141592653589793;
          }
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          dVar7 = (double)FUN_0040bcd0(dVar10);
          *(double *)(lVar4 + 8) = dVar9 * dVar7;
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          dVar10 = (double)FUN_0040bdd0(dVar10);
          *(double *)(lVar4 + 0x10) = dVar9 * dVar10;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d8));
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
    DAT_021084b1 = '\0';
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 1) && (DAT_021084c0 == '\0')) {
    DAT_021084b0 = 0;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_70);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),1);
    if (DAT_021084c1 == '\0') {
      DAT_021084b1 = '\x01';
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),&local_78);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),0,0,local_78);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_80);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),1,0,local_80);
    DAT_021084b2 = *(int *)(*(longlong *)(param_1 + 0x7a8) + 0x10) == 0;
    if (DAT_021084c1 == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x7a8);
      iVar6 = *(int *)(lVar3 + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          uVar1 = *(undefined8 *)(lVar4 + 8);
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          uVar2 = *(undefined8 *)(lVar4 + 0x10);
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          FUN_00c44460(local_90,uVar1,uVar2);
          uVar8 = FUN_00c44590(local_90);
          *(undefined8 *)(lVar4 + 8) = uVar8;
          lVar4 = FUN_01d3c210(lVar3,iVar5);
          FUN_00c44460(local_90,uVar1,uVar2);
          dVar9 = (double)FUN_00c445d0(local_90);
          *(double *)(lVar4 + 0x10) = (dVar9 * 180.0) / 3.141592653589793;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d8));
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
  }
  if (DAT_021084c0 != '\0') {
    DAT_021084c0 = '\0';
  }
  FUN_00414560(&local_80,5);
  return;
}

