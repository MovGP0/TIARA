/* Ghidra address: 01d52e30 */
/* Ghidra symbol: FUN_01d52e30 */


void FUN_01d52e30(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  undefined1 local_b0 [88];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = (undefined1)((ushort)param_3 >> 8);
  local_58 = FUN_016eb0a0(param_1,1);
  local_50 = FUN_016eb0a0(param_1,2);
  local_48 = FUN_016eb0a0(param_1,3);
  local_40 = FUN_016eb0a0(param_1,4);
  local_38 = FUN_016eb0a0(param_1,5);
  local_30 = FUN_016eb0a0(param_1,6);
  local_28 = FUN_016eb0a0(param_1,7);
  local_20 = FUN_016eb0a0(param_1,8);
  FUN_01d52760(param_1,param_2,CONCAT11(uVar1,1),2,&local_58,local_b0);
  FUN_016ea050(param_1,local_b0,0x58);
  FUN_016e9f40(param_1,FUN_01d52dd0);
  return;
}

