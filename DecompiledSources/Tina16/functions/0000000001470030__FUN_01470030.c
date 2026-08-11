/* Ghidra address: 01470030 */
/* Ghidra symbol: FUN_01470030 */


void FUN_01470030(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414ad0(param_1 + 0x7f0,L"noname.py");
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02005360,L"\\Examples\\Python\\");
  FUN_00416ba0(&local_20,local_28,L"programs\\bubblesort.py");
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x7e8));
  }
  cVar1 = FUN_00440a20(local_20,1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x80a) == '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
    (**(code **)(*plVar2 + 0xd8))(plVar2,local_20);
    FUN_00414ad0(param_1 + 0x7f0,local_20);
  }
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02005360,L"\\Examples\\Python");
  FUN_00724420(*(undefined8 *)(param_1 + 0x6c0),local_28);
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02005360,L"\\Examples\\Python");
  FUN_00724420(*(undefined8 *)(param_1 + 0x718),local_28);
  FUN_0146fd80(param_1);
  FUN_0146fe10(param_1);
  FUN_0146ee50(param_1,10);
  cVar1 = FUN_01b251d0(L"Main",L"PyWine");
  if (cVar1 != '\0') {
    FUN_00416cd0(&local_20,3,*(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x108),&DAT_014703c8,
                 L"wine.txt");
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)PTR_DAT_02002560);
    local_38 = 0;
    FUN_00442f70(&local_30,L"FIsRunningOnWine: %d",&local_40,0);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
    local_40 = *(undefined8 *)PTR_DAT_02002328;
    local_38 = 0x11;
    FUN_00442f70(&local_48,L"FWineHostName: %s",&local_40,0);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
    (**(code **)(*plVar2 + 0x100))(plVar2,local_20);
    FUN_00410f20(plVar2);
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,3);
  return;
}

