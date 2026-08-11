/* Ghidra address: 009d5ee0 */
/* Ghidra symbol: FUN_009d5ee0 */


undefined4 FUN_009d5ee0(longlong param_1,short *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x278))(*(longlong **)(param_1 + 0x18));
  *param_2 = -(ushort)(cVar1 != '\0');
  return 0;
}

