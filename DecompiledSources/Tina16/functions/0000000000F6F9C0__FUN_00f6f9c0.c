/* Ghidra address: 00f6f9c0 */
/* Ghidra symbol: FUN_00f6f9c0 */


void FUN_00f6f9c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_004b89e0(param_2,*(longlong *)(param_1 + 0x18) + 0x10,4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      (**(code **)*puVar1)(puVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00f60860(param_1 + 0x20,param_2);
  FUN_00f60860(param_1 + 0x28,param_2);
  FUN_004b89e0(param_2,param_1 + 0x30,1);
  FUN_004b89e0(param_2,param_1 + 0x34,4);
  FUN_004b89e0(param_2,param_1 + 0x38,4);
  FUN_004b89e0(param_2,param_1 + 0x3c,4);
  FUN_004b89e0(param_2,param_1 + 0x40,1);
  FUN_004b89e0(param_2,param_1 + 0x41,1);
  FUN_004b89e0(param_2,param_1 + 0xec,1);
  FUN_004b89e0(param_2,param_1 + 0x14,4);
  FUN_004b89e0(param_2,param_1 + 0x94,4);
  iVar3 = *(int *)(param_1 + 0x94);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004b89e0(param_2,param_1 + 0x44 + (longlong)iVar2 * 8,8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b89e0(param_2,param_1 + 0xe8,4);
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004b89e0(param_2,param_1 + 0x98 + (longlong)iVar2 * 8,8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b89e0(param_2,param_1 + 0x42,1);
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0xf8));
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x100));
  return;
}

