/* Ghidra address: 00db6fe0 */
/* Ghidra symbol: FUN_00db6fe0 */


void FUN_00db6fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_1b0 [19];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_100 [152];
  undefined8 local_68;
  undefined8 local_60;
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
  puVar2 = local_1b0;
  for (lVar1 = 0x2c; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_8;
    param_8 = param_8 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_9 = 2;
  *(undefined8 *)(param_9 + 0x44) = local_118;
  *(undefined8 *)(param_9 + 0x46) = local_110;
  *(undefined8 *)(param_9 + 0x8a) = local_68;
  *(undefined8 *)(param_9 + 0x8c) = local_60;
  FUN_00db6bb0(param_1,param_2,param_3,param_4,&local_50,local_1b0,param_9 + 2);
  FUN_00db6bb0(param_1,param_2,param_5,param_6,&local_50,local_100,param_9 + 0x48);
  return;
}

