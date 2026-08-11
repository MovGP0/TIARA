/* Ghidra address: 01893530 */
/* Ghidra symbol: FUN_01893530 */


void FUN_01893530(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(param_1 + 0xb8));
  FUN_005fce30(local_20,param_2);
  uVar1 = FUN_005fcc70(local_20);
  uVar1 = thunk_FUN_03f3ed25(uVar1,*(undefined4 *)(param_1 + 0x4e0),
                             *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x2c));
  FUN_005fcc80(*(undefined8 *)(param_1 + 0xb8),uVar1);
  FUN_00410f20(local_20);
  return;
}

