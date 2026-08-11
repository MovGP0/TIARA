/* Ghidra address: 018329c0 */
/* Ghidra symbol: FUN_018329c0 */


void FUN_018329c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01831b90(&PTR_FUN_0182da68,1,param_2);
  FUN_00414ad0(lVar1 + 0x38,*(undefined8 *)(param_1 + 0x38));
  FUN_01832050(param_1,lVar1);
  return;
}

