/* Ghidra address: 010874a0 */
/* Ghidra symbol: FUN_010874a0 */


undefined1 FUN_010874a0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(longlong *)(param_1 + 0x4d20) == 0) ||
     ((*(longlong *)(param_1 + 0x4d20) != 0 &&
      (*(int *)(*(longlong *)(param_1 + 0x4d20) + 0x22c8) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_010b3150(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0x4c94),
                         *(undefined8 *)(param_1 + 0x4cb0));
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0xb55) == '\0')) {
      bVar1 = true;
      goto LAB_01087523;
    }
  }
  bVar1 = false;
LAB_01087523:
  if (bVar1) {
    iVar4 = FUN_01085d60(param_1,*(undefined4 *)(param_1 + 0x4c88),local_20,0);
    if (iVar4 < 1) {
      bVar1 = false;
    }
  }
  if ((bVar1) || (*(char *)(param_1 + 0x6c4) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_00414480(local_20);
  return uVar3;
}

