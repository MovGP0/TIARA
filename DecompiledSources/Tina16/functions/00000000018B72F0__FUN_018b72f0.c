/* Ghidra address: 018b72f0 */
/* Ghidra symbol: FUN_018b72f0 */


void FUN_018b72f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_01803cc0(param_2,&local_28,L"page");
  iVar1 = FUN_0043fc00(local_28);
  FUN_0043f750(&local_20,iVar1 + 1);
  FUN_01803ed0(param_2,L"page",local_20);
  FUN_01803cc0(param_2,&local_38,&DAT_018b7440);
  iVar1 = FUN_0043fc00(local_38);
  FUN_0043f750(&local_30,iVar1 + *(int *)(param_1 + 0x4c));
  FUN_01803ed0(param_2,&DAT_018b7440,local_30);
  iVar1 = FUN_01803a10();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_018039f0(param_2,iVar3);
      FUN_018b72f0(param_1,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,4);
  return;
}

