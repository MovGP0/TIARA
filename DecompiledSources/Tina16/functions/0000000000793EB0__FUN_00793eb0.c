/* Ghidra address: 00793eb0 */
/* Ghidra symbol: FUN_00793eb0 */


void FUN_00793eb0(longlong *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x28);
  local_40 = *puVar1;
  uStack_38 = puVar1[1];
  uStack_30 = puVar1[2];
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x28);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  (**(code **)(*param_1 + 0x18))(param_1,&local_40,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

