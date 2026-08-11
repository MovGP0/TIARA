/* Ghidra address: 01244130 */
/* Ghidra symbol: FUN_01244130 */


undefined8
FUN_01244130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_10a8 [4088];
  undefined8 auStack_b0 [5];
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 auStack_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 *local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  uVar7 = ((longlong)(int)param_5 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar11 = -uVar7;
  uVar2 = uVar11 & 0xfff;
  auStack_68[1] = param_1;
  auStack_68[2] = param_2;
  auStack_68[3] = param_3;
  while ((longlong)uVar11 < (longlong)uVar2) {
    auStack_10a8[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar7;
  puVar9 = (undefined8 *)((longlong)auStack_68 + lVar1);
  for (lVar8 = (longlong)(int)param_5 + 1; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *param_4;
    param_4 = param_4 + 1;
    puVar9 = puVar9 + 1;
  }
  local_30 = (undefined8 *)((longlong)auStack_68 + lVar1);
  *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x12441d7;
  FUN_00414480();
  if (param_5 < 0x80000000) {
    iVar10 = param_5 + 1;
    puVar9 = local_30;
    do {
      uVar6 = *(undefined4 *)puVar9;
      *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x12441f9;
      FUN_0043f750(&local_40,uVar6);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 4);
      *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x1244205;
      FUN_0043f750(&local_48,uVar6);
      lVar8 = local_38;
      uVar3 = local_40;
      *(undefined **)((longlong)&lStack_88 + lVar1) = &DAT_012442f8;
      *(undefined8 *)((longlong)&uStack_80 + lVar1) = local_48;
      *(undefined **)((longlong)&uStack_78 + lVar1) = &DAT_012442f8;
      *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x124423c;
      FUN_00416cd0(&local_38,5,lVar8,uVar3);
      puVar9 = puVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar6 = 0;
  if (local_38 != 0) {
    uVar6 = *(undefined4 *)(local_38 + -4);
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x1244267;
  FUN_00416e20(&local_38,uVar6,1);
  uVar5 = auStack_68[3];
  uVar4 = auStack_68[2];
  uVar3 = auStack_68[1];
  *(longlong *)((longlong)&lStack_88 + lVar1) = local_38;
  *(undefined4 *)((longlong)&uStack_80 + lVar1) = param_6;
  *(undefined4 *)((longlong)&uStack_78 + lVar1) = param_7;
  *(undefined4 *)((longlong)auStack_70 + lVar1) = param_8;
  *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x12442a6;
  FUN_01243600(uVar3,uVar4,uVar5,L"polygon");
  *(undefined8 *)((longlong)auStack_b0 + lVar1) = 0x12442b5;
  FUN_00414560(&local_48,3);
  return auStack_68[1];
}

