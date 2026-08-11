/* Ghidra address: 01a37dd0 */
/* Ghidra symbol: FUN_01a37dd0 */


void FUN_01a37dd0(undefined8 param_1,longlong param_2)

{
  FUN_00419430(param_2 + 0xe0,&DAT_01a37070);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xb8));
  if (*(char *)(*(longlong *)(param_2 + 0x120) + 0xa2) == '\0') {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x18));
  }
  return;
}

