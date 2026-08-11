/* Ghidra address: 00e7ab80 */
/* Ghidra symbol: FUN_00e7ab80 */


void FUN_00e7ab80(undefined8 param_1,undefined8 param_2,short param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_110;
  undefined1 local_108 [168];
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f [7];
  
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_60 = (double)FUN_016eb0a0(param_1,3);
  local_60 = local_60 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_60 = local_60 + dVar3;
  }
  local_58 = FUN_016eb0a0(param_1,4);
  local_50 = 0x3ff0000000000000;
  cVar1 = FUN_016eacf0(param_1,5,2);
  local_48 = cVar1 != '\0';
  local_40 = FUN_016ea920(param_1,6,2,&local_30);
  local_38 = FUN_016ea920(param_1,7,2,local_2f);
  FUN_016ebb00(param_1,1,local_108,0xa8);
  uVar2 = FUN_01b05c20(param_1,1);
  FUN_016ee260(param_1,&local_110,0x110,0);
  FUN_00e78420(param_1,(longlong)param_3,1,2,3,&local_60,local_108,uVar2,local_110);
  FUN_016e9f40(param_1,FUN_00e7ab30);
  return;
}

