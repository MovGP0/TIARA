/* Ghidra address: 01cd9da0 */
/* Ghidra symbol: FUN_01cd9da0 */


void FUN_01cd9da0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined4 local_350 [202];
  
  iVar5 = 0;
  puVar6 = local_350;
  do {
    dVar7 = (double)FUN_0040bcd0(((double)iVar5 * 6.283185307179586) / 100.0);
    uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),dVar7 * 1.005);
    *puVar6 = uVar2;
    dVar7 = (double)FUN_0040bdd0(((double)iVar5 * 6.283185307179586) / 100.0);
    uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),dVar7 * 1.005);
    puVar6[1] = uVar2;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 2;
  } while (iVar5 != 0x65);
  uVar4 = thunk_FUN_0411fefb(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_039bba01(uVar4,*(undefined8 *)(param_1 + 0x68));
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_041cb0d4(uVar4);
  (**(code **)(*param_2 + 0xd8))(param_2,local_350,99);
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_039a9576(uVar4);
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_039b1e03(uVar4,1);
  lVar1 = param_2[0xf];
  uVar2 = FUN_01a90ee0(0);
  FUN_005fd4e0(lVar1,uVar2);
  FUN_005fd670(lVar1,0);
  FUN_005fd6d0(lVar1,1);
  FUN_005fdcb0(param_2[0x10],1);
  uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),0xbff0000000000000);
  uVar3 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),0);
  (**(code **)(*param_2 + 200))(param_2,uVar2,uVar3);
  uVar2 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x58),0x3ff0000000000000);
  uVar3 = FUN_01cd60f0(*(undefined8 *)(param_1 + 0x60),0);
  (**(code **)(*param_2 + 0xc0))(param_2,uVar2,uVar3);
  return;
}

