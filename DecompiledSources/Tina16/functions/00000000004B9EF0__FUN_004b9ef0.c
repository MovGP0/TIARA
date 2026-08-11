/* Ghidra address: 004b9ef0 */
/* Ghidra symbol: FUN_004b9ef0 */


void FUN_004b9ef0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_004b6dc0(param_2,0);
  lVar1 = (**(code **)*param_2)(param_2);
  (**(code **)(*param_1 + 0x10))(param_1,lVar1);
  if (lVar1 != 0) {
    FUN_004b84c0(param_2,param_1[1],lVar1);
  }
  return;
}

