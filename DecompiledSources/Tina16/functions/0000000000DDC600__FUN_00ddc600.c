/* Ghidra address: 00ddc600 */
/* Ghidra symbol: FUN_00ddc600 */


undefined2 * FUN_00ddc600(undefined2 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00460b80(param_1);
  uVar1 = FUN_00418700(param_2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = 8;
  return param_1;
}

