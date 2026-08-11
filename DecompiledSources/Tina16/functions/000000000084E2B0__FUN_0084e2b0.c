/* Ghidra address: 0084e2b0 */
/* Ghidra symbol: FUN_0084e2b0 */


longlong FUN_0084e2b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0084bd30(*(undefined8 *)(param_1 + 0x600),param_2);
  if (lVar1 == 0) {
    lVar1 = FUN_0084bff0(&PTR_FUN_0084ad78,1,0x200 < *(int *)(param_1 + 0x4a4));
    FUN_0084bf40(*(undefined8 *)(param_1 + 0x600),param_2,lVar1);
  }
  return lVar1;
}

