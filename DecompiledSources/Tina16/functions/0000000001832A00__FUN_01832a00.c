/* Ghidra address: 01832a00 */
/* Ghidra symbol: FUN_01832a00 */


void FUN_01832a00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01831d70(&PTR_FUN_0182dc88,1,param_2);
  FUN_00414ad0(lVar1 + 0x38,*(undefined8 *)(param_1 + 0x38));
  FUN_01832050(param_1,lVar1);
  return;
}

