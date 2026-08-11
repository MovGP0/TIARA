/* Ghidra address: 004da3b0 */
/* Ghidra symbol: FUN_004da3b0 */


void FUN_004da3b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_3,param_4,param_5);
  *param_6 = uVar1;
  return;
}

