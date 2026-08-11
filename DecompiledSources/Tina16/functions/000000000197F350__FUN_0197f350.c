/* Ghidra address: 0197f350 */
/* Ghidra symbol: FUN_0197f350 */


void FUN_0197f350(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 8));
  if (-1 < iVar1) {
    FUN_004ae870(*(undefined8 *)(param_1 + 8),iVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar1);
  }
  return;
}

