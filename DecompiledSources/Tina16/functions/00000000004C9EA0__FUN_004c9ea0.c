/* Ghidra address: 004c9ea0 */
/* Ghidra symbol: FUN_004c9ea0 */


void FUN_004c9ea0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong local_10;
  
  local_10 = 0;
  uVar1 = FUN_0045ae90();
  FUN_00459ca0(uVar1,&local_10,param_2);
  if (*(char *)(param_1 + 0x1df) == '\0') {
    lVar2 = 0;
    if (local_10 != 0) {
      lVar2 = *(longlong *)(local_10 + -8);
    }
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if (iVar3 < lVar2) {
      *(undefined1 *)(param_1 + 0x1df) = 1;
    }
  }
  FUN_004c9d00(param_1,local_10);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

