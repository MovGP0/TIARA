/* Ghidra address: 00f165a0 */
/* Ghidra symbol: FUN_00f165a0 */


void FUN_00f165a0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  short local_2e;
  short local_2c;
  undefined1 local_29;
  
  FUN_00f11cf0(param_1,param_2,param_3);
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01d30f00(param_2,&local_2c,2);
    *(int *)(param_1 + 8) = (int)local_2c;
    FUN_01d30f00(param_2,&local_29,1);
    *(undefined1 *)((longlong)param_1 + 0x9d) = local_29;
    FUN_01d30f00(param_2,&local_29,1);
    *(undefined1 *)((longlong)param_1 + 0x9c) = local_29;
    FUN_01d30f00(param_2,param_1 + 0x13,4);
    FUN_01d312f0(param_2,param_1 + 0x1d);
    FUN_01d30f00(param_2,&local_2e,2);
    lVar3 = FUN_01cedea0(param_1[7],(longlong)local_2e);
    param_1[0x1e] = lVar3;
    FUN_01d30f00(param_2,param_1 + 0x15,8);
    FUN_01d30f00(param_2,param_1 + 0x16,8);
    FUN_01d30f00(param_2,param_1 + 0x17,8);
    FUN_01d30f00(param_2,param_1 + 0x18,8);
    plVar1 = *(longlong **)(param_1[0xf] + 0xd8);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2 + -1);
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x30))(*(longlong **)(lVar3 + 0x70),0);
    lVar5 = FUN_004113f0(uVar4,&DAT_01ccbf00);
    param_1[0x1b] = lVar5;
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x30))(*(longlong **)(lVar3 + 0x78),0);
    lVar3 = FUN_004113f0(uVar4,&DAT_01ccbf00);
    param_1[0x1c] = lVar3;
    if (0x1f < (ushort)param_3) {
      FUN_01d30f00(param_2,param_1 + 0x11,2);
    }
  }
  (**(code **)(*param_1 + 0xe0))(param_1);
  return;
}

