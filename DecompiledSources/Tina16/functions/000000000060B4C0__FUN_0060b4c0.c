/* Ghidra address: 0060b4c0 */
/* Ghidra symbol: FUN_0060b4c0 */


void FUN_0060b4c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x138) != 0) {
    thunk_FUN_0418f5de(*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138),0xffffffff)
    ;
  }
  uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x128));
  thunk_FUN_0416f828(uVar1);
  return;
}

