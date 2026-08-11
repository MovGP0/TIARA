/* Ghidra address: 017b4250 */
/* Ghidra symbol: FUN_017b4250 */


longlong FUN_017b4250(longlong param_1,char param_2,undefined8 *param_3,int param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  undefined1 auStack_1078 [4088];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  int aiStack_58 [2];
  undefined1 *local_50;
  int *local_40;
  undefined4 local_34;
  int *local_30;
  
  local_50 = auStack_78;
  uVar7 = ((longlong)param_4 + 1) * 8 + 0xfU & 0xfffffffffffffff0;
  uVar8 = -uVar7;
  uVar3 = uVar8 & 0xfff;
  while ((longlong)uVar8 < (longlong)uVar3) {
    auStack_1078[uVar3] = (char)(uVar3 - 0x1000);
    uVar3 = uVar3 - 0x1000;
  }
  lVar2 = -uVar7;
  piVar1 = (int *)((longlong)aiStack_58 + lVar2);
  piVar6 = piVar1;
  for (lVar5 = (longlong)param_4 + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)piVar6 = *param_3;
    param_3 = param_3 + 1;
    piVar6 = piVar6 + 2;
  }
  local_res8 = param_1;
  local_30 = piVar1;
  if (param_2 != '\0') {
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x17b430f;
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x17b4325;
  FUN_017b58f0(local_res8,0);
  *(undefined8 *)(local_res8 + 0x18) = *(undefined8 *)local_30;
  *(undefined8 *)(local_res8 + 0x48) = *(undefined8 *)(local_res8 + 0x18);
  local_34 = 0;
  if (-1 < param_4) {
    iVar4 = param_4 + 1;
    local_40 = local_30;
    do {
      *local_40 = *local_40 - *(int *)(local_res8 + 0x18);
      local_40[1] = local_40[1] - *(int *)(local_res8 + 0x1c);
      local_40 = local_40 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  piVar1 = local_30;
  *(undefined8 *)(local_res8 + 0x50) = 0;
  *(undefined8 *)(local_res8 + 0x58) = 0;
  *(undefined4 *)(local_res8 + 0x60) = 0;
  *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x17b43de;
  FUN_017b4f80(local_res8,piVar1,param_4);
  *(undefined4 *)(local_res8 + 100) = param_5;
  *(undefined4 *)(local_res8 + 0x68) = param_6;
  *(undefined4 *)(local_res8 + 0x6c) = param_7;
  if (param_2 != '\0') {
    *(undefined8 *)((longlong)&uStack_80 + lVar2) = 0x17b4423;
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

