/* Ghidra address: 00f60a50 */
/* Ghidra symbol: FUN_00f60a50 */


void FUN_00f60a50(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004095c0((longlong)(param_2 << 3));
  *param_1 = uVar1;
  FUN_004b84c0(param_3,*param_1,(longlong)(param_2 << 3));
  return;
}

