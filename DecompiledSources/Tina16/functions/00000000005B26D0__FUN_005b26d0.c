/* Ghidra address: 005b26d0 */
/* Ghidra symbol: FUN_005b26d0 */


void FUN_005b26d0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_20;
  
  iVar3 = FUN_005b2680(param_1);
  if (-1 < iVar3) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x78);
    iVar1 = *(int *)(lVar2 + 0x10);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar1 <= param_2) {
      param_2 = iVar1 + -1;
    }
    if (param_2 != iVar3) {
      FUN_00599670(lVar2 + 8,iVar3,5);
      local_20 = param_1;
      FUN_00599f70(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x78) + 8,param_2,&local_20);
    }
  }
  return;
}

