/* Ghidra address: 01266af0 */
/* Ghidra symbol: FUN_01266af0 */


void FUN_01266af0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
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
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  FUN_00414610(param_5);
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    FUN_00de8b50(&local_28,L"TfrmBusWireProps",L"lblID",param_5,L"Caption");
    FUN_004168b0(&local_30,local_28);
    FUN_004169a0(&local_38,param_1 + 0x2d8);
    FUN_01250440(local_20,param_2,param_3,param_4,local_30,&PTR_DAT_012672f0,local_38);
  }
  if (*(char *)(param_1 + 0x3d8) == '\0') {
    FUN_00de8b50(&local_40,L"TfrmBusWireProps",L"cbShowID",param_5,L"Caption");
    FUN_004168b0(&local_48,local_40);
    FUN_01250950(param_2,param_3,param_4,local_48,&PTR_DAT_01267324,*(undefined1 *)(param_1 + 0x3d8)
                );
  }
  cVar1 = FUN_017c3740(param_1);
  if (cVar1 == '\0') {
    FUN_00de8b50(&local_58,L"TfrmBusWireProps",L"rbOutput",param_5,L"Caption");
    FUN_00de8b50(&local_60,L"TfrmBusWireProps",L"rbDigOutput",param_5,L"Caption");
    FUN_00416310(&local_50,4,local_58,&DAT_01267350,local_60,&DAT_01267380);
    FUN_004168b0(&local_10,local_50);
    if (*(char *)(param_1 + 0x3f9) != '\0') {
      FUN_0041ddd0(&local_78,&PTR_PTR_01242040);
      FUN_00de8a20(&local_70,L"TSCXMLConverter",L"sOutputType",param_5,local_78);
      FUN_004168b0(&local_80,local_70);
      FUN_01250bc0(&local_68,param_2,param_3,param_4,local_80,&PTR_DAT_012673e4,local_10,
                   *(undefined1 *)(param_1 + 0x3f9));
    }
    if (*(char *)(param_1 + 0x3dc) != '\0') {
      FUN_00de8b50(&local_88,L"TfrmBusWireProps",L"cbShowSignal",param_5,L"Caption");
      FUN_004168b0(&local_90,local_88);
      FUN_01250950(param_2,param_3,param_4,local_90,&PTR_DAT_01267420,
                   *(undefined1 *)(param_1 + 0x3dc));
    }
    FUN_00de8fd0(&local_98,L"TfrmBusWireProps",L"cbxBusEntry",L"Items",param_5,&DAT_01267470,1,0);
    FUN_004168b0(&local_10,local_98);
    if (*(char *)(param_1 + 0x3da) != '\0') {
      FUN_00de8b50(&local_a8,L"TfrmBusWireProps",L"lblVusEntry",param_5,L"Caption");
      FUN_004168b0(&local_b0,local_a8);
      FUN_01250bc0(&local_a0,param_2,param_3,param_4,local_b0,&PTR_DAT_012674a4,local_10,
                   *(undefined1 *)(param_1 + 0x3da));
    }
    if (*(char *)(param_1 + 0x3f8) != '\0') {
      FUN_00de8b50(&local_b8,L"TfrmBusWireProps",L"cbFaulty",param_5,L"Caption");
      FUN_004168b0(&local_c0,local_b8);
      FUN_01250950(param_2,param_3,param_4,local_c0,&DAT_012674d8,*(char *)(param_1 + 0x3f8) != '\0'
                  );
    }
  }
  FUN_00414480(&local_c0);
  FUN_00414520(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414520(&local_a8);
  FUN_0041b800(&local_a0);
  FUN_00414520(&local_98);
  FUN_00414480(&local_90);
  FUN_00414520(&local_88);
  FUN_00414560(&local_80,2);
  FUN_00414520(&local_70);
  FUN_0041b800(&local_68);
  FUN_004145c0(&local_60,3);
  FUN_00414480(&local_48);
  FUN_00414520(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414520(&local_28);
  FUN_0041b800(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(&param_5);
  return;
}

