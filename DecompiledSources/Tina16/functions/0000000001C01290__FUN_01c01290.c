/* Ghidra address: 01c01290 */
/* Ghidra symbol: FUN_01c01290 */


void FUN_01c01290(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  while (((lVar1 != 0 && (*(longlong *)(lVar1 + 0x80) != 0)) &&
         (*(char *)(*(longlong *)(lVar1 + 0x80) + 0xa9) == '\0'))) {
    lVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,lVar1,0);
  }
  return;
}

