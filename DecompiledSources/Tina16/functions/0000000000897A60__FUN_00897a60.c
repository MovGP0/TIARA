/* Ghidra address: 00897a60 */
/* Ghidra symbol: FUN_00897a60 */


ulonglong FUN_00897a60(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  
  lVar1 = (**(code **)(*param_1 + 0x1a8))
                    (param_1,*(undefined4 *)(PTR_DAT_02003dc0 + (param_2 & 0xff) * 4),1,0,0);
  if (lVar1 != -1) {
    (**(code **)(*param_1 + 0x148))(param_1,lVar1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar1 != -1) & 0xffffffff;
}

