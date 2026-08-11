/* Ghidra address: 01a04950 */
/* Ghidra symbol: FUN_01a04950 */


void FUN_01a04950(longlong param_1)

{
  short sVar1;
  bool bVar2;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar1 == 0xfa) {
    FUN_00414b50(&local_28,L"Microstrip");
  }
  else if (sVar1 == 0xfb) {
    FUN_00414b50(&local_28,L"Microstrip_Shorted");
  }
  else if (sVar1 == 0xfc) {
    FUN_00414b50(&local_28,L"Microstrip_Open");
  }
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    FUN_00414b50(local_20,L" VARS: ");
  }
  else {
    FUN_00414b50(local_20,L" PARAMS: ");
  }
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar1 == 0xfa) {
    FUN_019f0400(param_1,local_40,1,0);
    FUN_00416ba0(&local_30,&DAT_01a04e34,local_40[0]);
  }
  else {
    FUN_00414480(&local_30);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_58);
  FUN_019ee820(param_1,&local_50,0x15,local_58,CONCAT44(uVar3,0xb));
  FUN_019f0400(param_1,&local_60,0,0);
  FUN_019ed1f0(param_1,&local_68,1,1);
  FUN_019ed1f0(param_1,&local_70,2,1);
  FUN_019ed1f0(param_1,&local_78,3,1);
  FUN_019ed1f0(param_1,&local_80,4,1);
  FUN_00416cd0(&local_48,0x10,local_50,&DAT_01a04e34,&DAT_01a04e34,local_60,local_30,&DAT_01a04e34,
               local_28,local_20[0],&DAT_01a04e44,local_68,&DAT_01a04e58,local_70,&DAT_01a04e6c,
               local_78,L" ER=",local_80);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_48);
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0xc0) & 0x1f)
            & 0x30U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01a022a0(param_1,local_28);
  }
  FUN_00414560(&local_80,9);
  FUN_00414560(&local_30,3);
  return;
}

