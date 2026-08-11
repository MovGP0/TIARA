/* Ghidra address: 018cf900 */
/* Ghidra symbol: FUN_018cf900 */


void FUN_018cf900(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 != -1) {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
    FUN_00410f20(uVar1);
  }
  return;
}

