/* Ghidra address: 00aa8970 */
/* Ghidra symbol: FUN_00aa8970 */


void FUN_00aa8970(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  
  local_40 = auStack_68;
  local_24 = *(int *)(param_2 + 0x10);
  local_28 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  local_2c = local_28;
  if (local_24 < local_28) {
    local_2c = local_24;
  }
  local_1c = 0;
  iVar3 = local_2c;
  if (-1 < local_2c + -1) {
    do {
      uVar1 = FUN_00ac5690(*(undefined8 *)(param_1 + 0x1b8),local_1c);
      uVar2 = FUN_00ac56a0(param_2,local_1c);
      FUN_00a98db0(uVar1,uVar2);
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

