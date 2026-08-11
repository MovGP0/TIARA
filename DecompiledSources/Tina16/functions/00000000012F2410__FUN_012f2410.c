/* Ghidra address: 012f2410 */
/* Ghidra symbol: FUN_012f2410 */


longlong FUN_012f2410(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004095c0(8);
  FUN_0040d200(lVar1,8,0);
  *(undefined4 *)(lVar1 + 4) = param_1;
  return lVar1;
}

