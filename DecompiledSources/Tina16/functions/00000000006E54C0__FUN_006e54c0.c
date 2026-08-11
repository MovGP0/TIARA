/* Ghidra address: 006e54c0 */
/* Ghidra symbol: FUN_006e54c0 */


void FUN_006e54c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x38) == '\0')) {
    FUN_004aec30(*(undefined8 *)(param_1 + 0x568),param_3,param_2);
    FUN_006dd1e0(param_2,1);
  }
  return;
}

