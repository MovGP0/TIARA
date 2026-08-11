/* Ghidra address: 0083e5c0 */
/* Ghidra symbol: FUN_0083e5c0 */


void FUN_0083e5c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_04015890(uVar1,0);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03a2fc9d(uVar1,0,0xffffffff);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar1,local_28);
  uVar1 = FUN_0065b870(param_1);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x508));
  thunk_FUN_0411b3be(uVar1,uVar2,local_28,2);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x508));
  thunk_FUN_04015890(uVar1,local_28);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x508));
  thunk_FUN_03a2fc9d(uVar1,local_28,0);
  return;
}

