/* Ghidra address: 019bbfe0 */
/* Ghidra symbol: FUN_019bbfe0 */


undefined8 FUN_019bbfe0(undefined8 param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_1098 [4088];
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [3];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong local_30;
  
  apuStack_68[1] = (undefined8 *)auStack_98;
  uVar7 = ((longlong)param_3 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar9 = -uVar7;
  uVar5 = uVar9 & 0xfff;
  while ((longlong)uVar9 < (longlong)uVar5) {
    auStack_1098[uVar5] = (char)(uVar5 - 0x1000);
    uVar5 = uVar5 - 0x1000;
  }
  lVar4 = -uVar7;
  puVar1 = (undefined8 *)((longlong)apuStack_68 + lVar4);
  puVar8 = puVar1;
  for (lVar6 = (longlong)param_3 + 1; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_40 = 0;
  local_38 = puVar1;
  *(undefined8 *)((longlong)&uStack_a0 + lVar4) = 0x19bc076;
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,CONCAT71((int7)((ulonglong)puVar1 >> 8),1));
  local_4c = 0;
  if (-1 < param_4 + -1) {
    apuStack_68[2] = local_38;
    do {
      uVar2 = *(undefined4 *)apuStack_68[2];
      uVar3 = *(undefined4 *)((longlong)apuStack_68[2] + 4);
      *(undefined8 *)((longlong)&uStack_a0 + lVar4) = 0x19bc0b0;
      FUN_019bbfb0(auStack_98,uVar2,uVar3);
      apuStack_68[2] = apuStack_68[2] + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  lVar6 = local_30;
  if (0 < *(int *)(local_30 + 0x10)) {
    auStack_78[lVar4] = 0;
    auStack_70[lVar4] = 0;
    *(undefined8 *)((longlong)&uStack_a0 + lVar4) = 0x19bc0e8;
    local_48 = FUN_01992db0(param_1,lVar6,0,0xffffffff);
    local_40 = local_48;
  }
  lVar6 = local_30;
  *(undefined8 *)((longlong)&uStack_a0 + lVar4) = 0x19bc0fe;
  FUN_00410f20(lVar6);
  return local_40;
}

