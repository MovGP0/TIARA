/* Ghidra address: 00965df0 */
/* Ghidra symbol: FUN_00965df0 */


void FUN_00965df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_30;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_10 = FUN_008f9510(&PTR_FUN_008f6d80,1,param_2);
  local_48 = param_5;
  local_40 = param_6;
  FUN_00965c80(param_1,local_10,param_3,param_4);
  local_18 = *(longlong *)(param_1 + 0x30);
  local_20 = local_10;
  FUN_0059ba60(local_18 + 8,&local_20);
  return;
}

