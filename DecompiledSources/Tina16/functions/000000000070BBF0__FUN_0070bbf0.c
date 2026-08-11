/* Ghidra address: 0070bbf0 */
/* Ghidra symbol: FUN_0070bbf0 */


undefined8 FUN_0070bbf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00423010(param_2,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
  iVar1 = FUN_0070bfd0(param_1);
  iVar2 = FUN_0070bfd0(param_1);
  FUN_00423b10(param_2,-iVar1,-iVar2);
  return param_2;
}

