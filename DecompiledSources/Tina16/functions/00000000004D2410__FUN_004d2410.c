/* Ghidra address: 004d2410 */
/* Ghidra symbol: FUN_004d2410 */


void FUN_004d2410(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *local_18;
  undefined8 local_10;
  
  if ((*(ushort *)(param_1 + 0x34) & 8) != 0) {
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar1 = FUN_0044d710(&PTR_FUN_00472870,param_2,PTR_PTR_02003218);
    FUN_004134c0(uVar1);
  }
  local_18 = FUN_004dc430;
  local_10 = param_2;
  FUN_004d1420(0,&local_18);
  return;
}

