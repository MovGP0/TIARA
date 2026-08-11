/* Ghidra address: 006f3380 */
/* Ghidra symbol: FUN_006f3380 */


void FUN_006f3380(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0065b870(param_1);
  uVar1 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
  thunk_FUN_041b2403(uVar2,0x1024,0,uVar1);
  return;
}

