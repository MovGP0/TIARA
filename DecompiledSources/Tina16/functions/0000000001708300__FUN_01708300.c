/* Ghidra address: 01708300 */
/* Ghidra symbol: FUN_01708300 */


void FUN_01708300(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_017105e0(0);
    FUN_01716a70(uVar1,*(undefined8 *)(param_1 + 0x30),0);
  }
  else {
    FUN_01716a70(param_2,*(undefined8 *)(param_1 + 0x30),0);
  }
  return;
}

