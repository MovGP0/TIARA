/* Ghidra address: 01d3b940 */
/* Ghidra symbol: FUN_01d3b940 */


void FUN_01d3b940(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  
  local_30 = auStack_58;
  iVar2 = *(int *)(param_1 + 0x10);
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,local_24);
      FUN_01d3b920(auStack_58,uVar1);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

