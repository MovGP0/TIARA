/* Ghidra address: 00a92b40 */
/* Ghidra symbol: FUN_00a92b40 */


void FUN_00a92b40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00a78000(param_1);
  FUN_00a78010(param_1,local_20);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if (((0 < iVar2) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x298), lVar1 != 0)) {
    FUN_00a78010(param_1,&local_28);
    FUN_00a74eb0(lVar1,local_28,param_1);
  }
  FUN_00414560(&local_28,2);
  return;
}

