/* Ghidra address: 0154c360 */
/* Ghidra symbol: FUN_0154c360 */


void FUN_0154c360(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  FUN_00411a80(param_1,param_2);
  FUN_0156a0d0(param_1);
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x710));
    lVar2 = FUN_0156d390(param_1);
    if (lVar2 != 0) {
      local_30 = 0;
      FUN_01d04b50(lVar2,&local_30);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x750));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x8d0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8d0));
  puVar1 = *(undefined8 **)(param_1 + 0x6c0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar3,&DAT_01cf1390);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x900));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x908));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x808));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x810));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x818));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x820));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x828));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x830));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6e8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x920));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6e0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8f0));
  FUN_00410f20();
  if ((*(int *)(param_1 + 0x7e8) != 0) && (*(longlong *)(param_1 + 0xa50) != 0)) {
    *(undefined8 *)(param_1 + 0xa50) = 0;
    *(undefined4 *)(param_1 + 0xa68) = 0;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar4);
      FUN_00410f20(uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x978));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x998));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x980));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x980));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9c8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9d0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x910));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x8d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8d8));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x9b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x9b8));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0xa28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa28));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x988));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x988));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x938));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x938));
  FUN_015f4a70(*(undefined8 *)(param_1 + 0x8e8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x918));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8e0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8e8));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

