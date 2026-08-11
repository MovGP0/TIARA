/* Ghidra address: 01bfbc20 */
/* Ghidra symbol: FUN_01bfbc20 */


void FUN_01bfbc20(longlong param_1,char param_2)

{
  longlong lVar1;
  code *local_28;
  longlong local_20;
  
  if (*(char *)(param_1 + 0x4a) != param_2) {
    *(char *)(param_1 + 0x4a) = param_2;
    lVar1 = FUN_01bf9620(param_1);
    if ((*(ushort *)(lVar1 + 0x34) & 1) == 0) {
      local_28 = FUN_01bfb8d0;
      local_20 = param_1;
      FUN_01bfa3f0(param_1,param_1,&local_28);
    }
  }
  return;
}

