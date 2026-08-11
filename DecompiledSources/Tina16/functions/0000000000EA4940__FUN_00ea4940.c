/* Ghidra address: 00ea4940 */
/* Ghidra symbol: FUN_00ea4940 */


bool FUN_00ea4940(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00ea3390(param_1);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_00ea33c0(param_1);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x80;
  }
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    uVar6 = uVar6 | 0x100;
  }
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    uVar6 = uVar6 | 0x400;
  }
  uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0x20));
  iVar2 = FUN_00e91910(*(undefined8 *)(param_1 + 0x510),*(undefined8 *)(param_1 + 0x518),uVar3,
                       *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),
                       uVar6 | 0x2000,param_1 + 0x50,300);
  *(int *)(param_1 + 0x504) = iVar2;
  if (0 < iVar2) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x50);
    if (iVar5 == *(int *)(param_1 + 0x54)) {
      if (iVar5 < 0) {
        bVar1 = false;
      }
      else {
        iVar4 = 0;
        if (*(longlong *)(param_1 + 0x20) != 0) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
        }
        bVar1 = iVar5 < iVar4;
      }
      if (bVar1) {
        FUN_00416780(local_20,*(undefined2 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 2));
        iVar5 = 0;
        if (local_20[0] != 0) {
          iVar5 = *(int *)(local_20[0] + -4);
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar5;
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_1);
    }
  }
  FUN_00414480(local_20);
  return 0 < iVar2;
}

