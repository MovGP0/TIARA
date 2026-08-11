/* Ghidra address: 01ace010 */
/* Ghidra symbol: FUN_01ace010 */


void FUN_01ace010(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x10a) == '\0') {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  FUN_00410f20(param_1[0x17]);
  FUN_00410f20(param_1[0x18]);
  FUN_00410f20(param_1[0x19]);
  FUN_00410f20(param_1[0x1a]);
  iVar3 = *(int *)(param_1[0x12] + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1[0x12],iVar2);
      FUN_01cc6030(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(param_1[0x12]);
  FUN_00410f20(param_1[0x1b]);
  FUN_00410f20(param_1[0x1c]);
  FUN_00410f20(param_1[0x1d]);
  FUN_00410f20(param_1[0x11]);
  if (param_1[0x1e] != 0) {
    FUN_00410f20(param_1[0x1e]);
  }
  if (param_1[0x1f] != 0) {
    FUN_00410f20(param_1[0x1f]);
  }
  FUN_01d2aed0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

