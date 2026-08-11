/* Ghidra address: 004d3e50 */
/* Ghidra symbol: FUN_004d3e50 */


void FUN_004d3e50(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_78 [2];
  longlong local_68;
  longlong local_30 [2];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    local_68 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20) + 8;
    local_30[0] = param_1;
    iVar3 = FUN_00596a10(local_68,local_30);
    if (-1 < iVar3) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
      iVar1 = *(int *)(lVar2 + 0x10);
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (param_2 != iVar3) {
        FUN_00599670(lVar2 + 8,iVar3,5);
        local_78[0] = param_1;
        FUN_00599f70(*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) + 8,param_2,local_78);
      }
    }
  }
  return;
}

