/* Ghidra address: 01ca13b0 */
/* Ghidra symbol: FUN_01ca13b0 */


void FUN_01ca13b0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  cVar1 = FUN_01b1d9d0(L"pcbviewer.exe",0);
  if (cVar1 == '\0') {
    FUN_00416cd0(&local_40,5,&DAT_01ca1670,*(undefined8 *)PTR_DAT_020049a0,&DAT_01ca1680,
                 L"pcbviewer.exe",&DAT_01ca1670);
    FUN_01d44af0(local_40,0,1);
    while (*(char *)(*(longlong *)PTR_DAT_02001d08 + 0x709) == '\0') {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(**(longlong **)PTR_DAT_02003a60 + 0x10))
            (*(longlong **)PTR_DAT_02003a60,&local_38,L"ComponentButtons",L"BBoard",0);
  FUN_004b4b10(plVar3,local_38);
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1);
  FUN_00416cd0(local_30,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01ca1680,local_48);
  puVar4 = (undefined8 *)FUN_01c8a3c0(param_1,0);
  FUN_00416cd0(&local_50,5,L"NewBreadBoard(",local_30[0],&DAT_01ca1708,*puVar4,&DAT_01ca1718);
  (**(code **)(*plVar2 + 0x78))(plVar2,local_50);
  FUN_019ad9f0(*(undefined8 *)(param_1 + 0x27a8),plVar2,0);
  FUN_0043f750(&local_60,param_2);
  FUN_00416cd0(&local_58,3,L"BreadBoardComplete(",local_60,&DAT_01ca1718);
  (**(code **)(*plVar2 + 0x78))(plVar2,local_58);
  FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar2,0,1);
  FUN_00410f20(plVar2);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_60,7);
  return;
}

