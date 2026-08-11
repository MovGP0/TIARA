/* Ghidra address: 011390a0 */
/* Ghidra symbol: FUN_011390a0 */


void FUN_011390a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa80) == param_2) {
    uVar1 = FUN_0065b870(param_1);
    *(undefined8 *)(param_1 + 0xa80) = uVar1;
  }
  *(undefined1 *)(param_1 + 0xa8a) = 0;
  return;
}

