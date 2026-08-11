/* Ghidra address: 01cc5240 */
/* Ghidra symbol: FUN_01cc5240 */


void FUN_01cc5240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res10[0] = param_2;
  FUN_01cc4120(param_1,local_res10,8);
  iVar4 = *(int *)(lVar1 + 0x44c);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,*(int *)(lVar1 + 0x450) + iVar3);
      FUN_01cc0a60(lVar2,local_res10[0]);
      *(undefined8 *)(lVar2 + 0x168) = local_res10[0];
      *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

