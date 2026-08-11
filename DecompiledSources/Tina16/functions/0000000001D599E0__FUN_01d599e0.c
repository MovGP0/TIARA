/* Ghidra address: 01d599e0 */
/* Ghidra symbol: FUN_01d599e0 */


void FUN_01d599e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong local_98;
  undefined1 local_90 [64];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = *param_3;
  uStack_48 = param_3[1];
  uStack_40 = param_3[2];
  uStack_38 = param_3[3];
  uStack_30 = param_3[4];
  FUN_016ebb00(param_1,6,local_90,0x40);
  FUN_016ee260(param_1,&local_98,0x108,0);
  *(undefined1 *)(local_98 + 0x30) = 1;
  FUN_01d593e0(param_1,param_2,1,2,&local_50,local_90,local_98,1);
  FUN_016e9f40(param_1,FUN_01d59990);
  FUN_016e9fa0(param_1,FUN_01d59940);
  return;
}

