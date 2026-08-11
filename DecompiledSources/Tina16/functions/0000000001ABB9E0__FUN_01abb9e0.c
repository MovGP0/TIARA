/* Ghidra address: 01abb9e0 */
/* Ghidra symbol: FUN_01abb9e0 */


void FUN_01abb9e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cd62b0(*(undefined8 *)(param_1 + 0xe8));
  *param_4 = uVar1;
  uVar1 = FUN_01cd62b0(*(undefined8 *)(param_1 + 0xf0),param_3);
  *param_5 = uVar1;
  return;
}

