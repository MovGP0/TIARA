/* Ghidra address: 015ad900 */
/* Ghidra symbol: FUN_015ad900 */


void FUN_015ad900(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0044d490(&PTR_FUN_015ac098,1,param_2);
  *(undefined4 *)(lVar1 + 0x30) = param_1;
  FUN_004134c0(lVar1);
  return;
}

