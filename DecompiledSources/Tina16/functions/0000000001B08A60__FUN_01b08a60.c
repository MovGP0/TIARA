/* Ghidra address: 01b08a60 */
/* Ghidra symbol: FUN_01b08a60 */


void FUN_01b08a60(undefined8 param_1,longlong param_2,undefined4 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  if ((param_4 & 1) != 0) {
    FUN_01b084b0(param_1,*(undefined8 *)(param_2 + 0x128),param_3,param_5,param_6,param_7);
  }
  if ((param_4 & 2) != 0) {
    FUN_01b086a0(param_1,*(undefined8 *)(param_2 + 0x128),param_3,param_5,param_6,param_7);
  }
  return;
}

