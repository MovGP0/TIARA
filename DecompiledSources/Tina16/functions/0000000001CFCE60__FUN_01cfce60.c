/* Ghidra address: 01cfce60 */
/* Ghidra symbol: FUN_01cfce60 */


void FUN_01cfce60(longlong param_1,int *param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  char local_29;
  
  cVar1 = *(char *)(param_1 + 0xd1);
  local_29 = cVar1;
  if ((param_4 == '\0') || (uVar5 = FUN_01d07330(param_1), 0x7f < (byte)uVar5)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  lVar6 = FUN_01d06f50(param_1,param_3 == '\0',uVar3,&local_29);
  if (lVar6 == 0) {
    lVar6 = FUN_01d06f90(param_1);
    cVar7 = cVar1;
  }
  else {
    cVar7 = local_29;
    if (local_29 != cVar1) {
      cVar7 = '\0';
    }
  }
  if (lVar6 == 0) {
    lVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
    iVar2 = *(int *)(lVar6 + 0x85);
    uVar4 = (uint)*(short *)(*(longlong *)PTR_DAT_020015b0 + -2 + (longlong)(iVar2 + 1) * 4);
    FUN_00b956d0(param_2,(int)*(short *)(*(longlong *)PTR_DAT_020015b0 + -4 + (longlong)iVar2 * 4),
                 (int)*(short *)(*(longlong *)PTR_DAT_020015b0 + -2 + (longlong)iVar2 * 4),
                 (longlong)
                 *(short *)(*(longlong *)PTR_DAT_020015b0 + -4 + (longlong)(iVar2 + 1) * 4),uVar4);
  }
  else {
    uVar4 = (uint)*(short *)(lVar6 + 0x22);
    FUN_00b956d0(param_2,(longlong)*(short *)(lVar6 + 0x1c),(longlong)*(short *)(lVar6 + 0x1e),
                 (longlong)*(short *)(lVar6 + 0x20),uVar4);
  }
  uVar4 = uVar4 & 0xffffff00;
  FUN_01cf1450(cVar7,*(undefined1 *)(param_1 + 0xd3),param_2,param_2 + 1,uVar4,0);
  FUN_01cf1450(cVar7,*(undefined1 *)(param_1 + 0xd3),param_2 + 2,param_2 + 3,uVar4 & 0xffffff00,0);
  if (param_2[2] < *param_2) {
    FUN_01cefdf0(param_2,param_2 + 2);
  }
  if (param_2[3] < param_2[1]) {
    FUN_01cefdf0(param_2 + 1,param_2 + 3);
  }
  FUN_00b95860(param_2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

