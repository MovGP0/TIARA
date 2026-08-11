/* Ghidra address: 01ade9a0 */
/* Ghidra symbol: FUN_01ade9a0 */


longlong FUN_01ade9a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_1 + 600);
  FUN_01cd9880(lVar1,param_2);
  *(longlong *)(param_2 + 0x100) = lVar1;
  FUN_01cd98a0(lVar1,param_3);
  *(longlong *)(param_3 + 0x100) = lVar1;
  return lVar1;
}

