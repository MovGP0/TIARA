/* Ghidra address: 01244360 */
/* Ghidra symbol: FUN_01244360 */


undefined8
FUN_01244360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_1098 [4088];
  undefined8 auStack_a0 [5];
  longlong lStack_78;
  undefined4 auStack_70 [6];
  undefined8 auStack_58 [4];
  longlong local_38;
  undefined8 *local_30;
  
  local_38 = 0;
  uVar8 = ((longlong)param_5 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar11 = -uVar8;
  uVar2 = uVar11 & 0xfff;
  auStack_58[1] = param_1;
  auStack_58[2] = param_2;
  auStack_58[3] = param_3;
  while ((longlong)uVar11 < (longlong)uVar2) {
    auStack_1098[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar8;
  puVar10 = (undefined8 *)((longlong)auStack_58 + lVar1);
  for (lVar9 = (longlong)param_5 + 1; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *param_4;
    param_4 = param_4 + 1;
    puVar10 = puVar10 + 1;
  }
  local_30 = (undefined8 *)((longlong)auStack_58 + lVar1);
  *(undefined8 *)((longlong)auStack_a0 + lVar1) = 0x1244411;
  FUN_00419260(&local_38,&DAT_01244320,1,(longlong)(param_5 + 1));
  lVar9 = local_38;
  uVar5 = auStack_58[3];
  uVar4 = auStack_58[2];
  uVar3 = auStack_58[1];
  iVar6 = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    puVar10 = local_30;
    do {
      *(undefined4 *)(local_38 + (longlong)iVar6 * 8) = *(undefined4 *)puVar10;
      *(undefined4 *)(local_38 + 4 + (longlong)iVar6 * 8) = *(undefined4 *)((longlong)puVar10 + 4);
      iVar6 = iVar6 + 1;
      puVar10 = puVar10 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  lVar7 = 0;
  if (local_38 != 0) {
    lVar7 = *(longlong *)(local_38 + -8);
  }
  *(longlong *)((longlong)&lStack_78 + lVar1) = lVar7 + -1;
  *(undefined4 *)((longlong)auStack_70 + lVar1) = param_6;
  *(undefined4 *)((longlong)auStack_70 + lVar1 + 8) = param_7;
  *(undefined4 *)((longlong)auStack_70 + lVar1 + 0x10) = param_8;
  *(undefined8 *)((longlong)auStack_a0 + lVar1) = 0x124449d;
  FUN_01244130(uVar3,uVar4,uVar5,lVar9);
  *(undefined8 *)((longlong)auStack_a0 + lVar1) = 0x12444ad;
  FUN_00419430(&local_38,&DAT_01244320);
  *(undefined8 *)((longlong)auStack_a0 + lVar1) = 0x12444be;
  FUN_00419430(&local_38,&DAT_01244320);
  return auStack_58[1];
}

