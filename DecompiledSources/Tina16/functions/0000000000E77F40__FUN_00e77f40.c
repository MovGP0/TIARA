/* Ghidra address: 00e77f40 */
/* Ghidra symbol: FUN_00e77f40 */


void FUN_00e77f40(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  double dVar2;
  undefined2 *local_108;
  undefined1 local_100 [168];
  double local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  byte local_2e;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_2e = 0;
  }
  else {
    local_2e = FUN_016eacf0(param_1,8,4);
  }
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_58 = (double)FUN_016eb0a0(param_1,3);
  local_58 = local_58 + 273.15;
  if (cVar1 == '\0') {
    dVar2 = (double)FUN_016ed770(param_2);
    local_58 = local_58 + dVar2;
  }
  local_50 = FUN_016eb0a0(param_1,4);
  cVar1 = FUN_016eacf0(param_1,5,2);
  local_48 = cVar1 != '\0';
  local_40 = FUN_016ea920(param_1,6,2,&local_30);
  local_38 = FUN_016ea920(param_1,7,2,&local_2f);
  FUN_016ebb00(param_1,1,local_100,0xa8);
  FUN_016ee260(param_1,&local_108,0x118,0);
  *local_108 = (short)param_3;
  if (local_2e < 3) {
    FUN_00e75cb0(param_1,param_3,1,2,3,&local_58,local_100,local_108);
    FUN_016e9f40(param_1,FUN_00e77e50);
    FUN_016e9f60(param_1,FUN_00e74c90);
    FUN_016e9f70(param_1,FUN_00e74e70);
    FUN_016e9ff0(param_1,FUN_00e74540);
    FUN_016ea040(param_1,FUN_00e74b20);
  }
  else if (local_2e == 3) {
    FUN_00e76710(param_1,param_3,1,2,3,&local_58,local_100);
  }
  return;
}

