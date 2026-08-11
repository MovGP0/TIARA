/* Ghidra address: 01b1e7a0 */
/* Ghidra symbol: FUN_01b1e7a0 */


void FUN_01b1e7a0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 local_res10 [3];
  undefined1 local_808 [2048];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(longlong *)PTR_DAT_02004e40 != 0) &&
     (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27c8) != 0)) {
    FUN_00442620(local_808,local_res10[0]);
    uVar1 = thunk_FUN_041e8323(local_808);
    thunk_FUN_0413e052(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27c8),0x402,uVar1,0xfefe);
  }
  FUN_00414480(local_res10);
  return;
}

