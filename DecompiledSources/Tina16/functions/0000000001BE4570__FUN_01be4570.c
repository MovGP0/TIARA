/* Ghidra address: 01be4570 */
/* Ghidra symbol: FUN_01be4570 */


void FUN_01be4570(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(*(longlong *)(param_2 + 0x38) + 0x78) == '\0') &&
     (*(longlong *)(*(longlong *)(param_2 + 0x60) + 0x608) != 0)) {
    (**(code **)(*(longlong *)(param_2 + 0x60) + 0x608))
              (*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x610),
               *(undefined8 *)(param_2 + 0x60),*(undefined1 *)(param_2 + 0x37));
  }
  return;
}

