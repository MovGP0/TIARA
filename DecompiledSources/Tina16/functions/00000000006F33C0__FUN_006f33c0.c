/* Ghidra address: 006f33c0 */
/* Ghidra symbol: FUN_006f33c0 */


void FUN_006f33c0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0065b870(param_1);
  uVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
  thunk_FUN_041b2403(uVar1,0x1026,0,uVar2);
  uVar1 = FUN_0065b870(param_1);
  uVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
  thunk_FUN_041b2403(uVar1,0x1001,0,uVar2);
  return;
}

