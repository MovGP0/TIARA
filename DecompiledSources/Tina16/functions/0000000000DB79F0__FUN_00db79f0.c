/* Ghidra address: 00db79f0 */
/* Ghidra symbol: FUN_00db79f0 */


void FUN_00db79f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  double dVar2;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined1 local_e8 [152];
  double local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_100[0] = 0;
  local_118 = 0;
  cVar1 = FUN_016ebc30(param_1,1);
  if (cVar1 == '\x01') {
    local_50 = DAT_01ed4208;
    uStack_48 = DAT_01ed4210;
    uStack_40 = DAT_01ed4218;
    uStack_38 = DAT_01ed4220;
    uStack_30 = DAT_01ed4228;
    cVar1 = FUN_016eacf0(param_1,2,2);
    local_50 = (double)FUN_016eb0a0(param_1,3);
    local_50 = local_50 + 273.15;
    if (cVar1 == '\0') {
      dVar2 = (double)FUN_016ed770(param_2);
      local_50 = local_50 + dVar2;
    }
    FUN_016ebb00(param_1,1,local_e8,0x98);
    FUN_016ee260(param_1,&local_f0,0x468,0);
    FUN_00db6e70(param_1,param_2,1,2,3,4,&local_50,local_e8,local_f0);
    FUN_016e9f40(param_1,FUN_00db7230);
    FUN_016e9fa0(param_1,FUN_00db1300);
    FUN_016e9fb0(param_1,FUN_00db1360);
    FUN_016e9f60(param_1,FUN_00db1e70);
    FUN_016e9f70(param_1,FUN_00db1ec0);
    FUN_016e9fd0(param_1,FUN_00db1f70);
  }
  else {
    FUN_01b20020(&local_118,*(undefined8 *)(param_1 + 0x128),&DAT_00db7c8c);
    local_110 = local_118;
    local_108 = 0x11;
    FUN_00442f70(local_100,L"Bridge rectifier Spice3F5 model is not supported (%s)",&local_110,0);
    FUN_01b05000(local_100[0],0);
  }
  FUN_00414480(&local_118);
  FUN_00414480(local_100);
  return;
}

