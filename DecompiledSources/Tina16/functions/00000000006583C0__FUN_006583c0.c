/* Ghidra address: 006583c0 */
/* Ghidra symbol: FUN_006583c0 */


void FUN_006583c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00657060(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18),param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

