/* Ghidra address: 01a04110 */
/* Ghidra symbol: FUN_01a04110 */


void FUN_01a04110(longlong param_1)

{
  bool bVar1;
  double dVar2;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_30[0] = 0;
  local_38 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_40 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    FUN_00414b50(local_20,L" VARS: ");
  }
  else {
    FUN_00414b50(local_20,L" PARAMS: ");
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_40);
  FUN_019ee820(param_1,&local_38,0x15,local_40,CONCAT44(uVar3,0xb));
  FUN_019f0400(param_1,&local_48,0,0);
  FUN_019f0400(param_1,&local_50,1,0);
  FUN_019f0400(param_1,&local_58,2,0);
  FUN_019ed1f0(param_1,&local_60,1,1);
  dVar2 = (double)FUN_019ed630(param_1,2,1);
  FUN_016b9450(&local_68,dVar2 / 100.0);
  FUN_00416880(&local_70,local_68);
  FUN_00416cd0(local_30,0xe,local_38,&DAT_01a044c0,&DAT_01a044c0,local_48,&DAT_01a044c0,local_50,
               &DAT_01a044c0,local_58,L"  PotMeter",local_20[0],L"Res=",local_60,L" Percent=",
               local_70);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_30[0]);
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0xc0) & 0x1f)
            & 0x30U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_01a022a0(param_1,L"PotMeter");
  }
  FUN_00414480(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,7);
  FUN_00414480(local_20);
  return;
}

