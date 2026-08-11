/* Ghidra address: 006e3f70 */
/* Ghidra symbol: FUN_006e3f70 */


void FUN_006e3f70(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x58d) == '\0') && (*(longlong *)(param_1 + 0x638) != 0)) {
    (**(code **)(param_1 + 0x638))(*(undefined8 *)(param_1 + 0x640),param_1,param_2);
  }
  return;
}

