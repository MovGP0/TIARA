/* Ghidra address: 01158320 */
/* Ghidra symbol: FUN_01158320 */


void FUN_01158320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_a68 [32];
  wchar_t *local_a48;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0 [2];
  undefined8 local_990;
  longlong *local_988;
  longlong *local_980;
  longlong *local_978;
  longlong *local_970;
  undefined8 local_968;
  undefined8 local_30;
  
  local_a30 = 0;
  local_a28 = 0;
  local_a18 = 0;
  local_a20 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_a00 = 0;
  local_9f0 = 0;
  local_9f8 = 0;
  local_9e8 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  local_9c8 = 0;
  local_9d0 = 0;
  local_9c0 = 0;
  local_9b8 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_9a0[0] = 0;
  local_970 = (longlong *)0x0;
  local_978 = (longlong *)0x0;
  local_980 = (longlong *)0x0;
  local_988 = (longlong *)0x0;
  local_990 = 0;
  puVar6 = &local_968;
  for (lVar5 = 0x127; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  uVar4 = FUN_004179d0(&local_968,&DAT_01d0d0b8);
  if (local_968._3_1_ < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_968._3_1_ & 0x1f) & 0x18U) !=
            0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    uVar1 = *PTR_DAT_02005310;
    FUN_00bac3d0(&local_970);
    (**(code **)(*local_970 + 0x148))(local_970,local_9a0,L"statisticsdlg");
    (**(code **)(*local_970 + 0x108))(local_970,local_9a0[0]);
    (**(code **)(*local_970 + 0x100))(local_970,&local_978);
    FUN_00441920(&local_9a8,local_res18);
    (**(code **)(*local_978 + 0x108))(local_978,L"file",local_9a8);
    FUN_0043f750(&local_9b0,local_968._3_1_);
    (**(code **)(*local_978 + 0x108))(local_978,L"mode",local_9b0);
    (**(code **)(*local_970 + 0x148))(local_970,&local_980,L"analysis");
    (**(code **)(*local_978 + 0x98))(local_978,&local_9b8,local_980);
    (**(code **)(*local_970 + 0x148))(local_970,&local_988,L"parameter");
    (**(code **)(*local_980 + 0x98))(local_980,&local_9c0,local_988);
    local_a48 = L"Caption";
    FUN_00de8b50(&local_9c8,L"TStatisticDlg",L"Label1",local_res20);
    FUN_004168b0(&local_9d0,local_9c8);
    (**(code **)(*local_988 + 0x108))(local_988,L"name",local_9d0);
    (**(code **)(*local_988 + 0x108))(local_988,L"type",L"enum");
    FUN_01158140(auStack_a68,&local_9d8);
    FUN_00414b50(&local_990,local_9d8);
    (**(code **)(*local_988 + 0x108))(local_988,L"options",local_990);
    iVar3 = FUN_004170c0(&DAT_01158e38,local_990,1);
    if (iVar3 < 1) {
      (**(code **)(*local_988 + 0x108))(local_988,L"value",local_990);
    }
    else {
      iVar3 = FUN_004170c0(&DAT_01158e38,local_990,1);
      FUN_00416dc0(&local_9e0,local_990,1,iVar3 + -1);
      (**(code **)(*local_988 + 0x108))(local_988,L"value",local_9e0);
    }
    (**(code **)(*local_970 + 0x148))(local_970,&local_988,L"parameter");
    (**(code **)(*local_980 + 0x98))(local_980,&local_9e8,local_988);
    local_a48 = L"Caption";
    FUN_00de8b50(&local_9f0,L"TStatisticDlg",L"OptionRG",local_res20);
    FUN_004168b0(&local_9f8,local_9f0);
    (**(code **)(*local_988 + 0x108))(local_988,L"name",local_9f8);
    (**(code **)(*local_988 + 0x108))(local_988,L"type",L"enum");
    (**(code **)(*local_988 + 0x108))(local_988,L"options",L"XMAX|YMAX|CUT|XMIN|YMIN");
    (**(code **)(*local_988 + 0x108))(local_988,L"value",L"XMAX");
    (**(code **)(*local_970 + 0x148))(local_970,&local_988,L"parameter");
    (**(code **)(*local_980 + 0x98))(local_980,&local_a00,local_988);
    (**(code **)(*local_988 + 0x108))(local_988,L"name",L"Cut at");
    (**(code **)(*local_988 + 0x108))(local_988,L"type",L"real");
    local_a48 = (wchar_t *)CONCAT71(local_a48._1_7_,1);
    FUN_00b8fd60(&local_a08,local_30,uVar1,0);
    (**(code **)(*local_988 + 0x108))(local_988,L"value",local_a08);
    (**(code **)(*local_970 + 0x148))(local_970,&local_988,L"parameter");
    (**(code **)(*local_980 + 0x98))(local_980,&local_a10,local_988);
    local_a48 = L"Caption";
    FUN_00de8b50(&local_a18,L"TStatisticDlg",L"Label2",local_res20);
    FUN_004168b0(&local_a20,local_a18);
    (**(code **)(*local_988 + 0x108))(local_988,L"name",local_a20);
    (**(code **)(*local_988 + 0x108))(local_988,L"type",L"integer");
    (**(code **)(*local_988 + 0x108))(local_988,L"value",&DAT_01158f40);
    FUN_00441640(&local_a28,local_res18);
    cVar2 = FUN_00440b00(local_a28,1);
    if (cVar2 != '\0') {
      FUN_004414c0(&local_a30,local_res18,0);
      FUN_00416ad0(&local_a30,L"_statisticsdlg.xml");
      (**(code **)(*local_970 + 0x180))(local_970,local_a30,0);
    }
  }
  FUN_00414560(&local_a30,3);
  FUN_00414520(&local_a18);
  FUN_0041b800(&local_a10);
  FUN_00414480(&local_a08);
  FUN_0041b800(&local_a00);
  FUN_00414480(&local_9f8);
  FUN_00414520(&local_9f0);
  FUN_0041b800(&local_9e8);
  FUN_00414560(&local_9e0,3);
  FUN_00414520(&local_9c8);
  FUN_00417840(&local_9c0,&DAT_00b9f8e0,2);
  FUN_00414560(&local_9b0,2);
  FUN_0041b800(local_9a0);
  FUN_00414480(&local_990);
  FUN_00417840(&local_988,&LAB_00b9fca0,3);
  FUN_0041b800(&local_970);
  FUN_00417740(&local_968,&DAT_01d0d0b8);
  FUN_00414560(&local_res18,2);
  return;
}

