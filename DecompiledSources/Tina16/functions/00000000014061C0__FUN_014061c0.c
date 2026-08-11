/* Ghidra address: 014061c0 */
/* Ghidra symbol: FUN_014061c0 */


void FUN_014061c0(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40 [3];
  
  local_48 = 0;
  local_40[0] = 0;
  DAT_021084b1 = DAT_021084b1 == '\0';
  if ((bool)DAT_021084b1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),local_40);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_40[0]);
    lVar2 = *(longlong *)(param_1 + 0x7a8);
    iVar5 = *(int *)(lVar2 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_01d3c210(lVar2,iVar4);
        dVar1 = *(double *)(lVar3 + 0x10);
        lVar3 = FUN_01d3c210(lVar2,iVar4);
        *(double *)(lVar3 + 0x10) = (dVar1 / 3.141592653589793) * 180.0;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d8));
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_48);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_48);
    lVar2 = *(longlong *)(param_1 + 0x7a8);
    iVar5 = *(int *)(lVar2 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_01d3c210(lVar2,iVar4);
        dVar1 = *(double *)(lVar3 + 0x10);
        lVar3 = FUN_01d3c210(lVar2,iVar4);
        *(double *)(lVar3 + 0x10) = (dVar1 / 180.0) * 3.141592653589793;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d8));
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
  }
  FUN_00414560(&local_48,2);
  return;
}

