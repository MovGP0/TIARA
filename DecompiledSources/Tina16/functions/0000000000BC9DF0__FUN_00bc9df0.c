/* Ghidra address: 00bc9df0 */
/* Ghidra symbol: FUN_00bc9df0 */


void FUN_00bc9df0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x138) = param_2;
  cVar1 = FUN_00bc89c0(*(undefined8 *)(param_1 + 0x50),
                       *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x180) + 2);
  if (cVar1 != '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = param_2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x138);
  }
  return;
}

