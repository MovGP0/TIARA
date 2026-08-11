/* Ghidra address: 01898d80 */
/* Ghidra symbol: FUN_01898d80 */


void FUN_01898d80(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  FUN_006e53f0(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x72e) != '\0') {
    FUN_01898f20(param_1,*(char *)(param_1 + 0x72d) == '\0');
    if (*(longlong *)(param_1 + 0x718) != 0) {
      (**(code **)(param_1 + 0x718))(*(undefined8 *)(param_1 + 0x720),param_1);
    }
  }
  return;
}

