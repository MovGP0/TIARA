/* Ghidra address: 01051910 */
/* Ghidra symbol: FUN_01051910 */


void FUN_01051910(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x8e8) = 1;
  *(undefined8 *)(param_1 + 0x970) = param_2;
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_28,PTR_PTR_020017f8);
  FUN_00b8e650(uVar1,local_20,L"HDLStrings.sFlowChartCaption",local_28);
  FUN_00416ba0(param_1 + 0x8e0,local_20[0],L"  -  < %s > - %s");
  FUN_0104e1f0(param_1,0);
  FUN_006d68c0(*(undefined8 *)(param_1 + 0x768),0);
  FUN_01051600(param_1);
  *(undefined4 *)(param_1 + 0x918) = 0;
  *(undefined4 *)(param_1 + 0x91c) = 2;
  *(undefined8 *)(param_1 + 0x9b8) = 0x412e848000000000;
  FUN_00414ad0(param_1 + 0x9b0,L"PIC16F73");
  *(undefined4 *)(param_1 + 0x9a0) = 1;
  FUN_010504b0(param_1,*(undefined4 *)(param_1 + 0x918),*(undefined4 *)(param_1 + 0x91c));
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x858),0);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x770),0);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x870),1);
  FUN_01051360(param_1);
  uVar1 = FUN_00442620(&DAT_0202f42c,*(undefined8 *)(param_1 + 0x9b0));
  _CreateSimulatorObject(*(undefined8 *)(param_1 + 0x970),*(undefined4 *)(param_1 + 0x9a0),uVar1);
  FUN_01053210(param_1);
  FUN_00414560(&local_28,2);
  return;
}

