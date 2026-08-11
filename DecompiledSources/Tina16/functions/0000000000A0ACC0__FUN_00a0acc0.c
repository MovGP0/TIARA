/* Ghidra address: 00a0acc0 */
/* Ghidra symbol: FUN_00a0acc0 */


void FUN_00a0acc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 local_418 [1024];
  
  iVar2 = thunk_FUN_041a3f2d(param_2,0,0x100,local_418);
  if (iVar2 != 0) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1,1,iVar2,3);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    *(int *)(param_1 + 0x9c) = iVar2;
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      puVar5 = local_418;
      do {
        lVar1 = *(longlong *)(param_1 + 0xa0);
        lVar6 = (longlong)iVar3;
        *(undefined1 *)(*(longlong *)(lVar1 + 0x10) + lVar6) = *puVar5;
        *(undefined1 *)(*(longlong *)(lVar1 + 8) + lVar6) = puVar5[1];
        *(undefined1 *)(**(longlong **)(param_1 + 0xa0) + lVar6) = puVar5[2];
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

