/* Ghidra address: 0044c3b0 */
/* Ghidra symbol: FUN_0044c3b0 */


undefined4 FUN_0044c3b0(short *param_1)

{
  longlong lVar1;
  undefined4 local_1c;
  
  local_1c = 0;
  if (((param_1 != (short *)0x0) && (param_1 != (short *)0x0)) && (*param_1 != 0)) {
    lVar1 = 0;
    if (DAT_0200c660 != 0) {
      lVar1 = *(longlong *)(DAT_0200c660 + -8);
    }
    FUN_00419260(&DAT_0200c660,&DAT_0044c2e8,1,lVar1 + 1);
    lVar1 = 0;
    if (DAT_0200c660 != 0) {
      lVar1 = *(longlong *)(DAT_0200c660 + -8);
    }
    FUN_004167d0(DAT_0200c660 + (lVar1 + -1) * 0x20,param_1);
    local_1c = 1;
  }
  return local_1c;
}

