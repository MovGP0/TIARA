/* Ghidra address: 010edc20 */
/* Ghidra symbol: FUN_010edc20 */


void FUN_010edc20(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,param_2[0xf]);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))
            ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x88));
  uVar1 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x88));
  uVar1 = FUN_01a90ee0(uVar1);
  FUN_005fd4e0(param_2[0xf],uVar1);
  FUN_005fd640(param_2[0xf],0xf);
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_005fd4e0(param_2[0xf],0xff);
  }
  uVar1 = FUN_00b905f0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  uVar2 = FUN_00b905f0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
  uVar3 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  uVar4 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
  uVar5 = FUN_00b905f0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  uVar6 = FUN_00b905f0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
  uVar7 = FUN_00b905f0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  uVar8 = FUN_00b905f0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
  (**(code **)(*param_2 + 0x60))(param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar9);
  FUN_00410f20(plVar9);
  return;
}

