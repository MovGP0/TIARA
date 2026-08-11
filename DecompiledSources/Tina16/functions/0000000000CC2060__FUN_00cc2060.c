/* Ghidra address: 00cc2060 */
/* Ghidra symbol: FUN_00cc2060 */


void FUN_00cc2060(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) != param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_00410f20(uVar1);
    *(longlong *)(param_1 + 0xa8) = param_2;
  }
  return;
}

