/* Ghidra address: 00a35310 */
/* Ghidra symbol: FUN_00a35310 */


void FUN_00a35310(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_41c [4];
  undefined1 local_418 [1024];
  
  FUN_0040d200(local_41c,0x404,0);
  iVar1 = thunk_FUN_041a3f2d(param_2,0,0x100,local_418);
  *(int *)(param_1 + 100) = iVar1;
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    puVar3 = local_418 + 2;
    do {
      lVar4 = (longlong)iVar2;
      *(undefined1 *)(param_1 + 0x6c + lVar4 * 4) = *puVar3;
      *(undefined1 *)(param_1 + 0x6e + lVar4 * 4) = puVar3[-2];
      *(undefined1 *)(param_1 + 0x6d + lVar4 * 4) = puVar3[-1];
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

