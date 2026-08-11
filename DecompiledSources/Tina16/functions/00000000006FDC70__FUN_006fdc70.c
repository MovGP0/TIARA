/* Ghidra address: 006fdc70 */
/* Ghidra symbol: FUN_006fdc70 */


void FUN_006fdc70(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int local_48 [2];
  int local_40;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),param_2);
  if (iVar2 != -1) {
    iVar3 = FUN_006fdb70(param_1,iVar2,*(undefined4 *)(param_2 + 0x90),
                         *(undefined4 *)(param_2 + 0x94));
    bVar5 = iVar3 != iVar2;
    bVar1 = false;
    if (bVar5) {
      iVar3 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),param_2);
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
    }
    else {
      lVar4 = FUN_0064fcf0(param_1,0x41d,(longlong)iVar2,local_48);
      if (lVar4 != 0) {
        bVar5 = *(int *)(param_2 + 0x98) != local_40 - local_48[0];
        bVar1 = bVar5;
      }
    }
    if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) ||
       (*(int *)(param_2 + 0x9c) == *(int *)(param_1 + 0x4a8))) {
      if (bVar5) {
        if (bVar1) {
          FUN_006fc420(param_1,iVar2);
        }
        FUN_006fd920(param_1);
        FUN_006fb920(param_1,0);
      }
      else {
        FUN_006fb710(param_1,iVar2);
      }
    }
    else {
      FUN_006fbac0(param_1,*(undefined4 *)(param_2 + 0x9c));
    }
  }
  return;
}

