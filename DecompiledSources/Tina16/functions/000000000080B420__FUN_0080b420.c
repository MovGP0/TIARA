/* Ghidra address: 0080b420 */
/* Ghidra symbol: FUN_0080b420 */


void FUN_0080b420(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_60 [72];
  
  uVar1 = thunk_FUN_041804fe(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x2d0),local_60);
  uVar2 = FUN_0080bf20(*(undefined8 *)(param_1 + 0x110));
  thunk_FUN_041b9d9f(uVar1,0,0,uVar2);
  thunk_FUN_0416269d(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x2d0),local_60);
  return;
}

