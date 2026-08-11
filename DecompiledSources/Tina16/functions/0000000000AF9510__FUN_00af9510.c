/* Ghidra address: 00af9510 */
/* Ghidra symbol: FUN_00af9510 */


undefined8 FUN_00af9510(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1[0xf4] == 0) {
    uVar1 = (**(code **)(*param_1 + 0x438))
                      (*param_1,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                       param_1[0xe8],param_1);
  }
  else {
    uVar1 = (*(code *)param_1[0xf4])(param_1[0xf5],param_1,param_1[0xe8]);
  }
  FUN_0064cb30(uVar1,0xfffff060);
  return uVar1;
}

