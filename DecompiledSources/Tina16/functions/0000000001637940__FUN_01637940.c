/* Ghidra address: 01637940 */
/* Ghidra symbol: FUN_01637940 */


undefined8 FUN_01637940(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 auStack_58 [5];
  undefined8 *local_30;
  
  auStack_58[3] = 0;
  auStack_58[2] = 0;
  uVar6 = ((longlong)param_2 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar6;
  uVar3 = uVar10 & 0xfff;
  while ((longlong)uVar10 < (longlong)uVar3) {
    auStack_1078[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar6;
  puVar1 = (undefined8 *)((longlong)auStack_58 + lVar2);
  puVar9 = puVar1;
  for (lVar7 = (longlong)param_2 + 1; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *param_1;
    param_1 = param_1 + 1;
    puVar9 = puVar9 + 1;
  }
  local_30 = puVar1;
  if ((param_2 + 1) % 2 != 0) {
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x16379d8;
    uVar4 = FUN_00b89270();
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x16379eb;
    FUN_0041ddd0(auStack_58 + 2,PTR_PTR_02003548);
    uVar5 = auStack_58[2];
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x1637a02;
    FUN_00b8e650(uVar4,auStack_58 + 3,L"HDLStrings.Msg_WrongNumberOfParam",uVar5);
    uVar5 = auStack_58[3];
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x1637a0b;
    FUN_01613110(uVar5);
  }
  *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x1637a15;
  uVar5 = FUN_01637710(auStack_78,0);
  for (iVar8 = 2; iVar8 <= param_2; iVar8 = iVar8 + 2) {
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x1637a27;
    lVar7 = FUN_01637710(auStack_78,iVar8);
    if (lVar7 != 0) {
      *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x1637a3d;
      uVar5 = FUN_01698500(uVar5,lVar7,0x110);
    }
  }
  auStack_58[1] = uVar5;
  *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x1637a5f;
  FUN_00414560(auStack_58 + 2,2);
  return auStack_58[1];
}

