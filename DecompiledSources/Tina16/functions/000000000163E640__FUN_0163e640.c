/* Ghidra address: 0163e640 */
/* Ghidra symbol: FUN_0163e640 */


void FUN_0163e640(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10f0));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  if (*(char *)(param_1 + 0x10d4) != '\0') {
    FUN_00419430(param_1 + 0x10d8,&DAT_01624c58);
  }
  lVar1 = *(longlong *)(param_1 + 0x10a8);
  if (lVar1 != 0) {
    uVar2 = FUN_00442620(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x10b8));
    FUN_015fcd60(lVar1,uVar2,0);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

