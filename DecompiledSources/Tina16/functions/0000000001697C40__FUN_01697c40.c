/* Ghidra address: 01697c40 */
/* Ghidra symbol: FUN_01697c40 */


void FUN_01697c40(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  *(undefined2 *)(param_1 + 0x2d8) = param_2;
  uVar1 = FUN_01697c20(param_1);
  *(undefined2 *)(param_1 + 0x2da) = uVar1;
  return;
}

