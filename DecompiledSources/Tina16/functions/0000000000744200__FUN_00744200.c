/* Ghidra address: 00744200 */
/* Ghidra symbol: FUN_00744200 */


void FUN_00744200(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_0065a660(param_1,param_2);
  if ((*(int *)(param_2 + 0x10) == 0) || (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != param_1))
  {
    FUN_004aee50(*(undefined8 *)(param_1 + 0x4b0),**(undefined8 **)(param_2 + 8),0);
  }
  else {
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),**(undefined8 **)(param_2 + 8));
    if (iVar1 < 0) {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x4b0),**(undefined8 **)(param_2 + 8));
    }
  }
  return;
}

