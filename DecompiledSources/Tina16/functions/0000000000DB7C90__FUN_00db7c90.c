/* Ghidra address: 00db7c90 */
/* Ghidra symbol: FUN_00db7c90 */


void FUN_00db7c90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  double dVar3;
  undefined8 local_1b8;
  undefined1 local_1b0 [352];
  double local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = DAT_01ed4208;
  uStack_48 = DAT_01ed4210;
  uStack_40 = DAT_01ed4218;
  uStack_38 = DAT_01ed4220;
  uStack_30 = DAT_01ed4228;
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_50 = (double)FUN_016eb0a0(param_1,3);
  local_50 = local_50 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_50 = local_50 + dVar3;
  }
  FUN_016ebb00(param_1,1,local_1b0,0x160);
  FUN_016ee260(param_1,&local_1b8,0x238,0);
  sVar2 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0xf8))(*(longlong **)(param_1 + 0x128));
  if (sVar2 == 0x19a) {
    FUN_00db6fe0(param_1,param_2,1,2,3,2,&local_50,local_1b0,local_1b8);
  }
  else if (sVar2 == 0x19b) {
    FUN_00db6fe0(param_1,param_2,1,2,3,4,&local_50,local_1b0,local_1b8);
  }
  else if (sVar2 == 0x19c) {
    FUN_00db6fe0(param_1,param_2,1,2,4,3,&local_50,local_1b0,local_1b8);
  }
  else if (sVar2 == 0x19d) {
    FUN_00db6fe0(param_1,param_2,1,2,2,1,&local_50,local_1b0,local_1b8);
  }
  FUN_016e9f40(param_1,FUN_00db7280);
  FUN_016e9fa0(param_1,FUN_00db1300);
  FUN_016e9fb0(param_1,FUN_00db1360);
  FUN_016e9f60(param_1,FUN_00db1e70);
  FUN_016e9f70(param_1,FUN_00db1ec0);
  FUN_016e9fd0(param_1,FUN_00db1f70);
  return;
}

