/* Ghidra address: 01d01c90 */
/* Ghidra symbol: FUN_01d01c90 */


longlong * FUN_01d01c90(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar1 = param_1[0x1b];
  if (lVar1 != 0) {
    iVar3 = (**(code **)(*param_1 + 0x1c8))(param_1);
    FUN_004095f0(lVar1,(longlong)(iVar3 * 0x10c));
    param_1[0x1b] = 0;
  }
  if (param_1[0x1c] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x1d0))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_00410f20(*(undefined8 *)(param_1[0x1c] + (longlong)iVar5 * 8));
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*param_1 + 0x1d0))(param_1);
    FUN_004095f0(param_1[0x1c],(longlong)(iVar3 << 3));
    param_1[0x1c] = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_01cfd450(param_1);
  }
  if (param_1[0x19] != 0) {
    FUN_004095f0(param_1[0x19]);
  }
  cVar2 = FUN_01d01970(param_1);
  if ((cVar2 != '\0') && (param_1[0x2d] != 0)) {
    FUN_01d01bc0(param_1);
  }
  FUN_00410f20(param_1[0x35]);
  FUN_00410f20(param_1[0x33]);
  FUN_00410f20(param_1[0x7c]);
  iVar3 = *(int *)(param_1[0x7e] + 0x10);
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_004aeac0(param_1[0x7e],iVar5);
      FUN_004095f0(uVar4);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(param_1[0x7e]);
  FUN_00410f20(param_1[0x9f]);
  FUN_00410f20(param_1[0xa0]);
  FUN_00410f20(param_1[0xa1]);
  FUN_00410f20(param_1[0xa2]);
  FUN_00414480(param_1 + 0x2c);
  FUN_00414480(param_1 + 0x30);
  FUN_00414480(param_1 + 0xaf);
  FUN_00414480(param_1 + 0xb0);
  FUN_00414480(param_1 + 0xb1);
  FUN_017bdcb0(param_1);
  return param_1;
}

