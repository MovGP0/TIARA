/* Ghidra address: 00951640 */
/* Ghidra symbol: FUN_00951640 */


void FUN_00951640(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_00410f20(param_1[0x10]);
  param_1[0x10] = 0;
  FUN_00410f20();
  if (param_1[0x13] != 0) {
    uVar2 = 0;
    iVar3 = *(int *)(param_1[0x13] + 0x10);
    if (-1 < iVar3 + -1) {
      do {
        if (*(uint *)(param_1[0x13] + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        FUN_00410f20();
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (param_1[0x12] != 0) {
    iVar3 = *(int *)(param_1[0x12] + 0x10);
    uVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = param_1[0x12];
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00410f20(param_1[0x13]);
  FUN_00410f20(param_1[0x12]);
  FUN_0094c630(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

