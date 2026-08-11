/* Ghidra address: 01ccb260 */
/* Ghidra symbol: FUN_01ccb260 */


void FUN_01ccb260(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = FUN_004b6da0(uVar1);
  FUN_004b6dc0(uVar1,lVar2 + param_2 * 0x18);
  FUN_01ccb3a0(param_1,param_3,&local_50,&local_58);
  local_48 = local_50;
  local_40 = local_58;
  FUN_00c44940(&local_68,&local_48);
  *param_4 = local_68;
  param_4[1] = uStack_60;
  return;
}

