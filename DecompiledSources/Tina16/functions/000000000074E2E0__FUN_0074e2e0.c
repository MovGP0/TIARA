/* Ghidra address: 0074e2e0 */
/* Ghidra symbol: FUN_0074e2e0 */


void FUN_0074e2e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))(*(longlong **)(param_1 + 0xa8));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
              (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
              (*(longlong **)(param_1 + 0x98),*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x140)
              );
  }
  FUN_0074e0e0(param_1);
  return;
}

