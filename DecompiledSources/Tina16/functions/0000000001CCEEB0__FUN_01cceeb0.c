/* Ghidra address: 01cceeb0 */
/* Ghidra symbol: FUN_01cceeb0 */


double FUN_01cceeb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined8 local_30 [3];
  
  local_30[0] = 0;
  uVar2 = FUN_01cd66b0(param_1);
  FUN_00f05f60(local_30,param_2,*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x80),
               uVar2,0xffffffe2,0xffffffe2);
  FUN_00416e20(local_30,1,1);
  lVar3 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
  plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x90) + 0x80);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0xa0));
  plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x90) + 0xa0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
  uVar2 = FUN_01a5eed0(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x80));
  dVar4 = (double)FUN_01cd62b0(param_1,uVar2);
  dVar5 = (double)FUN_01cd62b0(param_1,0);
  FUN_00410f20(lVar3);
  FUN_00414480(local_30);
  return dVar4 - dVar5;
}

