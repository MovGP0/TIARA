/* Ghidra address: 006f60a0 */
/* Ghidra symbol: FUN_006f60a0 */


longlong FUN_006f60a0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if (iVar1 == 1) {
    lVar2 = param_1[0x9a];
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

