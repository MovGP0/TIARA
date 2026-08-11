/* Ghidra address: 00f82b80 */
/* Ghidra symbol: FUN_00f82b80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f82b80(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  int local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_78;
  local_38 = 0;
  local_30 = FUN_004afa30(*(undefined8 *)(param_1 + 0x80));
  for (; local_38 <= *(int *)(local_30 + 0x10) + -1; local_38 = local_38 + 1) {
    lVar3 = FUN_004aeac0(local_30,local_38);
    if (*(longlong *)(param_2 + 0x10) == (longlong)*(int *)(lVar3 + 0x6c)) break;
  }
  if (*(int *)(local_30 + 0x10) + -1 < local_38) goto code_r0x00f82d84;
  local_28 = FUN_004aeac0(local_30,local_38);
  if (*(char *)(local_28 + 0x58) == '\0') {
    FUN_004ae870(local_30,local_38);
  }
  if ((*(int *)(local_28 + 0x30) == 0) || (*(int *)(local_28 + 0x30) == 0x7e8)) {
    if (*(longlong *)(local_28 + 0x10) != 0) {
      (**(code **)(local_28 + 0x10))
                (*(undefined8 *)(local_28 + 0x18),*(undefined8 *)PTR_DAT_02004030);
    }
    if (*(longlong *)(local_28 + 0x20) != 0) {
      (**(code **)(local_28 + 0x20))
                (*(undefined8 *)(local_28 + 0x28),*(undefined8 *)(local_28 + 0x48));
    }
  }
  else {
    _DAT_01f01ed8 = *(undefined2 *)(local_28 + 0x30);
    _DAT_01f01ee0 = *(undefined8 *)(local_28 + 8);
    if (*(longlong *)(local_28 + 8) != 0) {
      iVar1 = thunk_FUN_041de4d6(*(longlong *)(local_28 + 8));
      if (iVar1 != 0) {
        thunk_FUN_0413e052(*(undefined8 *)(local_28 + 8),*(undefined4 *)(local_28 + 0x30),
                           *(undefined8 *)(local_28 + 0x38),*(undefined8 *)(local_28 + 0x40));
        goto LAB_00f82d06;
      }
    }
    thunk_FUN_0413e052(0xffff,*(undefined4 *)(local_28 + 0x30),*(undefined8 *)(local_28 + 0x38),
                       *(undefined8 *)(local_28 + 0x40));
  }
LAB_00f82d06:
  if (*(char *)(local_28 + 0x58) == '\0') {
    if (*(int *)(local_28 + 0x30) != 0x7e8) {
      FUN_00410f20(local_28);
    }
  }
  else {
    local_58 = 0;
    uVar2 = thunk_FUN_03d2fc6e(*(undefined4 *)(local_28 + 0x50),*(undefined2 *)(param_1 + 0x8c),
                               FUN_00f82b50,*(undefined8 *)(DAT_0202ef10 + 0x78));
    *(undefined4 *)(local_28 + 0x6c) = uVar2;
  }
code_r0x00f82d84:
  local_20 = *(longlong *)(param_1 + 0x80);
  FUN_00412130(*(undefined8 *)(local_20 + 0x10));
  return;
}

