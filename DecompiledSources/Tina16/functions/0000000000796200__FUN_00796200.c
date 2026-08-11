/* Ghidra address: 00796200 */
/* Ghidra symbol: FUN_00796200 */


void FUN_00796200(longlong *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x20);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x20);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  (**(code **)(*param_1 + 0x18))(param_1,&local_38,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

