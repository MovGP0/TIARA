/* Ghidra address: 00db6e70 */
/* Ghidra symbol: FUN_00db6e70 */


void FUN_00db6e70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_e8 [19];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = *param_7;
  uStack_48 = param_7[1];
  uStack_40 = param_7[2];
  uStack_38 = param_7[3];
  uStack_30 = param_7[4];
  puVar2 = local_e8;
  for (lVar1 = 0x13; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_8;
    param_8 = param_8 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_9 = 4;
  FUN_00db6bb0(param_1,param_2,param_3,param_4,&local_50,local_e8,param_9 + 2);
  FUN_00db6bb0(param_1,param_2,param_4,param_5,&local_50,local_e8,param_9 + 0x48);
  FUN_00db6bb0(param_1,param_2,param_3,param_6,&local_50,local_e8,param_9 + 0x8e);
  FUN_00db6bb0(param_1,param_2,param_6,param_5,&local_50,local_e8,param_9 + 0xd4);
  return;
}

