/* Ghidra address: 00e77190 */
/* Ghidra symbol: FUN_00e77190 */


void FUN_00e77190(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  cVar2 = (char)param_4;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x22f));
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x22e));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x230));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x231));
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x232));
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  iVar4 = FUN_016eebb0(param_2,*(undefined2 *)(param_1 + 0x22a),0);
  *(int *)(param_1 + 0x18) = iVar4 + 1;
  if ((byte)(cVar2 - 8U) < 8) {
    bVar5 = ((int)CONCAT71((uint7)(uint3)((uint)(iVar4 + 1) >> 8),1) << (cVar2 - 8U & 0x1f) & 0x11U)
            != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    if (cVar2 == '\b') {
      (*DAT_0202e998)(param_1 + 0x238,param_1,*(longlong *)(param_3 + 0x1378) + 8);
    }
    else if (cVar2 == '\f') {
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x22a) + 6,0);
      dVar6 = (double)FUN_0040c850();
      dVar1 = *(double *)(param_1 + 0x1d0);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x22a) + 4,0);
      uVar7 = FUN_0040c850();
      FUN_00b90620(uVar7,0x380b38fb9daa78e4);
      dVar8 = (double)FUN_0040c2f0();
      dVar8 = (double)FUN_0040af80(*(double *)(param_1 + 0x2c0) * dVar8);
      dVar9 = (double)FUN_016ed7f0(param_3,param_4);
      uVar7 = FUN_0040c760((dVar1 * 1.10449808e-22 * dVar6) / 3.0 +
                           (*(double *)(param_1 + 0x2b8) * dVar8) / dVar9);
      FUN_016ed220(param_2,*(char *)(param_1 + 0x228) + '\x02',uVar7,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    (*DAT_0202e990)(param_1 + 0x238,param_1,*(longlong *)(param_3 + 0x1378) + 8);
  }
  else {
    (*DAT_0202e9a0)(param_1,*(longlong *)(param_3 + 0x1378) + 8);
  }
  return;
}

