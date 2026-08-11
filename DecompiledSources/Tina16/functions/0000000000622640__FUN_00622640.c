/* Ghidra address: 00622640 */
/* Ghidra symbol: FUN_00622640 */


void FUN_00622640(undefined8 *param_1,char param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_006262a0(*(undefined8 *)param_1[2],&local_48,&local_40);
    FUN_006245d0(local_20,param_1 + 4);
    (**(code **)*param_1)(param_1,&local_28);
    (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],&local_50);
    pwVar2 = L"\\";
    uVar3 = local_50;
    FUN_00416cd0(&local_30,5,local_40,L"CLSID\\",local_20[0],&DAT_00622afc,local_50);
    if (param_2 == '\0') {
      if (local_28 != 0) {
        pwVar2 = L"\\ProgID";
        FUN_00416cd0(&local_80,4,local_40,L"CLSID\\",local_20[0],L"\\ProgID",uVar3);
        FUN_006247b0(local_80,local_48);
        FUN_00416cd0(&local_88,3,local_40,local_28,L"\\Clsid");
        FUN_006247b0(local_88,local_48);
        FUN_00416ba0(&local_90,local_40,local_28);
        FUN_006247b0(local_90,local_48);
      }
      FUN_006247b0(local_30,local_48);
      FUN_00416cd0(&local_98,3,local_40,L"CLSID\\",local_20[0],pwVar2,uVar3);
      FUN_006247b0(local_98,local_48);
    }
    else {
      FUN_00416cd0(&local_58,3,local_40,L"CLSID\\",local_20[0],pwVar2,uVar3);
      FUN_006246d0(local_58,0,param_1[7],local_48);
      (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],&local_38);
      iVar1 = FUN_0044f900(&DAT_00622b0c,local_38);
      if (iVar1 != 0) {
        FUN_00442050(&local_60,local_38);
        FUN_00414b50(&local_38,local_60);
      }
      FUN_006246d0(local_30,0,local_38,local_48);
      if ((*(byte *)((longlong)param_1 + 0x66) != 0) && (*PTR_DAT_02001218 != '\0')) {
        FUN_006246d0(local_30,L"ThreadingModel",
                     *(undefined8 *)
                      (&DAT_01df0c20 + (ulonglong)*(byte *)((longlong)param_1 + 0x66) * 8),local_48)
        ;
      }
      if (local_28 != 0) {
        FUN_00416ba0(&local_68,local_40,local_28);
        FUN_006246d0(local_68,0,param_1[7],local_48);
        FUN_00416cd0(&local_70,3,local_40,local_28,L"\\Clsid");
        FUN_006246d0(local_70,0,local_20[0],local_48);
        FUN_00416cd0(&local_78,4,local_40,L"CLSID\\",local_20[0],L"\\ProgID");
        FUN_006246d0(local_78,0,local_28,local_48);
      }
    }
  }
  FUN_00414560(&local_98,10);
  FUN_00414560(&local_40,5);
  return;
}

