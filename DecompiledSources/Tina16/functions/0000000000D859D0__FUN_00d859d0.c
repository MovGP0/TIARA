/* Ghidra address: 00d859d0 */
/* Ghidra symbol: FUN_00d859d0 */


undefined8 *
FUN_00d859d0(longlong param_1,undefined8 *param_2,byte param_3,undefined8 *param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_60 [2];
  byte local_50;
  undefined8 local_38;
  
  puVar5 = local_60;
  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  *param_2 = DAT_01ecf394;
  param_2[1] = DAT_01ecf39c;
  lVar4 = 0;
  iVar3 = FUN_00416db0(param_5,L"default");
  if (iVar3 != 0) {
    lVar4 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
  }
  if (lVar4 != 0) goto LAB_00d85ad3;
  if (param_3 < 3) {
    if (param_3 == 2) {
      lVar4 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d85ad3;
    }
    if (param_3 == 0) {
      lVar4 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d85ad3;
    }
    if (param_3 == 1) {
      lVar4 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d85ad3;
    }
  }
  else {
    if (param_3 == 4) {
      lVar4 = **(longlong **)(param_1 + 0x58);
      goto LAB_00d85ad3;
    }
    if (param_3 == 6) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0);
      goto LAB_00d85ad3;
    }
  }
  lVar4 = 0;
LAB_00d85ad3:
  if (lVar4 == 0) {
    FUN_00d80990(param_1,param_2,param_3,local_60,param_5);
  }
  else {
    FUN_00d77f50(lVar4,(local_50 & 1) != 0);
    FUN_00d77b90(lVar4,local_60);
    FUN_00d76870(lVar4);
    lVar4 = FUN_00d77580(lVar4,3);
    if (lVar4 != 0) {
      FUN_00414ad0(lVar4 + 0xb8,local_38);
      uVar1 = *(undefined8 *)(lVar4 + 8);
      cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00d5d820);
      if (cVar2 != '\0') {
        FUN_00d75ef0(uVar1);
      }
      FUN_00d77cb0(lVar4,param_2);
      FUN_00414480(lVar4 + 0xb8);
    }
  }
  FUN_00417740(local_60,&DAT_00d627e8);
  return param_2;
}

