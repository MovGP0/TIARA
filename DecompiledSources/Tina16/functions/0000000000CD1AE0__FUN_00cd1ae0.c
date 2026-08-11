/* Ghidra address: 00cd1ae0 */
/* Ghidra symbol: FUN_00cd1ae0 */


undefined8 FUN_00cd1ae0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_00cd3650(&DAT_00cca0e0,1,param_1);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x20);
}

