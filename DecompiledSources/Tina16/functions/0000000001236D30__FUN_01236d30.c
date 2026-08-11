/* Ghidra address: 01236d30 */
/* Ghidra symbol: FUN_01236d30 */


void FUN_01236d30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_1;
  uStack_30 = param_1[1];
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  FUN_01236c30(&local_98,0x4000000000000000,0);
  FUN_01236c60(local_68,&local_38,&local_98);
  FUN_01236c60(&local_98,&local_38,&local_58);
  FUN_01236c30(local_a8,0x4010000000000000,0);
  FUN_01236c60(local_78,&local_98,local_a8);
  FUN_01236c60(local_a8,&local_48,&local_48);
  FUN_01236f90(&local_98,local_a8,local_78);
  FUN_01236ee0(local_88,&local_98);
  FUN_01236cd0(&local_98,&local_48);
  FUN_01236a70(local_a8,&local_98,local_88);
  FUN_01236b60(&local_98,local_a8,local_68);
  *param_4 = local_98;
  param_4[1] = uStack_90;
  FUN_01236cd0(&local_98,&local_48);
  FUN_01236f90(local_a8,&local_98,local_88);
  FUN_01236b60(&local_98,local_a8,local_68);
  *param_5 = local_98;
  param_5[1] = uStack_90;
  return;
}

