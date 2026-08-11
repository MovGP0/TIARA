/* Ghidra address: 00a38fb0 */
/* Ghidra symbol: FUN_00a38fb0 */


void FUN_00a38fb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 local_864 [4];
  byte local_860 [1024];
  undefined8 local_460 [134];
  
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar1 = FUN_00a33f40(param_1);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 100);
  }
  FUN_00a33eb0(param_1,(ulonglong)*(uint *)(param_1 + 0x28) * 3);
  FUN_0040d200(local_864,0x404,0);
  lVar1 = FUN_00a33f40(param_1);
  thunk_FUN_041a3f2d(*(undefined8 *)(lVar1 + 0x38),0,0x100,local_860);
  puVar7 = *(undefined1 **)(param_1 + 8);
  lVar1 = FUN_00a33f40(param_1);
  puVar5 = (undefined8 *)(lVar1 + 0x44);
  puVar6 = local_460;
  for (lVar2 = 0x85; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (-1 < iVar4 + -1) {
    pbVar3 = local_860;
    do {
      *puVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)*pbVar3);
      puVar7[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)pbVar3[1]);
      puVar7[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (ulonglong)pbVar3[2]);
      puVar7 = puVar7 + 3;
      pbVar3 = pbVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00a34420(param_1,param_2);
  return;
}

