/* Ghidra address: 00c22fb0 */
/* Ghidra symbol: FUN_00c22fb0 */


void FUN_00c22fb0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  }
  if (lVar2 < param_2) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = thunk_FUN_03f3ed25(param_2 + 0x1f,0x20,0x20);
    }
    if (0x100 < iVar1) {
      iVar1 = 0x100;
    }
    FUN_00419260(param_1 + 8,&DAT_00c12750,1,(longlong)iVar1);
  }
  return;
}

