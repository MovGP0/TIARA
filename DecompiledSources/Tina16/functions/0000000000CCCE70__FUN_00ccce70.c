/* Ghidra address: 00ccce70 */
/* Ghidra symbol: FUN_00ccce70 */


void FUN_00ccce70(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    (**(code **)PTR_DAT_02004818)(*(undefined8 *)(param_2 + 0x70));
  }
  if ((*(char *)(param_2 + 0x6f) != '\0') && (*(longlong *)(param_2 + 0x60) != 0)) {
    (**(code **)PTR_DAT_02001688)(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)PTR_DAT_02004bd0);
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}

