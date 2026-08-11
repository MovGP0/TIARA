/* Ghidra address: 010503a0 */
/* Ghidra symbol: FUN_010503a0 */


void FUN_010503a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (((char)param_2 == '\0') || ((char)param_3 != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x730),uVar1);
  if (((char)param_2 == '\0') || ((char)param_3 != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x738),uVar1);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x740),param_2);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x748),param_2);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x750),param_2);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x758),param_2);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x7e0),param_2);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x880),param_3);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x888),param_3);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x890),param_3);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x898),1);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x7e8),1);
  return;
}

