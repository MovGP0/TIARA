/* Ghidra address: 01abaf70 */
/* Ghidra symbol: FUN_01abaf70 */


void FUN_01abaf70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0xe8));
  *param_4 = uVar1;
  uVar1 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0xf0),param_3);
  *param_5 = uVar1;
  return;
}

