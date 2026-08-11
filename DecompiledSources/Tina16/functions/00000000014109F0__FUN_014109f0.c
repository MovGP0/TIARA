/* Ghidra address: 014109f0 */
/* Ghidra symbol: FUN_014109f0 */


void FUN_014109f0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x788) + 0xe0,L"Text file (*.txt)|*.txt");
  FUN_00414ad0(*(longlong *)(param_1 + 0x788) + 0x100,&DAT_01410d60);
  *(undefined1 *)(param_1 + 0x7a8) = 0;
  *(undefined1 *)(param_1 + 0x82c) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x2d0))
            (*(longlong **)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x798),param_1 + 0x7a0);
  puVar5 = *(undefined8 **)(param_1 + 0x7a0);
  puVar6 = (undefined8 *)(param_1 + 0x7b0);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x7a0);
  uVar3 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x7b0) * 4));
  *(undefined8 *)(param_1 + 0x7b8) = uVar3;
  FUN_00409a70(*(undefined8 *)(piVar1 + 2),*(undefined8 *)(param_1 + 0x7b8),(longlong)(*piVar1 * 4))
  ;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x7d8));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x7e0));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x7c8));
  if (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8) != *(int *)(param_1 + 0x7c0)) {
    FUN_0074b490(*(longlong *)(param_1 + 0x6d8),*(int *)(param_1 + 0x7c0));
  }
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7ec),*(undefined4 *)(param_1 + 0x7b4),1,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_30[0]);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7f0),*(undefined4 *)(param_1 + 0x7b4),1,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_30[0]);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7cc),*(undefined4 *)(param_1 + 0x7b4),1,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_30[0]);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 2000),*(undefined4 *)(param_1 + 0x7b4),1,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x770),local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*(undefined1 *)(param_1 + 0x800));
  uVar2 = FUN_0140b550();
  *(undefined4 *)(param_1 + 0x828) = uVar2;
  *(undefined4 *)(param_1 + 0x824) = 0;
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_01410d70(param_1);
  *(undefined1 *)(param_1 + 0x82c) = 1;
  FUN_0064cf60(param_1,0x408);
  FUN_00414480(local_30);
  return;
}

