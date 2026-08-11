/* Ghidra address: 004c75d0 */
/* Ghidra symbol: FUN_004c75d0 */


void FUN_004c75d0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x60) + 0x40) =
       *(undefined8 *)(param_2 + 0x68);
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x60) + 0x58,
               *(undefined8 *)(param_2 + 0x60));
  return;
}

