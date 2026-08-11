/* Ghidra address: 013908e0 */
/* Ghidra symbol: FUN_013908e0 */


void FUN_013908e0(undefined8 param_1,byte param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  wchar_t *pwVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *PTR_DAT_02002ce0 = 0;
  *(undefined8 *)PTR_DAT_02005168 = 0;
  uVar1 = FUN_01b07df0(param_3);
  FUN_017ca500(8,param_3,uVar1,param_2);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_017d2010(param_3,1);
    *PTR_DAT_02005408 = *PTR_DAT_02002de8;
    *PTR_DAT_02002de8 = 0;
  }
  FUN_016f5570(param_3,0);
  if ((0x57 < (int)param_3[0x61]) && (*(char *)(param_3[0x14] + 0x218) == '\0')) {
    FUN_013905a0(4);
  }
  FUN_01b077a0(param_3,1);
  (**(code **)(*param_3 + 8))(param_3);
  param_3[0x2d] = param_3[0x28];
  puVar2 = (undefined *)param_3[0x28];
  if ((*(char *)((longlong)param_3 + 0x335) == '\0') &&
     (puVar2 = PTR_DAT_02002b78, *PTR_DAT_02002b78 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  FUN_019af390(param_3[0x14],8,uVar1,*(undefined1 *)((longlong)param_3 + 0x339));
  uVar3 = FUN_016f66e0(param_3);
  if (param_2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (param_2 & 0x1f) & 3U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (((bVar4) && (PTR_DAT_02004010[0x813] != '\x02')) && (PTR_DAT_02004010[0x813] != '\x03')) {
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1550),0);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1558),0);
  }
  pwVar5 = L"TINA.INI";
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01390b18,L"TINA.INI");
  FUN_01664230(param_3[0x22],local_20[0],*(undefined1 *)((longlong)param_3 + 0x13d9),
               *(undefined4 *)((longlong)param_3 + 0x13ec),(ulonglong)pwVar5 & 0xffffffffffffff00);
  FUN_00414480(local_20);
  return;
}

