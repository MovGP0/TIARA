/* Ghidra address: 0194e0f0 */
/* Ghidra symbol: FUN_0194e0f0 */


void FUN_0194e0f0(void)

{
  int iVar1;
  longlong *plVar2;
  
  while( true ) {
    iVar1 = FUN_00654c00(DAT_02110738);
    if (iVar1 < 1) break;
    plVar2 = (longlong *)FUN_00654bc0(DAT_02110738,0);
    (**(code **)(*plVar2 + 0x130))(plVar2);
  }
  return;
}

