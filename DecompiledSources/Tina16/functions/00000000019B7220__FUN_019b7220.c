/* Ghidra address: 019b7220 */
/* Ghidra symbol: FUN_019b7220 */


ulonglong FUN_019b7220(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 unaff_RSI;
  undefined6 uVar6;
  ushort *puVar4;
  ulonglong uVar5;
  int iVar7;
  
  uVar6 = (undefined6)((ulonglong)unaff_RSI >> 0x10);
  if (*(ushort *)(param_2 + 0x10) < 65000) {
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
    if (*(longlong *)(param_2 + 0x28) == 0) {
      lVar2 = FUN_004095c0(0x200);
      *(longlong *)(param_2 + 0x28) = lVar2;
      if (lVar2 == 0) {
        FUN_00ef4260(1,param_2);
        uVar5 = CONCAT62(uVar6,9);
        goto LAB_019b733f;
      }
      puVar1 = *(undefined2 **)(param_2 + 0x28);
      *(undefined8 *)(puVar1 + 0xfc) = 0;
      *puVar1 = *(undefined2 *)(param_2 + 0x10);
    }
    puVar4 = *(ushort **)(param_2 + 0x28);
    iVar7 = (uint)*(ushort *)(param_2 + 0x10) - (uint)*puVar4;
    iVar3 = 1;
    for (; (iVar3 <= iVar7 / 0x32 && (*(longlong *)(puVar4 + 0xfc) != 0));
        puVar4 = *(ushort **)(puVar4 + 0xfc)) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 <= iVar7 / 0x32) {
      lVar2 = FUN_004095c0(0x200,(longlong)iVar7 % 0x32 & 0xffffffff);
      *(longlong *)(puVar4 + 0xfc) = lVar2;
      if (lVar2 == 0) {
        FUN_00ef4260(1,param_2);
        uVar5 = CONCAT62((int6)((ulonglong)puVar4 >> 0x10),9);
        goto LAB_019b733f;
      }
      puVar4 = *(ushort **)(puVar4 + 0xfc);
      puVar4[0xfc] = 0;
      puVar4[0xfd] = 0;
      puVar4[0xfe] = 0;
      puVar4[0xff] = 0;
    }
    puVar4[iVar7 % 0x32] = *(ushort *)(param_2 + 0x10);
    *(undefined8 *)(puVar4 + (longlong)(iVar7 % 0x32) * 4 + 0x34) = param_1;
    uVar5 = (ulonglong)*(ushort *)(param_2 + 0x10);
  }
  else {
    uVar5 = CONCAT62(uVar6,9);
    FUN_00ef4260(6,param_2);
  }
LAB_019b733f:
  return uVar5 & 0xffffffff;
}

