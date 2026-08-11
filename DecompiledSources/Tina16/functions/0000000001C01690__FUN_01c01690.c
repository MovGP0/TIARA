/* Ghidra address: 01c01690 */
/* Ghidra symbol: FUN_01c01690 */


void FUN_01c01690(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,param_2,0);
  while (((lVar1 != 0 && (*(longlong *)(lVar1 + 0x80) != 0)) &&
         (*(char *)(*(longlong *)(lVar1 + 0x80) + 0xa9) == '\0'))) {
    lVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,lVar1,0);
  }
  return;
}

