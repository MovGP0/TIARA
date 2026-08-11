/* Ghidra address: 00956720 */
/* Ghidra symbol: FUN_00956720 */


void FUN_00956720(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  uVar1 = FUN_00414520(param_4);
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x58))
            (*(longlong **)(param_1 + 0x130),param_2,param_3,uVar1,param_5);
  return;
}

