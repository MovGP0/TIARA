/* Ghidra address: 016acb30 */
/* Ghidra symbol: FUN_016acb30 */


void FUN_016acb30(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6930(&PTR_FUN_016ac370,1);
  *param_2 = lVar1;
  FUN_004b67b0(*param_2,1);
  *(undefined1 *)(*param_2 + 0x49) = 1;
  *(undefined1 *)(*param_2 + 0x78) = 1;
  return;
}

