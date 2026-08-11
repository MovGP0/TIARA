/* Ghidra address: 00a9fd90 */
/* Ghidra symbol: FUN_00a9fd90 */


undefined4 FUN_00a9fd90(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar1 == '\x01') {
    FUN_00a9fcb0(auStack_68);
  }
  else if (cVar1 == '\x11') {
    FUN_00a9fcd0(auStack_68);
  }
  else {
    FUN_00a9e080(auStack_68);
  }
  return local_44;
}

