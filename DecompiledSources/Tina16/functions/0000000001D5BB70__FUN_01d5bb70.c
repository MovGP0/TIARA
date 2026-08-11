/* Ghidra address: 01d5bb70 */
/* Ghidra symbol: FUN_01d5bb70 */


void FUN_01d5bb70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  double dVar5;
  undefined1 local_118 [120];
  undefined1 local_a0 [112];
  double local_30 [2];
  
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_30[0] = (double)FUN_016eb0a0(param_1,3);
  local_30[0] = local_30[0] + 273.15;
  if (cVar1 == '\0') {
    dVar5 = (double)FUN_016ed770(param_2);
    local_30[0] = local_30[0] + dVar5;
  }
  FUN_016ebb00(param_1,1,local_a0,0x70);
  uVar3 = FUN_016e9de0(param_1,3);
  uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
  if ((char)uVar3 == '\0') {
    uVar2 = (undefined4)CONCAT71(uVar4,0xff);
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar4,3);
  }
  FUN_01d5b570(param_1,1,2,uVar2,local_30,local_a0,local_118);
  FUN_016ea050(param_1,local_118,0x78);
  FUN_016e9f40(param_1,FUN_01d5bb10);
  return;
}

