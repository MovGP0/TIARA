/* Ghidra address: 007de060 */
/* Ghidra symbol: FUN_007de060 */


undefined8 FUN_007de060(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x158) == 0) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 8),&PTR_FUN_007dba80);
    if (cVar1 == '\0') {
      uVar2 = thunk_FUN_041da06f();
      *(undefined8 *)(param_1 + 0x158) = uVar2;
    }
    else {
      uVar2 = thunk_FUN_03dc3b8d();
      *(undefined8 *)(param_1 + 0x158) = uVar2;
    }
    if (*(longlong *)(param_1 + 0x158) == 0) {
      FUN_007dc5c0(PTR_PTR_02001b38);
    }
    FUN_007ddc50(param_1);
  }
  return *(undefined8 *)(param_1 + 0x158);
}

