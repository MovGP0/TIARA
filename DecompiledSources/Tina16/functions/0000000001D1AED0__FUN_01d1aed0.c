/* Ghidra address: 01d1aed0 */
/* Ghidra symbol: FUN_01d1aed0 */


void FUN_01d1aed0(longlong param_1,double param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0.0) {
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x89) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else if (param_2 == 90.0) {
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x89) = 1;
    *(undefined4 *)(param_1 + 0x8c) = 900;
  }
  else {
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x89) = 1;
    uVar1 = FUN_0040c770(param_2 * 10.0);
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
  }
  return;
}

