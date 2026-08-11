/* Ghidra address: 01d39ea0 */
/* Ghidra symbol: FUN_01d39ea0 */


undefined1 FUN_01d39ea0(undefined4 param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01d3a780(DAT_03567a70,param_1);
  lVar1 = FUN_01d3a410(DAT_03567aa8,*(short *)(lVar1 + 0x9e) + (ushort)param_2);
  return *(undefined1 *)(lVar1 + 0x3a);
}

