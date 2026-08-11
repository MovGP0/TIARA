/* Ghidra address: 0142a7b0 */
/* Ghidra symbol: FUN_0142a7b0 */


void FUN_0142a7b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  cVar2 = FUN_01d3f2a0(*(undefined8 *)(param_1 + 0x710));
  if (cVar2 != '\0') {
    FUN_00414b50(local_20,*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x710) + 0x1a8) + 0x38));
  }
  FUN_00441640(&local_30,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_00416cd0(&local_28,3,local_30,local_20[0],L"_default_data_file.txt");
  cVar2 = FUN_00440a20(local_28,1);
  if (cVar2 == '\0') {
    pwVar4 = L"_default_data_file.txt";
    FUN_00416cd0(&local_28,4,*(undefined8 *)PTR_DAT_020049a0,L"\\SpiceLib\\",local_20[0],
                 L"_default_data_file.txt");
    cVar2 = FUN_00440a20(local_28,1);
    if (cVar2 == '\0') {
      lVar3 = FUN_0160d750(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x718));
      if (lVar3 != 0) {
        FUN_01773d60(lVar3);
        FUN_00416cd0(local_40,3,L"PMBus data file cleared because file not found: ",local_20[0],
                     L"_default_data_file.txt",pwVar4);
        FUN_0072d440(local_40[0],2,4,0);
        *(undefined1 *)(param_1 + 0x708) = 1;
        (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x298))(*(longlong **)(param_1 + 0x6f0));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),0);
      }
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_28);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
      (**(code **)(*plVar1 + 0xd8))(plVar1,local_28);
    }
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_28);
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return;
}

