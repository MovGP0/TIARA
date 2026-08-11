/* Ghidra address: 01c99370 */
/* Ghidra symbol: FUN_01c99370 */


void FUN_01c99370(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  cVar1 = FUN_01b1ee00();
  if (cVar1 == '\0') {
    cVar1 = FUN_01c87d20(param_1);
    if (cVar1 == '\0') {
      local_38 = FUN_01c99370;
      local_30 = param_1;
      FUN_00f836b0(&local_38);
    }
    else {
      FUN_010e33a0();
      FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"StopAnalysis()",0,1);
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01bb0c18,1,*(undefined8 *)PTR_DAT_02004030);
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00441920(&local_48,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
        FUN_004414c0(&local_40,local_48,L".NET");
        FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01c9968c,local_40);
        cVar1 = FUN_01b41bc0(local_20[0],*(undefined8 *)(param_1 + 0x2788),7,0,0,
                             in_stack_ffffffffffffff70 & 0xffffffffffffff00,&PTR_DAT_01c996b4);
        if (cVar1 != '\0') {
          FUN_0043f780(&local_50,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
          FUN_00416cd0(&local_28,3,plVar3[0xef],&DAT_01c996c8,local_50);
          if (*PTR_DAT_020052b8 != '\0') {
            FUN_00416ad0(&local_28,&DAT_01c996dc);
          }
          FUN_00416cd0(&local_58,5,&DAT_01c996f0,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c9968c,
                       L"pcb.exe",&DAT_01c996f0);
          FUN_004414c0(&local_68,local_20[0],L".HID");
          FUN_00416cd0(&local_60,4,&DAT_01c996f0,local_68,&DAT_01c996f0,local_28);
          FUN_01d44af0(local_58,local_60,1);
        }
      }
      FUN_00410f20(plVar3);
    }
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_28,2);
  return;
}

