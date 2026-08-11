/* Ghidra address: 01626370 */
/* Ghidra symbol: FUN_01626370 */


void FUN_01626370(int *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_2 = *(undefined8 *)(param_1 + 10);
  }
  return;
}

