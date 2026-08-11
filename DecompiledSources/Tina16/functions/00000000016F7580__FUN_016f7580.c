/* Ghidra address: 016f7580 */
/* Ghidra symbol: FUN_016f7580 */


void FUN_016f7580(longlong param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(DAT_0210ff00 + (longlong)*(int *)(param_1 + 0x9c) * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  if (param_4 == 0.0) {
    *(undefined8 *)(puVar1 + 2) = 0x54b249ad2594c37d;
  }
  else {
    *(double *)(puVar1 + 2) = 1.0 / param_4;
  }
  return;
}

