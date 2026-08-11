/* Ghidra address: 01d59b60 */
/* Ghidra symbol: FUN_01d59b60 */


void FUN_01d59b60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = FUN_016eb0a0(param_1,1);
  local_38 = FUN_016eb0a0(param_1,2);
  local_30 = FUN_016eb0a0(param_1,3);
  local_28 = FUN_016eb0a0(param_1,4);
  local_20 = FUN_016eb0a0(param_1,5);
  cVar1 = FUN_016ebc30(param_1,6);
  if (cVar1 == '\x01') {
    FUN_01d599e0(param_1,param_2,&local_40);
  }
  else if (cVar1 == '\x02') {
    FUN_01d59aa0(param_1,param_2,&local_40);
  }
  else {
    FUN_01b04d70(0x134,&LAB_01d59c1c,0);
  }
  return;
}

