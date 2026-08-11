/* Ghidra address: 01771c10 */
/* Ghidra symbol: FUN_01771c10 */


void FUN_01771c10(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 200));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
  FUN_00410f20();
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x170) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x170),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x170));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x110));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x118));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x198));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1a0));
  FUN_017712f0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

