/* Ghidra address: 01d5aa10 */
/* Ghidra symbol: FUN_01d5aa10 */


void FUN_01d5aa10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  double dVar4;
  undefined1 local_80 [48];
  undefined1 local_50 [32];
  double local_30 [2];
  
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_30[0] = (double)FUN_016eb0a0(param_1,3);
  local_30[0] = local_30[0] + 273.15;
  if (cVar1 == '\0') {
    dVar4 = (double)FUN_016ed770(param_2);
    local_30[0] = local_30[0] + dVar4;
  }
  uVar3 = 0;
  FUN_016ebb00(param_1,1,local_50,0x20);
  cVar1 = FUN_016e9de0(param_1,3);
  if (cVar1 == '\0') {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 3;
  }
  FUN_01d5a570(param_1,param_2,1,CONCAT11(uVar3,2),uVar2,local_30,local_50,local_80);
  FUN_016ea050(param_1,local_80,0x30);
  FUN_016e9f40(param_1,FUN_01d5a9b0);
  return;
}

