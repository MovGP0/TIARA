/* Ghidra address: 00dde530 */
/* Ghidra symbol: FUN_00dde530 */


void FUN_00dde530(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_007f9b70(param_1,1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x510) != 0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x510) + 0x18))(*(longlong **)(lVar1 + 0x510));
  }
  return;
}

