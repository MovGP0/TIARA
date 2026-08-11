/* Ghidra address: 01d526a0 */
/* Ghidra symbol: FUN_01d526a0 */


void FUN_01d526a0(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  undefined1 local_80 [64];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = (undefined1)((ushort)param_3 >> 8);
  local_40 = FUN_016eb0a0(param_1,1);
  local_38 = FUN_016eb0a0(param_1,2);
  local_30 = FUN_016eb0a0(param_1,3);
  local_28 = FUN_016eb0a0(param_1,4);
  local_20 = FUN_016eb0a0(param_1,5);
  FUN_01d521c0(param_1,param_2,CONCAT11(uVar1,1),2,&local_40,local_80);
  FUN_016ea050(param_1,local_80,0x40);
  FUN_016e9f40(param_1,FUN_01d52640);
  return;
}

