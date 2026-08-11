/* Ghidra address: 008e66d0 */
/* Ghidra symbol: FUN_008e66d0 */


void FUN_008e66d0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0044d490(&PTR_FUN_008d33d0,1,param_1);
  *(undefined4 *)(lVar1 + 0x30) = param_2;
  FUN_004134c0(lVar1);
  return;
}

