/* Ghidra address: 006ebb10 */
/* Ghidra symbol: FUN_006ebb10 */


void FUN_006ebb10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_30 [4];
  undefined4 local_2c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  FUN_00655080(param_1);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_006ec230(param_1,*(longlong *)(param_1 + 0x498));
    uVar2 = FUN_0065b870(param_1);
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x498));
    thunk_FUN_041b2403(uVar2,0x469,uVar3,0);
  }
  FUN_0064cbf0(param_1,uVar1);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0x46f,(longlong)*(int *)(param_1 + 0x4a0),
                     (longlong)*(int *)(param_1 + 0x4a4));
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0x471,0,(longlong)*(int *)(param_1 + 0x4b4));
  uVar2 = FUN_0065b870(param_1);
  FUN_004701b0(uVar2,0x46c,1,local_30,0);
  local_2c = *(undefined4 *)(param_1 + 0x4a8);
  uVar2 = FUN_0065b870(param_1);
  FUN_004701a0(uVar2,0x46b,1,local_30);
  return;
}

