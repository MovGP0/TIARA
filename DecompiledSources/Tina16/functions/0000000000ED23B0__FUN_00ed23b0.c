/* Ghidra address: 00ed23b0 */
/* Ghidra symbol: FUN_00ed23b0 */


void FUN_00ed23b0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar2 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x930) = uVar2;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x918) = uVar2;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x920) = uVar2;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x928) = uVar2;
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x318));
  (**(code **)(**(longlong **)(param_1 + 0x918) + 0x10))(*(longlong **)(param_1 + 0x918),uVar2);
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x318));
  (**(code **)(**(longlong **)(param_1 + 0x920) + 0x10))(*(longlong **)(param_1 + 0x920),uVar2);
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x318));
  (**(code **)(**(longlong **)(param_1 + 0x928) + 0x10))(*(longlong **)(param_1 + 0x928),uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x918) + 0x80))(*(longlong **)(param_1 + 0x918),1);
  (**(code **)(**(longlong **)(param_1 + 0x920) + 0x80))(*(longlong **)(param_1 + 0x920),1);
  (**(code **)(**(longlong **)(param_1 + 0x928) + 0x80))(*(longlong **)(param_1 + 0x928),1);
  FUN_00eadf00(*(undefined8 *)(*(longlong *)(param_1 + 0x858) + 0x4f0),0);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x890) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x898) = uVar2;
  FUN_00ed5150(param_1,param_2);
  FUN_0064cf60(param_1,0x484);
  uVar2 = *(undefined8 *)(param_1 + 0x710);
  uVar1 = FUN_0068bbb0(uVar2);
  uVar1 = thunk_FUN_03f3ed25(uVar1,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0068bc30(uVar2,uVar1);
  return;
}

