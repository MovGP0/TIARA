/* Ghidra address: 019ea560 */
/* Ghidra symbol: FUN_019ea560 */


void FUN_019ea560(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 local_8f0 [2144];
  undefined1 local_90 [88];
  double local_38;
  undefined1 local_30;
  
  local_30 = 0;
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_38 = (double)FUN_016eb0a0(param_1,3);
  local_38 = local_38 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_38 = local_38 + dVar3;
  }
  uVar2 = 0;
  FUN_016ebb00(param_1,1,local_90,0x58);
  FUN_019e6dc0(param_1,param_2,1,CONCAT11(uVar2,2),3,&local_38,local_90,local_8f0);
  FUN_016ea050(param_1,local_8f0,0x860);
  FUN_016e9f40(param_1,FUN_019ea500);
  FUN_016e9f60(param_1,FUN_019e66b0);
  FUN_016e9fd0(param_1,FUN_019e6700);
  return;
}

