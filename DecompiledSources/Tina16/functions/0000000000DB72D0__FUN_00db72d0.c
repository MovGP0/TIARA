/* Ghidra address: 00db72d0 */
/* Ghidra symbol: FUN_00db72d0 */


void FUN_00db72d0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  double dVar3;
  undefined8 local_f0;
  undefined1 local_e8 [152];
  double local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = DAT_01ed4208;
  local_48 = DAT_01ed4210;
  local_40 = DAT_01ed4218;
  local_38 = DAT_01ed4220;
  local_30 = DAT_01ed4228;
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_30._2_6_ = (undefined6)((ulonglong)DAT_01ed4228 >> 0x10);
    local_30._0_1_ = (byte)DAT_01ed4228;
    local_30._0_2_ = (ushort)(byte)local_30;
  }
  else {
    uVar1 = FUN_016eacf0(param_1,7,3);
    local_30._0_2_ = CONCAT11(uVar1,(byte)local_30);
  }
  cVar2 = FUN_016eacf0(param_1,2,2);
  local_50 = (double)FUN_016eb0a0(param_1,3);
  local_50 = local_50 + 273.15;
  if (cVar2 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_50 = local_50 + dVar3;
  }
  local_48 = FUN_016eb0a0(param_1,4);
  cVar2 = FUN_016eacf0(param_1,5,2);
  if (cVar2 == '\0') {
    local_40 = (ulonglong)local_40._1_7_ << 8;
  }
  else {
    local_40 = CONCAT71(local_40._1_7_,1);
  }
  local_38 = FUN_016ea920(param_1,6,2,&local_30);
  if ((byte)(local_30._1_1_ - 1U) == 0xff) {
    FUN_016ebb00(param_1,1,local_e8,0x98);
    FUN_016ee260(param_1,&local_f0,0x118,0);
    FUN_00db6bb0(param_1,param_2,1,2,&local_50,local_e8,local_f0);
    FUN_016e9f40(param_1,FUN_00db7110);
    cVar2 = FUN_00db2390(param_2);
    if (cVar2 == '\0') {
      FUN_016e9f70(param_1,FUN_00db1ac0);
      FUN_016e9fa0(param_1,FUN_00db10f0);
    }
    FUN_016e9fb0(param_1,FUN_00db1260);
    FUN_016e9fd0(param_1,FUN_00db1e00);
    FUN_016e9ff0(param_1,FUN_00db13d0);
    FUN_016ea040(param_1,FUN_00db1830);
  }
  else if ((byte)(local_30._1_1_ - 1U) < 2) {
    FUN_00db6da0(param_1,1,2,local_30._1_1_);
  }
  return;
}

