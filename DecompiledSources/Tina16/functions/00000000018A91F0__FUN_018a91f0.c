/* Ghidra address: 018a91f0 */
/* Ghidra symbol: FUN_018a91f0 */


void FUN_018a91f0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  lVar2 = FUN_018b0ad0(param_1[0xaf],0);
  (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x140))(*(longlong **)(lVar2 + 0x38),uVar1);
  FUN_004b6dc0(uVar1,0);
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  plVar3 = (longlong *)FUN_01980350(*(undefined8 *)(lVar2 + 0x208));
  lVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  plVar3[5] = *(longlong *)(lVar2 + 0x28);
  (**(code **)(*plVar3 + 0x138))(plVar3,uVar1,0);
  FUN_00410f20(uVar1);
  FUN_018a9580(param_1,plVar3);
  (**(code **)(*plVar3 + 0x168))(plVar3,param_2);
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  FUN_01980550(*(undefined8 *)(lVar2 + 0x208),plVar3);
  return;
}

