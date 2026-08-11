/* Ghidra address: 01cfae00 */
/* Ghidra symbol: FUN_01cfae00 */


void FUN_01cfae00(longlong param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  int local_74;
  undefined1 local_5e [21];
  short local_49;
  short local_47;
  int local_30;
  int local_2c;
  
  if (-1 < param_2) {
    uVar3 = *(undefined1 *)(param_1 + 0xd1);
    local_74 = param_2;
  }
  else {
    local_74 = -1 - param_2;
    uVar3 = *(undefined1 *)(param_1 + 0xd0);
  }
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_01d06f10(param_1,0,0,uVar3);
    if (lVar2 == 0) {
      lVar2 = FUN_01d06f90(param_1);
    }
    else {
      uVar3 = 0;
    }
    if (lVar2 == 0) {
      lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
      local_2c = (int)*(short *)(*(longlong *)PTR_DAT_02003718 + -5 +
                                (longlong)(*(int *)(lVar2 + 0x96) + local_74) * 5);
      lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
      local_30 = (int)*(short *)(*(longlong *)PTR_DAT_02003718 + -3 +
                                (longlong)(*(int *)(lVar2 + 0x96) + local_74) * 5);
    }
    else {
      FUN_00c3d330(lVar2,local_5e,local_74);
      local_2c = (int)local_49 - (int)*(short *)(lVar2 + 0x28);
      local_30 = (int)local_47 - (int)*(short *)(lVar2 + 0x28);
    }
  }
  else {
    FUN_0176a320(*(undefined8 *)(param_1 + 0x1a8),local_74,&local_2c,&local_30);
  }
  if (-1 < param_2) {
    FUN_01cf1450(uVar3,*(undefined1 *)(param_1 + 0xd3),&local_2c,&local_30,0,0);
    *param_3 = *(int *)(param_1 + 0xc) + local_2c;
    *param_4 = *(int *)(param_1 + 0x10) + local_30;
  }
  else {
    FUN_01cf1450(uVar3,*(undefined1 *)(param_1 + 0xd2),&local_2c,&local_30,0,0);
    *param_3 = *(int *)(param_1 + 0x14) + local_2c;
    *param_4 = *(int *)(param_1 + 0x18) + local_30;
  }
  return;
}

