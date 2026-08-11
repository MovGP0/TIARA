/* Ghidra address: 006652d0 */
/* Ghidra symbol: FUN_006652d0 */


void FUN_006652d0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined **local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  local_30[0] = thunk_FUN_0417a31e();
  local_28 = 0;
  FUN_00442f70(local_20,L"Delphi%.8X",local_30,0);
  FUN_00414ad0(&DAT_020122e0,local_20[0]);
  uVar1 = FUN_00416740(DAT_020122e0);
  DAT_020122d8 = thunk_FUN_041e8323(uVar1);
  local_58 = &PTR_IMAGE_DOS_HEADER_0200c280;
  local_50 = 0x10;
  local_48 = FUN_00427ab0();
  local_40 = 0;
  FUN_00442f70(&local_38,L"ControlOfs%.8X%.8X",&local_58,1);
  FUN_00414ad0(&DAT_020122e8,local_38);
  uVar1 = FUN_00416740(DAT_020122e8);
  DAT_020122da = thunk_FUN_041e8323(uVar1);
  DAT_020122f0 = thunk_FUN_03ce67dd(L"DelphiRM_GetObjectInstance");
  DAT_02012350 = FUN_004afa90(&DAT_00473870,1);
  FUN_00664f50();
  DAT_020122b8 = FUN_00664b70(&DAT_00645920,1);
  uVar1 = FUN_00807a10(&PTR_FUN_007f2df8,1,0);
  *(undefined8 *)PTR_DAT_02005950 = uVar1;
  FUN_00781940(&DAT_0075cd78);
  uVar1 = FUN_00809eb0(&PTR_FUN_007f4918,1,0);
  *(undefined8 *)PTR_DAT_02004030 = uVar1;
  FUN_0080dd10(*(undefined8 *)PTR_DAT_02004030,1);
  DAT_02012358 = FUN_0064bb10(&PTR_FUN_0063d930,1,0);
  lVar2 = FUN_00427be0(L"USER32");
  lVar3 = FUN_004a3070(&DAT_004255c8);
  if (lVar3 == 0) {
    FUN_004a3030(&DAT_004255c8,FUN_00648710,FUN_00648700);
  }
  if (lVar2 != 0) {
    DAT_01df5b10 = FUN_00427c10(lVar2,L"AnimateWindow");
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

