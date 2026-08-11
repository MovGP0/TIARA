/* Ghidra address: 01c01230 */
/* Ghidra symbol: FUN_01c01230 */


void FUN_01c01230(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x298))(param_1);
  while ((lVar1 != 0 &&
         ((*(longlong *)(lVar1 + 0x80) == 0 ||
          ((*(longlong *)(lVar1 + 0x80) != 0 &&
           (*(char *)(*(longlong *)(lVar1 + 0x80) + 0xa9) == '\0'))))))) {
    lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,lVar1,0);
  }
  return;
}

