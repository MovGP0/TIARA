/* Ghidra address: 016b1740 */
/* Ghidra symbol: FUN_016b1740 */


void FUN_016b1740(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0043f750(&local_58,iVar2);
      FUN_00416ba0(local_50,L"TinaId",local_58);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
                (*(longlong **)(param_1 + 0x58),local_50[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),local_30);
  FUN_00450070(&local_60,local_30[0],&DAT_016b1a9c,L"Plus",1);
  FUN_00414b50(local_30,local_60);
  FUN_00450070(&local_68,local_30[0],&DAT_016b1ac4,L"Minus",1);
  FUN_00414b50(local_30,local_68);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                (*(longlong **)(param_1 + 0x48),&local_40,iVar2);
      FUN_00450070(&local_70,local_40,&DAT_016b1a9c,L"Plus",1);
      FUN_00414b50(&local_40,local_70);
      FUN_00450070(&local_78,local_40,&DAT_016b1ac4,L"Minus",1);
      FUN_00414b50(&local_40,local_78);
      FUN_0043f750(&local_80,iVar2);
      FUN_00416ba0(&local_38,L"TinaId",local_80);
      FUN_00416cd0(&local_90,3,&DAT_016b1aec,local_40,&DAT_016b1aec);
      FUN_00ea9000(&local_88,local_30[0],local_90,local_38,2);
      FUN_00414b50(local_30,local_88);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))(*(longlong **)(param_1 + 0x40),local_30[0]);
  FUN_00414560(&local_90,9);
  FUN_00414560(&local_40,3);
  return;
}

