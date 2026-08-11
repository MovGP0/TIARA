/* Ghidra address: 00653870 */
/* Ghidra symbol: FUN_00653870 */


void FUN_00653870(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_4;
  uStack_38 = param_4[1];
  uStack_30 = param_4[2];
  local_50[0] = FUN_00653630(param_1,param_2);
  FUN_00652f60(*(undefined8 *)(param_1 + 0x70),param_2,local_50,param_3,&local_40,
               *(undefined8 *)(param_1 + 0x80),0);
  return;
}

