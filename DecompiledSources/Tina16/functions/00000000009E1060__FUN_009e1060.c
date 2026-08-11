/* Ghidra address: 009e1060 */
/* Ghidra symbol: FUN_009e1060 */


undefined1
FUN_009e1060(undefined8 param_1,undefined8 *param_2,int param_3,undefined1 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 local_res8 [2];
  int local_res18;
  undefined1 auStack_1068 [4088];
  undefined8 auStack_70 [5];
  longlong lStack_48;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_24 [4];
  undefined8 *local_20;
  
  uVar5 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar7 = -uVar5;
  uVar2 = uVar7 & 0xfff;
  local_2a = param_4;
  while ((longlong)uVar7 < (longlong)uVar2) {
    auStack_1068[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar5;
  puVar6 = (undefined8 *)((longlong)&uStack_38 + lVar1);
  for (lVar4 = (longlong)param_3 + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  local_20 = (undefined8 *)((longlong)&uStack_38 + lVar1);
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x9e10dd;
  local_res8[0] = param_1;
  local_res18 = param_3;
  FUN_00414610(param_1);
  puVar6 = local_20;
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x9e10f8;
  FUN_00417a80(puVar6,&DAT_00401390,(longlong)local_res18 + 1);
  puVar6 = local_20;
  uVar3 = local_2a;
  *(undefined1 **)((longlong)&lStack_48 + lVar1) = local_24;
  *(undefined4 *)((longlong)auStack_40 + lVar1) = param_5;
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x9e1125;
  local_29 = FUN_009e11a0(local_res8[0],puVar6,local_res18,uVar3);
  puVar6 = local_20;
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x9e1144;
  FUN_00417840(puVar6,&DAT_00401390,(longlong)local_res18 + 1);
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x9e114d;
  FUN_00414480(local_res8);
  return local_29;
}

