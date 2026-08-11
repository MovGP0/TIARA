/* Ghidra address: 01178910 */
/* Ghidra symbol: FUN_01178910 */


void FUN_01178910(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004095f0(*(undefined8 *)PTR_DAT_02001d30);
  FUN_004095f0(*(undefined8 *)(PTR_DAT_02001d30 + 8));
  FUN_004095f0(*(undefined8 *)(PTR_DAT_02001d30 + 0x10));
  FUN_004095f0(*(undefined8 *)(PTR_DAT_02001d30 + 0x18));
  FUN_004095f0(*(undefined8 *)(PTR_DAT_02001d30 + 0x20));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x790),&local_10);
  uVar1 = FUN_0043fc00(local_10);
  *(undefined4 *)PTR_DAT_02002710 = uVar1;
  uVar2 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  *(undefined8 *)PTR_DAT_02001d30 = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  *(undefined8 *)(PTR_DAT_02001d30 + 8) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  *(undefined8 *)(PTR_DAT_02001d30 + 0x10) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  *(undefined8 *)(PTR_DAT_02001d30 + 0x18) = uVar2;
  uVar2 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  *(undefined8 *)(PTR_DAT_02001d30 + 0x20) = uVar2;
  FUN_00414480(&local_10);
  return;
}

