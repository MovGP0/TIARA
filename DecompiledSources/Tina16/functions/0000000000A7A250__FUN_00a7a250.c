/* Ghidra address: 00a7a250 */
/* Ghidra symbol: FUN_00a7a250 */


void FUN_00a7a250(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_4d6 [402];
  undefined1 local_344 [402];
  undefined1 local_1b2 [402];
  longlong local_20;
  
  uVar2 = FUN_0069e8a0();
  FUN_0069d6e0(uVar2,local_344,local_1b2,local_4d6,&local_20);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 200);
  if (lVar1 != 0) {
    thunk_FUN_04172795(lVar1);
    thunk_FUN_03d5bf3d(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 200));
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xc0) = 0;
  if (local_20 != 0) {
    uVar2 = FUN_00a7a180(local_20);
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 200) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 200);
    if (lVar1 != 0) {
      uVar2 = thunk_FUN_0416a623(lVar1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xc0) = uVar2;
    }
  }
  if (param_2 == '\x02') {
    thunk_FUN_04162799(local_1b2,local_344,local_4d6,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xc0));
  }
  else {
    thunk_FUN_041ae455(local_1b2,local_344,local_4d6,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xc0));
  }
  return;
}

