/* Ghidra address: 00ea4860 */
/* Ghidra symbol: FUN_00ea4860 */


undefined4 FUN_00ea4860(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_00ea3390(param_1);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_00ea33c0(param_1);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80;
  }
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    uVar3 = uVar3 | 0x100;
  }
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    uVar3 = uVar3 | 0x400;
  }
  uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x20));
  iVar1 = FUN_00e91910(*(undefined8 *)(param_1 + 0x510),*(undefined8 *)(param_1 + 0x518),uVar2,
                       *(undefined4 *)(param_1 + 0x2c),0,uVar3 | 0x2000,param_1 + 0x50,300);
  *(int *)(param_1 + 0x504) = iVar1;
  if (0 < iVar1) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_1);
    }
  }
  return CONCAT31((int3)((uVar3 | 0x2000) >> 8),0 < iVar1);
}

