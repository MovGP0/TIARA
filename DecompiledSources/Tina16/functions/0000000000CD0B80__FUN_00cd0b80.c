/* Ghidra address: 00cd0b80 */
/* Ghidra symbol: FUN_00cd0b80 */


bool FUN_00cd0b80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ccd650(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),
                       *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38));
  return 0 < iVar1;
}

