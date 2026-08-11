/* Ghidra address: 008fe9d0 */
/* Ghidra symbol: FUN_008fe9d0 */


undefined8 * FUN_008fe9d0(longlong param_1,undefined8 *param_2)

{
  FUN_00414520(param_2);
  if (*(char *)(param_1 + 0x33) != '\0') {
    FUN_00416310(param_2,3,*param_2,*(undefined8 *)(param_1 + 0x28),&DAT_008fea98);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_00416310(param_2,3,*param_2,&DAT_008feaa0,*(undefined8 *)(param_1 + 8));
  }
  FUN_00415f90(param_2,*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x32) != '\0') {
    FUN_00416310(param_2,3,*param_2,&DAT_008feaac,*(undefined8 *)(param_1 + 0x18));
  }
  if (*(char *)(param_1 + 0x31) != '\0') {
    FUN_00416310(param_2,3,*param_2,&LAB_008feab4,*(undefined8 *)(param_1 + 0x10));
  }
  return param_2;
}

