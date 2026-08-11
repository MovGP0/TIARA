/* Ghidra address: 00c032f0 */
/* Ghidra symbol: FUN_00c032f0 */


void FUN_00c032f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x648)) {
      FUN_00c0f7b0(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x538)) {
      FUN_00c03380(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x850)) {
      FUN_00c02b00(param_1);
    }
    lVar1 = *(longlong *)(param_1 + 0x5b8);
    if ((lVar1 != 0) && (param_2 == *(longlong *)(lVar1 + 8))) {
      FUN_00bbb340(lVar1,0);
      FUN_00bf37c0(param_1,0xffffffff,0xffffffff);
    }
  }
  return;
}

