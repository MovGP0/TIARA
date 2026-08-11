/* Ghidra address: 00f43bc0 */
/* Ghidra symbol: FUN_00f43bc0 */


void FUN_00f43bc0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if ((*(int *)(lVar1 + 0x4a8) == 1) && (0 < *(int *)(lVar1 + 0x4ac))) {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x700),uVar2);
  return;
}

