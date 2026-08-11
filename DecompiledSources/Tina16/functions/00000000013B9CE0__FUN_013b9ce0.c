/* Ghidra address: 013b9ce0 */
/* Ghidra symbol: FUN_013b9ce0 */


void FUN_013b9ce0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 200));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x30));
  }
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar2);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar2);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

