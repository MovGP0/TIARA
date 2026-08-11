/* Ghidra address: 0097d330 */
/* Ghidra symbol: FUN_0097d330 */


void FUN_0097d330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_004d2d90(lVar1,param_1);
    }
    *(longlong *)(param_1 + 0x78) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
  }
  return;
}

