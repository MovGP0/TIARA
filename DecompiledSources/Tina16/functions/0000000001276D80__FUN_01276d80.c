/* Ghidra address: 01276d80 */
/* Ghidra symbol: FUN_01276d80 */


void FUN_01276d80(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_004b6dc0(param_2,0);
  uVar1 = (**(code **)*param_2)(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,param_3,uVar1);
  return;
}

