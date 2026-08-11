/* Ghidra address: 00c738e0 */
/* Ghidra symbol: FUN_00c738e0 */


void FUN_00c738e0(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  FUN_006558e0(param_1);
  FUN_00c72470(param_1[0xa5],uVar2 & 0xffffffff);
  return;
}

