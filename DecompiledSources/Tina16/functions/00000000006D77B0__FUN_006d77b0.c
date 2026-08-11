/* Ghidra address: 006d77b0 */
/* Ghidra symbol: FUN_006d77b0 */


void FUN_006d77b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_006d73d0(param_1,param_2,1,(*(ushort *)(param_1 + 0x34) & 0x10) == 0);
  if (lVar1 == param_2) {
    lVar1 = 0;
  }
  FUN_006d6860(param_2,0);
  *(undefined8 *)(param_2 + 0x498) = 0;
  FUN_004aee50(*(undefined8 *)(param_1 + 0x528),param_2,0);
  FUN_006d78a0(param_1,lVar1);
  return;
}

