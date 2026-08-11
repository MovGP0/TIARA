/* Ghidra address: 008490a0 */
/* Ghidra symbol: FUN_008490a0 */


void FUN_008490a0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = *(int *)(param_1 + 0x518);
  if ((iVar1 != -1) && (*(int *)(param_1 + 0x51c) != -1)) {
    FUN_00835150(*(undefined8 *)(param_1 + 0x510),&local_20);
    pcVar2 = (code *)FUN_00411550(param_1,0xffa6);
    (*pcVar2)(param_1,iVar1,*(undefined4 *)(param_1 + 0x51c),local_20);
  }
  FUN_00414480(&local_20);
  return;
}

