/* Ghidra address: 01708bc0 */
/* Ghidra symbol: FUN_01708bc0 */


void FUN_01708bc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_017105e0(0);
    FUN_01716a70(uVar1,*(undefined8 *)(param_1 + 0x30),3);
  }
  else {
    FUN_01716a70(param_2,*(undefined8 *)(param_1 + 0x30),3);
  }
  return;
}

