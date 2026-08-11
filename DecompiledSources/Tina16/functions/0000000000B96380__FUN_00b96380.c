/* Ghidra address: 00b96380 */
/* Ghidra symbol: FUN_00b96380 */


void FUN_00b96380(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_70 [12];
  undefined8 local_64;
  undefined8 uStack_5c;
  
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    FUN_00657db0(param_1);
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041804fe(uVar1,local_70);
    *(undefined8 *)(param_1 + 0x500) = local_64;
    *(undefined8 *)(param_1 + 0x508) = uStack_5c;
    (**(code **)(param_1 + 0x4c0))(*(undefined8 *)(param_1 + 0x4c8),param_1);
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_0416269d(uVar1,local_70);
  }
  return;
}

