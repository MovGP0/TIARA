/* Ghidra address: 010e1b10 */
/* Ghidra symbol: FUN_010e1b10 */


undefined8 FUN_010e1b10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)
       (*(longlong *)(param_1 + 0x8c0) + 0x88 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20) == 0)
  {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x8c0) + 0x88 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20);
  }
  return uVar1;
}

