/* Ghidra address: 01ab5fc0 */
/* Ghidra symbol: FUN_01ab5fc0 */


void FUN_01ab5fc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  plVar3 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_2[0x10]);
  plVar4 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,param_2[0xf]);
  uVar2 = FUN_01a90ee0(0xffffff);
  FUN_005fd4e0(param_2[0xf],uVar2);
  lVar1 = param_2[0x10];
  FUN_005fdab0(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x48));
  FUN_005fdcb0(lVar1,0);
  lVar1 = param_2[0xf];
  FUN_005fd640(lVar1,4);
  FUN_005fd4e0(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x48));
  FUN_005fd670(lVar1,0);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb8))(*(longlong **)(param_1 + 0x78),&local_38);
  (**(code **)(*param_2 + 0xf8))(param_2,local_38,local_34,local_30 + 1,local_2c);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))
            ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
  (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar3);
  FUN_00410f20(plVar3);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar4);
  FUN_00410f20(plVar4);
  return;
}

