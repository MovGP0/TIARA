/* Ghidra address: 00409900 */
/* Ghidra symbol: FUN_00409900 */


void FUN_00409900(void)

{
  longlong lVar1;
  undefined8 unaff_retaddr;
  
  lVar1 = FUN_0041f930();
  if (*(int *)(lVar1 + 0x210) != 0) {
    FUN_00409880(0,unaff_retaddr);
  }
  return;
}

