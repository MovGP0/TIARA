/* Ghidra address: 01c28640 */
/* Ghidra symbol: FUN_01c28640 */


void FUN_01c28640(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_01c27400();
  FUN_00414ad0(*(longlong *)(lVar1 + 0x18) + (longlong)param_3 * 0x10,param_4);
  return;
}

