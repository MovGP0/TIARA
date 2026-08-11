/* Ghidra address: 018ad460 */
/* Ghidra symbol: FUN_018ad460 */


void FUN_018ad460(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x80);
  *(undefined8 *)(param_1 + 0x870) = *(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x88);
  lVar1 = *(longlong *)(param_1 + 0x760);
  *(longlong *)(lVar1 + 0x88) = param_1;
  *(code **)(lVar1 + 0x80) = FUN_018b0190;
  plVar2 = (longlong *)FUN_018a7670(&PTR_FUN_0189f228,1,param_1);
  *(longlong **)(param_1 + 0x848) = plVar2;
  (**(code **)(*plVar2 + 0x130))(plVar2,param_1);
  FUN_0064c650(*(undefined8 *)(param_1 + 0x848),5);
  FUN_018a9aa0(*(undefined8 *)(param_1 + 0x848),0);
  FUN_0065d610(*(undefined8 *)(param_1 + 0x848),0);
  lVar1 = *(longlong *)(param_1 + 0x848);
  *(longlong *)(lVar1 + 0x4f8) = param_1;
  *(code **)(lVar1 + 0x4f0) = FUN_018af6d0;
  *(longlong *)(lVar1 + 0x210) = param_1;
  *(code **)(lVar1 + 0x208) = FUN_018b0240;
  lVar1 = *(longlong *)(param_1 + 0x718);
  *(longlong *)(lVar1 + 0x400) = param_1;
  *(code **)(lVar1 + 0x3f8) = FUN_018af5b0;
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x848));
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x748));
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x748));
  uVar5 = FUN_00429990(uVar4,0xfffffff0);
  FUN_00429fc0(uVar3,0xfffffff0,uVar5 | 0x2000);
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x230))(*(longlong **)(param_1 + 0x788),0);
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x230))(*(longlong **)(param_1 + 0x708),0);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x230))(*(longlong **)(param_1 + 0x740),0);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x148))(*(longlong **)(param_1 + 0x6d8),5);
  *(undefined1 *)(param_1 + 0x852) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  return;
}

