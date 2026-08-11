/* Ghidra address: 00a104d0 */
/* Ghidra symbol: FUN_00a104d0 */


void FUN_00a104d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = param_1[0x4a];
  if ((((*(int *)((longlong)param_1 + 0x20c) != 0) || ((int)param_1[0x42] != 0x3f)) ||
      (*(int *)((longlong)param_1 + 0x214) != 0)) || ((int)param_1[0x43] != 0)) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7a;
    (**(code **)(lVar3 + 8))(param_1);
  }
  if (0 < (int)param_1[0x36]) {
    lVar3 = 0;
    do {
      lVar5 = (longlong)*(int *)(param_1[lVar3 + 0x37] + 0x14);
      iVar1 = *(int *)(param_1[lVar3 + 0x37] + 0x18);
      FUN_00a0fd40(param_1,1,lVar5,lVar2 + 0x38 + lVar5 * 8);
      FUN_00a0fd40(param_1,0,iVar1,lVar2 + 0x58 + (longlong)iVar1 * 8);
      *(undefined4 *)(lVar2 + 0x20 + lVar3 * 4) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x36]);
  }
  if (0 < (int)param_1[0x3c]) {
    lVar3 = 0;
    do {
      lVar5 = param_1[(longlong)*(int *)((longlong)param_1 + lVar3 * 4 + 0x1e4) + 0x37];
      *(undefined8 *)(lVar2 + 0x78 + lVar3 * 8) =
           *(undefined8 *)(lVar2 + 0x38 + (longlong)*(int *)(lVar5 + 0x14) * 8);
      *(undefined8 *)(lVar2 + 200 + lVar3 * 8) =
           *(undefined8 *)(lVar2 + 0x58 + (longlong)*(int *)(lVar5 + 0x18) * 8);
      if (*(int *)(lVar5 + 0x30) == 0) {
        *(undefined4 *)(lVar2 + 0x140 + lVar3 * 4) = 0;
        uVar4 = 0;
        lVar5 = lVar2 + 0x118;
      }
      else {
        *(undefined4 *)(lVar2 + 0x118 + lVar3 * 4) = 1;
        uVar4 = (uint)(1 < *(int *)(lVar5 + 0x24));
        lVar5 = lVar2 + 0x140;
      }
      *(uint *)(lVar5 + lVar3 * 4) = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x3c]);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(int *)(lVar2 + 0x30) = (int)param_1[0x2e];
  return;
}

