/* Ghidra address: 00ec62e0 */
/* Ghidra symbol: FUN_00ec62e0 */


void FUN_00ec62e0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar2 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x8e0) = uVar2;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x8c8) = uVar2;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x8d0) = uVar2;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x8d8) = uVar2;
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x768) + 0x318));
  (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x10))(*(longlong **)(param_1 + 0x8c8),uVar2);
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x770) + 0x318));
  (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x10))(*(longlong **)(param_1 + 0x8d0),uVar2);
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x7c0) + 0x318));
  (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x10))(*(longlong **)(param_1 + 0x8d8),uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x80))(*(longlong **)(param_1 + 0x8c8),1);
  (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x80))(*(longlong **)(param_1 + 0x8d0),1);
  (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x80))(*(longlong **)(param_1 + 0x8d8),1);
  FUN_00eadf00(*(undefined8 *)(*(longlong *)(param_1 + 0x818) + 0x4f0),0);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x858) = uVar2;
  FUN_00ec80c0(param_1,param_2);
  FUN_0064cf60(param_1,0x484);
  uVar2 = *(undefined8 *)(param_1 + 0x7a8);
  uVar1 = FUN_0068bbb0(uVar2);
  uVar1 = thunk_FUN_03f3ed25(uVar1,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0068bc30(uVar2,uVar1);
  return;
}

