/* Ghidra address: 0196baa0 */
/* Ghidra symbol: FUN_0196baa0 */


void FUN_0196baa0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0040c770((double)param_1[0x47] * DAT_01fb7da0);
  (**(code **)(*param_1 + 0xd8))(param_1,(double)lVar1);
  lVar1 = FUN_0040c770((double)param_1[0x45] * DAT_01fb7da0);
  (**(code **)(*param_1 + 0xe0))(param_1,(double)lVar1);
  return;
}

