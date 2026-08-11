/* Ghidra address: 00b05da0 */
/* Ghidra symbol: FUN_00b05da0 */


void FUN_00b05da0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_1[0xaa] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*(longlong *)param_1[0x94] + 0x18))((longlong *)param_1[0x94],local_20,uVar1);
    uVar2 = FUN_0065b870(param_1[0xaa]);
    uVar3 = FUN_00416740(local_20[0]);
    thunk_FUN_0418144e(uVar2,uVar3);
    uVar2 = FUN_0065b870(param_1[0xaa]);
    thunk_FUN_041b2403(uVar2,0xb1,0,0xffffffffffff0000);
  }
  FUN_00414480(local_20);
  return;
}

