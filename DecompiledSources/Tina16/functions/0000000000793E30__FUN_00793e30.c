/* Ghidra address: 00793e30 */
/* Ghidra symbol: FUN_00793e30 */


void FUN_00793e30(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar2 * 0x28) = param_2;
  *(undefined8 *)(param_1[1] + 8 + lVar2 * 0x28) = param_4;
  puVar1 = (undefined8 *)(param_1[1] + 0x10 + lVar2 * 0x28);
  *puVar1 = *param_5;
  puVar1[1] = param_5[1];
  puVar1[2] = param_5[2];
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,CONCAT71((int7)((ulonglong)(lVar2 * 5) >> 8),1));
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

