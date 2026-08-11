/* Ghidra address: 009e11a0 */
/* Ghidra symbol: FUN_009e11a0 */


undefined1
FUN_009e11a0(undefined8 param_1,undefined8 *param_2,int param_3,char param_4,undefined4 *param_5,
            undefined4 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 local_res8 [2];
  int local_res18;
  undefined1 auStack_1148 [4088];
  undefined8 auStack_150 [5];
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong alStack_118 [4];
  char local_f2;
  bool local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined1 local_98 [104];
  undefined8 *local_30;
  
  local_e8 = 0;
  local_f0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uVar7 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar10 = -uVar7;
  uVar2 = uVar10 & 0xfff;
  local_f2 = param_4;
  while ((longlong)uVar10 < (longlong)uVar2) {
    auStack_1148[uVar2] = (char)(uVar2 - 0x1000);
    uVar2 = uVar2 - 0x1000;
  }
  lVar1 = -uVar7;
  puVar8 = (undefined8 *)(&stack0xffffffffffffff08 + lVar1);
  for (lVar6 = (longlong)param_3 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_30 = (undefined8 *)(&stack0xffffffffffffff08 + lVar1);
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e1250;
  local_res8[0] = param_1;
  local_res18 = param_3;
  FUN_00414610(param_1);
  puVar8 = local_30;
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e126e;
  FUN_00417a80(puVar8,&DAT_00401390,(longlong)local_res18 + 1);
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e1280;
  FUN_009e1040(local_98,0x68);
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e1291;
  FUN_009e1040(local_b0,0x18);
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e129d;
  FUN_00414480();
  if (-1 < local_res18) {
    iVar9 = local_res18 + 1;
    puVar8 = local_30;
    do {
      uVar5 = local_b8;
      *(undefined8 *)((longlong)&uStack_128 + lVar1) = *puVar8;
      *(undefined **)((longlong)&uStack_120 + lVar1) = &DAT_009e153c;
      *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e12ea;
      FUN_00416cd0(&local_b8,4,uVar5,&DAT_009e1528);
      puVar8 = puVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *param_5 = 0;
  if (local_f2 == '\0') {
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e1391;
    uVar3 = FUN_00416740(local_res8[0]);
    local_e0 = local_res8[0];
    local_d8 = 0x11;
    local_d0 = local_b8;
    local_c8 = 0x11;
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e13cf;
    FUN_00442f70(&local_e8,L"\"%s\"%s",&local_e0,1);
    uVar5 = local_e8;
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e13d8;
    uVar4 = FUN_00416740(uVar5);
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e13eb;
    FUN_00441640(&local_f0,local_res8[0]);
    uVar5 = local_f0;
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e13f4;
    uVar5 = FUN_00416740(uVar5);
    *(undefined4 *)((longlong)&uStack_128 + lVar1) = 0;
    *(undefined4 *)((longlong)&uStack_120 + lVar1) = 0;
    *(undefined8 *)((longlong)alStack_118 + lVar1) = 0;
    *(undefined8 *)((longlong)alStack_118 + lVar1 + 8) = uVar5;
    *(undefined1 **)((longlong)alStack_118 + lVar1 + 0x10) = local_98;
    *(undefined1 **)((longlong)alStack_118 + lVar1 + 0x18) = local_b0;
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e143b;
    iVar9 = thunk_FUN_04169e31(uVar3,uVar4,0,0);
    local_f1 = iVar9 != 0;
    if (local_f1) {
      *param_5 = local_a0;
    }
  }
  else {
    local_e0 = local_res8[0];
    local_d8 = 0x11;
    local_d0 = local_b8;
    local_c8 = 0x11;
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e134a;
    FUN_00442f70(&local_c0,L"\"%s\"%s",&local_e0,1);
    uVar5 = local_c0;
    *(undefined1 *)((longlong)&uStack_128 + lVar1) = 0;
    *(wchar_t **)((longlong)&uStack_120 + lVar1) = L"Please wait...";
    *(undefined1 *)((longlong)alStack_118 + lVar1) = 1;
    *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e1378;
    iVar9 = FUN_009e0a10(uVar5,param_6,0,0);
    local_f1 = iVar9 == 0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e146a;
  FUN_00414560(&local_f0,2);
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e147b;
  FUN_00414560(&local_c0,2);
  puVar8 = local_30;
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e1499;
  FUN_00417840(puVar8,&DAT_00401390,(longlong)local_res18 + 1);
  *(undefined8 *)((longlong)auStack_150 + lVar1) = 0x9e14a5;
  FUN_00414480(local_res8);
  return local_f1;
}

