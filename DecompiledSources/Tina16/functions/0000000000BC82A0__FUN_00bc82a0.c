/* Ghidra address: 00bc82a0 */
/* Ghidra symbol: FUN_00bc82a0 */


short * FUN_00bc82a0(longlong param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  
  for (; ((sVar1 = *param_2, sVar1 != 0 && (sVar1 != (short)param_3)) &&
         (sVar2 = (**(code **)(param_1 + 0x1b8))(*(undefined8 *)(param_1 + 0x1c0),param_3),
         sVar1 != sVar2)); param_2 = param_2 + 1) {
  }
  if (*param_2 == 0) {
    param_2 = (short *)0x0;
  }
  return param_2;
}

