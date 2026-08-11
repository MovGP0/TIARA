/* Ghidra address: 01be8c50 */
/* Ghidra symbol: FUN_01be8c50 */


void FUN_01be8c50(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar1 = FUN_01c00f30(param_1,*(undefined8 *)(param_1 + 0x678));
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar1 + 800);
    }
  }
  return;
}

