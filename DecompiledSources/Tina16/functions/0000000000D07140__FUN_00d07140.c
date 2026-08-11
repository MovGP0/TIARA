/* Ghidra address: 00d07140 */
/* Ghidra symbol: FUN_00d07140 */


void FUN_00d07140(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x77) != '\0' || *(char *)(param_2 + 0x76) != '\0') {
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x80) + 0x18) + 0x118) =
         *(undefined8 *)(param_2 + 0x68);
  }
  return;
}

