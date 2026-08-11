/* Ghidra address: 0096f0e0 */
/* Ghidra symbol: FUN_0096f0e0 */


void FUN_0096f0e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  *param_5 = 0;
  uVar1 = FUN_00414520(param_5);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
            (*(longlong **)(param_1 + 8),param_2,param_3,param_4,uVar1,param_6);
  return;
}

