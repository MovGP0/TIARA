/* Ghidra address: 010f1f60 */
/* Ghidra symbol: FUN_010f1f60 */


void FUN_010f1f60(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_20;
  
  local_20 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x6e0),iVar4);
      FUN_01cbfd00(uVar2,&local_20);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
      lVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x6e0),iVar4);
      *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + (uint)*(ushort *)(lVar3 + 0x12);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_20);
  return;
}

