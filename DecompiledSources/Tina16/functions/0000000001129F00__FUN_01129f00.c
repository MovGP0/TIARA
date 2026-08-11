/* Ghidra address: 01129f00 */
/* Ghidra symbol: FUN_01129f00 */


void FUN_01129f00(undefined8 param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_00410f20(uVar1);
  return;
}

