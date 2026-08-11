/* Ghidra address: 015656c0 */
/* Ghidra symbol: FUN_015656c0 */


void FUN_015656c0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c8 [120];
  longlong local_50;
  longlong local_48;
  uint local_40;
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  
  FUN_01565450(auStack_c8);
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      local_28 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar3);
      local_30 = *(undefined8 *)(local_28 + 8);
      local_38 = *(longlong *)(*(longlong *)(local_28 + 0x88) + 0x10);
      local_3c = *(int *)(local_28 + 0x14);
      uVar2 = FUN_01d03160(local_30);
      local_40 = (uint)uVar2;
      cVar1 = FUN_01d3f210(local_38);
      if (cVar1 != '\0') {
        local_50 = *(longlong *)(local_38 + 0x1a8);
        if (*(longlong *)(local_50 + 0x148) != 0) {
          *(undefined4 *)(local_50 + 0x168) = 0;
        }
        local_48 = local_50;
        if (*(int *)(local_50 + 0x158) == local_3c) {
          *(undefined4 *)(local_50 + 0x168) = 0;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_28 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar3);
      local_30 = *(undefined8 *)(local_28 + 8);
      local_38 = *(longlong *)(*(longlong *)(local_28 + 0x88) + 0x10);
      local_3c = *(int *)(local_28 + 0x14);
      uVar2 = FUN_01d03160(local_30);
      local_40 = (uint)uVar2;
      cVar1 = FUN_01d3f210(local_38);
      if (((cVar1 != '\0') &&
          (local_50 = *(longlong *)(local_38 + 0x1a8), local_48 = local_50,
          *(int *)(local_50 + 0x168) == 0)) && (*(int *)(local_50 + 0x16c) == 0)) {
        FUN_01565560(auStack_c8,local_38);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

