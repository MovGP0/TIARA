/* Ghidra address: 0069dbb0 */
/* Ghidra symbol: FUN_0069dbb0 */


undefined8 FUN_0069dbb0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_0069d2f0(param_1,1);
    uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    thunk_FUN_041d4988(*(undefined8 *)(param_1 + 0x40),0,FUN_0069db30,
                       *(undefined8 *)(param_1 + 0x10));
  }
  return *(undefined8 *)(param_1 + 0x10);
}

