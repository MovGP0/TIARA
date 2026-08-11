/* Ghidra address: 017e9580 */
/* Ghidra symbol: FUN_017e9580 */


void FUN_017e9580(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_50 [48];
  undefined8 local_20;
  
  local_20 = 0;
  FUN_010d1490(param_3,param_4);
  iVar1 = *(int *)(param_4 + 0x10);
  for (iVar2 = 0; iVar2 <= iVar1 + -1; iVar2 = iVar2 + 1) {
    FUN_013b4bc0(param_3,iVar2,local_50);
    FUN_017e8660(param_1,param_2,local_50);
    FUN_013b4860(param_3,iVar2,local_50);
  }
  FUN_00414480(&local_20);
  return;
}

