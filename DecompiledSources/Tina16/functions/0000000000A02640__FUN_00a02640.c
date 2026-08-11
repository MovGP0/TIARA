/* Ghidra address: 00a02640 */
/* Ghidra symbol: FUN_00a02640 */


undefined8 FUN_00a02640(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_009f4530(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),PTR_DAT_01e6d910,
                       *(undefined4 *)(param_1 + 0x2c));
  uVar2 = FUN_009f4530(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),PTR_DAT_01e6d918,
                       *(undefined4 *)(param_1 + 0x2c));
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 != 0) {
    uVar2 = FUN_009f4530(uVar1,PTR_DAT_01e6d920,*(undefined4 *)(param_1 + 0x2c));
    uVar1 = FUN_009f4530(uVar1,PTR_LAB_01e6d928,*(undefined4 *)(param_1 + 0x2c));
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar2 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

