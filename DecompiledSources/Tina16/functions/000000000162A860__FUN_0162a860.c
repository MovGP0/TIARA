/* Ghidra address: 0162a860 */
/* Ghidra symbol: FUN_0162a860 */


void FUN_0162a860(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x18) == '\0')) {
    FUN_016a94d0(*(longlong *)(param_1 + 8),1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x128));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x128));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

