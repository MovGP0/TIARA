/* Ghidra address: 0184a5d0 */
/* Ghidra symbol: FUN_0184a5d0 */


void FUN_0184a5d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_01849db0(&PTR_FUN_01845838,1,param_2,param_3);
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
  FUN_01847420(*(undefined8 *)(param_1 + 0xa0),lVar1);
  return;
}

