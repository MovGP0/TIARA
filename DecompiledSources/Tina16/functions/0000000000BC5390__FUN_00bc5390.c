/* Ghidra address: 00bc5390 */
/* Ghidra symbol: FUN_00bc5390 */


undefined8 FUN_00bc5390(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x188) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,*(longlong *)(param_1 + 0x188));
  }
  return param_2;
}

