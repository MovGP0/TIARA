/* Ghidra address: 01be98d0 */
/* Ghidra symbol: FUN_01be98d0 */


void FUN_01be98d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x58) + 0x78) == '\0') {
    *(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x70) + 0x668;
    *(undefined8 *)(param_2 + 0x48) = **(undefined8 **)(param_2 + 0x50);
    **(undefined8 **)(param_2 + 0x50) = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x70) + 0x698;
    *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x40);
    **(undefined8 **)(param_2 + 0x40) = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}

