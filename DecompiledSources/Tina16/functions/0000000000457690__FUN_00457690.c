/* Ghidra address: 00457690 */
/* Ghidra symbol: FUN_00457690 */


undefined8 * FUN_00457690(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  FUN_00419260(param_2,&DAT_004065c0,1,(longlong)param_4);
  lVar1 = FUN_00416740(*param_1);
  FUN_00409a70(lVar1 + (longlong)param_3 * 2,*param_2,(longlong)(param_4 * 2));
  return param_2;
}

