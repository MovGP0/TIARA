/* Ghidra address: 006dbfb0 */
/* Ghidra symbol: FUN_006dbfb0 */


void FUN_006dbfb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x4c8),*(undefined8 *)(param_1 + 0x4c0));
  }
  *(longlong *)(param_1 + 0x4c8) = param_2;
  if (param_2 == 0) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x1208,0,0);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x4c0));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x4c8),param_1);
    uVar1 = FUN_0065b870(param_1);
    uVar2 = FUN_007d56e0(*(undefined8 *)(param_1 + 0x4c8));
    thunk_FUN_041b2403(uVar1,0x1208,0,uVar2);
  }
  FUN_006db1f0(param_1);
  return;
}

