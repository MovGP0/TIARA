/* Ghidra address: 017c3460 */
/* Ghidra symbol: FUN_017c3460 */


void FUN_017c3460(longlong param_1,undefined4 param_2,short param_3,short param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_017c2c60(*(undefined8 *)(param_1 + 0x50),param_2);
  if (param_3 == param_4) {
    uVar1 = *(undefined2 *)(param_1 + 0x60);
  }
  FUN_017c2cc0(*(undefined8 *)(param_1 + 0x50),param_2,uVar1);
  return;
}

