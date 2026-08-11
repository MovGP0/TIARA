/* Ghidra address: 01d591b0 */
/* Ghidra symbol: FUN_01d591b0 */


void FUN_01d591b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = FUN_016eb0a0(param_1,1);
  local_88 = FUN_016eb0a0(param_1,2);
  local_80 = FUN_016eb0a0(param_1,3);
  local_78 = FUN_016eb0a0(param_1,4);
  local_70 = FUN_016eb0a0(param_1,5);
  local_68 = FUN_016eb0a0(param_1,6);
  local_60 = FUN_016eb0a0(param_1,7);
  local_58 = FUN_016eb0a0(param_1,8);
  local_50 = FUN_016eb0a0(param_1,9);
  local_48 = FUN_016eb0a0(param_1,10);
  local_40 = FUN_016eb0a0(param_1,0xb);
  local_38 = FUN_016eb0a0(param_1,0xc);
  local_30 = FUN_016eb0a0(param_1,0xd);
  cVar1 = FUN_016ebc30(param_1,0xe);
  if (cVar1 == '\x01') {
    FUN_01d58f30(param_1,param_2,&local_90,param_3);
  }
  else if (cVar1 == '\x02') {
    FUN_01d59070(param_1,param_2,&local_90,param_3);
  }
  else {
    FUN_01b04d70(0x134,&LAB_01d592fc,0);
  }
  return;
}

