/* Ghidra address: 0140dfd0 */
/* Ghidra symbol: FUN_0140dfd0 */


void FUN_0140dfd0(longlong param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x760) + 0xe0,L"Text file (*.txt)|*.txt");
  FUN_00414ad0(*(longlong *)(param_1 + 0x760) + 0x100,&DAT_0140e320);
  *(undefined1 *)(param_1 + 0x780) = 0;
  *(undefined1 *)(param_1 + 0x7f0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x768) + 0x2d0))
            (*(longlong **)(param_1 + 0x768),*(undefined4 *)(param_1 + 0x770),param_1 + 0x778);
  puVar5 = *(undefined8 **)(param_1 + 0x778);
  puVar6 = (undefined8 *)(param_1 + 0x788);
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1 = *(ushort **)(param_1 + 0x778);
  uVar3 = FUN_004095c0((uint)*(ushort *)(param_1 + 0x788) * 2);
  *(undefined8 *)(param_1 + 0x790) = uVar3;
  FUN_00409a70(*(undefined8 *)(puVar1 + 4),*(undefined8 *)(param_1 + 0x790),(uint)*puVar1 * 2);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x7a8));
  if (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8) != *(int *)(param_1 + 0x798)) {
    FUN_0074b490(*(longlong *)(param_1 + 0x6d8),*(int *)(param_1 + 0x798));
  }
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7b4),*(undefined2 *)(param_1 + 0x78a),1,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_30[0]);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7b8),*(undefined2 *)(param_1 + 0x78a),1,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_30[0]);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7a0),*(undefined2 *)(param_1 + 0x78a),1,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_30[0]);
  FUN_01408750(local_30,*(undefined4 *)(param_1 + 0x7a4),*(undefined2 *)(param_1 + 0x78a),1,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))
            (*(longlong **)(param_1 + 0x750),*(undefined1 *)(param_1 + 0x7c8));
  FUN_00c42670(0x4000000000000000,(double)*(ushort *)(param_1 + 0x78a));
  uVar2 = FUN_0040c840();
  *(undefined2 *)(param_1 + 0x7ee) = uVar2;
  *(undefined2 *)(param_1 + 0x7ec) = 0;
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_0140e330(param_1);
  *(undefined1 *)(param_1 + 0x7f0) = 1;
  FUN_0064cf60(param_1,0x408);
  FUN_00414480(local_30);
  return;
}

