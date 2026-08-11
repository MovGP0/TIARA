/* Ghidra address: 01822070 */
/* Ghidra symbol: FUN_01822070 */


char FUN_01822070(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_29;
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x50));
  FUN_00416dc0(&local_20,*(undefined8 *)(param_1 + 0xa8),uVar1,uVar2);
  iVar3 = FUN_00416db0(local_20,*(undefined8 *)(param_1 + 0x50));
  if (iVar3 == 0) {
    iVar3 = FUN_00414cb0(local_20);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar3;
    local_29 = FUN_01821fe0(param_1);
  }
  else {
    local_29 = FUN_01821f50(param_1);
  }
  if (local_29 == '\0') {
    *(undefined4 *)(param_1 + 0x84) = uVar1;
  }
  FUN_00414480(&local_20);
  return local_29;
}

