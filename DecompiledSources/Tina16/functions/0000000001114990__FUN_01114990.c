/* Ghidra address: 01114990 */
/* Ghidra symbol: FUN_01114990 */


void FUN_01114990(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c08890(param_1);
  iVar2 = FUN_00c089b0(param_1);
  if (*(longlong *)(param_2 + 8) != 0) {
    **(uint **)(param_2 + 8) = uVar1;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    **(int **)(param_2 + 0x10) = iVar2;
  }
  *(ulonglong *)(param_2 + 0x18) = (ulonglong)(uVar1 & 0xffff | iVar2 << 0x10);
  return;
}

