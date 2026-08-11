/* Ghidra address: 0060a050 */
/* Ghidra symbol: FUN_0060a050 */


longlong FUN_0060a050(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_006090e0(param_1,param_1);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((param_2 < 0) || (*(int *)(lVar1 + 0x48) <= param_2)) {
    FUN_005ffdf0(PTR_PTR_02004930);
  }
  FUN_0060a3b0(param_1);
  thunk_FUN_03a15344();
  if (0 < *(int *)(lVar1 + 0x68)) {
    param_2 = (*(int *)(lVar1 + 0x68) - param_2) + -1;
  }
  iVar2 = FUN_00600270(*(undefined4 *)(lVar1 + 100),*(undefined2 *)(lVar1 + 0x6e),0x20);
  return *(longlong *)(lVar1 + 0x58) + (longlong)(param_2 * iVar2);
}

