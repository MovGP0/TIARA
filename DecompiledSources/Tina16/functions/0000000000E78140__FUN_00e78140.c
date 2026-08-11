/* Ghidra address: 00e78140 */
/* Ghidra symbol: FUN_00e78140 */


void FUN_00e78140(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_120;
  undefined1 local_118 [192];
  double local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  
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
    dVar3 = (double)FUN_016ed770(param_2);
    local_58 = local_58 + dVar3;
  }
  local_50 = FUN_016eb0a0(param_1,4);
  cVar1 = FUN_016eacf0(param_1,5,2);
  local_48 = cVar1 != '\0';
  local_40 = FUN_016ea920(param_1,6,2,&local_30);
  local_38 = FUN_016ea920(param_1,7,2,&local_2f);
  FUN_016ebb00(param_1,1,local_118,0xc0);
  uVar2 = FUN_01b05c20(param_1,1);
  FUN_016ee260(param_1,&local_120,0x328,0);
  FUN_00e77440(param_1,param_2,param_3,1,2,3,&local_58,local_118,uVar2,local_120);
  FUN_016e9f40(param_1,FUN_00e77ea0);
  FUN_016e9fb0(param_1,FUN_00e76a90);
  FUN_016e9fd0(param_1,FUN_00e76b70);
  FUN_016ea010(param_1,FUN_00e76d30);
  FUN_016ea020(param_1,FUN_00e76e30);
  FUN_016e9fc0(param_1,FUN_00e76ae0);
  return;
}

