/* Ghidra address: 00456310 */
/* Ghidra symbol: FUN_00456310 */


undefined8 *
FUN_00456310(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  FUN_004169f0(param_1,param_5);
  uVar1 = FUN_00416740(*param_1);
  FUN_00409a70(param_2 + (longlong)param_4 * 2,uVar1,(longlong)(param_5 * 2));
  return param_1;
}

