/* Ghidra address: 00c86cb0 */
/* Ghidra symbol: FUN_00c86cb0 */


void FUN_00c86cb0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x6f8) = uVar3;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,2,uVar2);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  FUN_00c40440(*(undefined8 *)PTR_DAT_02004440,
               *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4f0));
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),0);
  FUN_00c86f80(param_1,0);
  return;
}

