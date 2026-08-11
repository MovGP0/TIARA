/* Ghidra address: 00c45d50 */
/* Ghidra symbol: FUN_00c45d50 */


void FUN_00c45d50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = param_3[2];
  uStack_40 = param_3[3];
  local_68 = param_3[4];
  uStack_60 = param_3[5];
  local_58 = param_3[6];
  uStack_50 = param_3[7];
  FUN_00c45620(param_1,&local_38,&local_48,&local_58,&local_68,param_2,&local_78,&local_88,&local_98
               ,&local_a8);
  *param_3 = local_78;
  param_3[1] = uStack_70;
  param_3[2] = local_88;
  param_3[3] = uStack_80;
  param_3[4] = local_a8;
  param_3[5] = uStack_a0;
  param_3[6] = local_98;
  param_3[7] = uStack_90;
  return;
}

