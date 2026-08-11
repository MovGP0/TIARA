/* Ghidra address: 01cfc7b0 */
/* Ghidra symbol: FUN_01cfc7b0 */


void FUN_01cfc7b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  char local_29;
  
  cVar7 = *(char *)(param_1 + 0xd1);
  cVar2 = FUN_01d04d40(param_1);
  if (cVar2 == '\0') {
    local_29 = cVar7;
    if (((char)param_4 == '\0') || (uVar5 = FUN_01d07330(param_1), 0x7f < (byte)uVar5)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    lVar6 = FUN_01d06f50(param_1,(char)param_3 == '\0',uVar3,&local_29);
    if (lVar6 == 0) {
      lVar6 = FUN_01d06f90(param_1);
    }
    else {
      bVar8 = local_29 != cVar7;
      cVar7 = local_29;
      if (bVar8) {
        cVar7 = '\0';
      }
    }
    if (lVar6 == 0) {
      lVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
      iVar1 = *(int *)(lVar6 + 0x85);
      uVar4 = (uint)*(short *)(*(longlong *)PTR_DAT_020015b0 + -2 + (longlong)(iVar1 + 1) * 4);
      FUN_00b956d0(param_5,(int)*(short *)(*(longlong *)PTR_DAT_020015b0 + -4 + (longlong)iVar1 * 4)
                   ,(int)*(short *)(*(longlong *)PTR_DAT_020015b0 + -2 + (longlong)iVar1 * 4),
                   (longlong)
                   *(short *)(*(longlong *)PTR_DAT_020015b0 + -4 + (longlong)(iVar1 + 1) * 4),uVar4)
      ;
    }
    else {
      uVar4 = (uint)*(short *)(lVar6 + 0x1a);
      FUN_00b956d0(param_5,(longlong)*(short *)(lVar6 + 0x14),(longlong)*(short *)(lVar6 + 0x16),
                   (longlong)*(short *)(lVar6 + 0x18),uVar4);
    }
  }
  else {
    FUN_0176a170(*(undefined8 *)(param_1 + 0x1a8),&local_3c,param_3,param_4);
    FUN_00b956d0(param_5,local_3c,local_38,local_34,local_30);
    uVar4 = local_30;
  }
  uVar4 = uVar4 & 0xffffff00;
  FUN_01cf1450(cVar7,*(undefined1 *)(param_1 + 0xd3),param_5,param_5 + 1,uVar4,0);
  FUN_01cf1450(cVar7,*(undefined1 *)(param_1 + 0xd3),param_5 + 2,param_5 + 3,uVar4 & 0xffffff00,0);
  if (param_5[2] < *param_5) {
    FUN_01cefdf0(param_5,param_5 + 2);
  }
  if (param_5[3] < param_5[1]) {
    FUN_01cefdf0(param_5 + 1,param_5 + 3);
  }
  FUN_00b95860(param_5,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

