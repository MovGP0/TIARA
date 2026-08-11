/* Ghidra address: 00849840 */
/* Ghidra symbol: FUN_00849840 */


void FUN_00849840(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_0083fe70(param_1,(longlong)*(short *)(param_2 + 0x10),
                       (longlong)*(short *)(param_2 + 0x12));
  *(longlong *)(param_2 + 0x18) = (longlong)(int)-(uint)(cVar1 != '\0');
  return;
}

