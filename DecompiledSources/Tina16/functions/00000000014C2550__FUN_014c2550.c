/* Ghidra address: 014c2550 */
/* Ghidra symbol: FUN_014c2550 */


longlong * FUN_014c2550(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_res8 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar4 + 0x2c) = 0x2c;
  FUN_00450070(local_30,local_res8[0],&DAT_014c279c,L"&nbsp;",1);
  FUN_00414b50(local_res8,local_30[0]);
  iVar1 = FUN_0044f900(&DAT_014c27c8,local_res8[0]);
  iVar2 = FUN_0044f900(&DAT_014c27d8,local_res8[0]);
  iVar3 = FUN_0044f900(&DAT_014c27c8,local_res8[0]);
  FUN_005b8960(&local_38,local_res8[0],iVar1 + 1,(iVar2 - iVar3) + -1);
  FUN_004b4b10(plVar4,local_38);
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,iVar2);
      FUN_00450070(&local_40,local_48,L"&nbsp;",&DAT_014c279c,1);
      (**(code **)(*plVar4 + 0x40))(plVar4,iVar2,local_40);
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,iVar2);
      FUN_0043ea00(&local_58,local_60);
      FUN_014c23f0(&local_50,local_58,&DAT_014c27dc);
      (**(code **)(*plVar4 + 0x40))(plVar4,iVar2,local_50);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_60,7);
  FUN_00414480(local_res8);
  return plVar4;
}

