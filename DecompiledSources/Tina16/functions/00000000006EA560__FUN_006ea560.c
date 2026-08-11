/* Ghidra address: 006ea560 */
/* Ghidra symbol: FUN_006ea560 */


void FUN_006ea560(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_1b;
  byte local_1a;
  byte local_19;
  
  local_30 = auStack_58;
  local_1b = FUN_006805f0(param_1);
  FUN_00681790(param_1);
  uVar1 = FUN_0060ea30();
  FUN_005fcfa0(param_1[0x17],uVar1);
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0x445,0,0x2c0001);
  uVar3 = FUN_0065b870(param_1);
  iVar2 = FUN_005fbf20((int)param_1[0x19]);
  thunk_FUN_041b2403(uVar3,0x443,0,(longlong)iVar2);
  if (param_1[0xa3] != 0) {
    local_19 = FUN_006eae80(param_1);
    FUN_004b84c0(param_1[0xa3],&local_1a,1);
    FUN_006eae90(param_1,local_1a | local_19);
    uVar3 = FUN_0045adf0();
    (**(code **)(*(longlong *)param_1[0xa2] + 0xf0))((longlong *)param_1[0xa2],param_1[0xa3],uVar3);
    FUN_00410f20(param_1[0xa3]);
    param_1[0xa3] = 0;
    FUN_006eae90(param_1,local_19);
    (**(code **)(*param_1 + 0x290))(param_1,*(undefined4 *)((longlong)param_1 + 0x584));
    (**(code **)(*param_1 + 0x288))(param_1,(int)param_1[0xb0]);
    FUN_006eadd0(param_1,(int)param_1[0xb1]);
  }
  FUN_006806a0(param_1,local_1b);
  return;
}

