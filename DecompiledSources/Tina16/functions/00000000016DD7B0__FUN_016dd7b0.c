/* Ghidra address: 016dd7b0 */
/* Ghidra symbol: FUN_016dd7b0 */


undefined8 FUN_016dd7b0(longlong param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  if (param_2 == '\x06') {
    dVar10 = *param_4;
    dVar1 = param_4[1];
    dVar2 = param_4[2];
    dVar3 = param_4[5];
    uVar6 = FUN_0040c840(param_4[6]);
    uVar4 = FUN_0040c840(param_4[7]);
    cVar5 = FUN_0040c840(param_4[8]);
    iVar7 = FUN_0040c840(param_4[9]);
    if (param_3 < dVar2) {
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar2);
      }
      uVar9 = 0x3ff0000000000000;
    }
    else if (cVar5 == '\0') {
      dVar1 = param_4[1];
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar2 + (double)iVar7 / dVar10);
      }
      uVar9 = FUN_016da920((1.0 / dVar1) / 4.0,*(undefined8 *)(param_1 + 0x760));
    }
    else if (cVar5 == '\x01') {
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar2 + dVar3);
      }
      if (dVar2 + dVar3 <= param_3) {
        uVar9 = 0x3ff0000000000000;
      }
      else {
        uVar9 = FUN_016da920(dVar3,*(undefined8 *)(param_1 + 0x760));
      }
    }
    else {
      uVar8 = FUN_0040c840();
      dVar10 = (double)FUN_017c58f0(dVar10,dVar1,0,uVar6,uVar8,uVar4,0);
      if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
        FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),dVar2 + (double)iVar7 / dVar10);
      }
      uVar9 = FUN_016da920((1.0 / dVar10) / 4.0,*(undefined8 *)(param_1 + 0x760));
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

