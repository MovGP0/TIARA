/* Ghidra address: 00663fc0 */
/* Ghidra symbol: FUN_00663fc0 */


void FUN_00663fc0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *local_28;
  undefined8 local_20;
  
  cVar1 = FUN_006604f0(param_2);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_2 + 0x44) = 0;
  }
  else {
    iVar2 = FUN_00660670(param_2);
    *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x40) - iVar2;
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    cVar1 = FUN_00660620(*(longlong *)(param_2 + 0x28));
    if (cVar1 == '\0') {
      FUN_00663fc0(param_1,*(undefined8 *)(param_2 + 0x28));
    }
  }
  lVar3 = FUN_00660e40(param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_00660e40(param_2);
    FUN_00660d40(uVar4,*(undefined4 *)(param_2 + 0x40));
  }
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_28 = FUN_00663cb0;
  FUN_006612d0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x28),&local_28);
  return;
}

