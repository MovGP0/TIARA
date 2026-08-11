/* Ghidra address: 016ebe60 */
/* Ghidra symbol: FUN_016ebe60 */


longlong FUN_016ebe60(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,
                     undefined1 param_5)

{
  undefined1 *puVar1;
  longlong unaff_R14;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ebee4,0);
  }
  else {
    unaff_R14 = FUN_016e8fd0(2);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = unaff_R14;
    puVar1 = *(undefined1 **)(unaff_R14 + 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    *(undefined1 *)(unaff_R14 + 0x39) = param_5;
  }
  return unaff_R14;
}

