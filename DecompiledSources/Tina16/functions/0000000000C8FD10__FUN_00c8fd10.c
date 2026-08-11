/* Ghidra address: 00c8fd10 */
/* Ghidra symbol: FUN_00c8fd10 */


undefined4 FUN_00c8fd10(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48));
  FUN_00c8c8a0(&PTR_FUN_00c8c438,(char)uVar1 == '\0',0);
  return uVar1;
}

