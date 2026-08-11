/* Ghidra address: 0160f430 */
/* Ghidra symbol: FUN_0160f430 */


void FUN_0160f430(void)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)PTR_DAT_02005788 = uVar2;
  iVar3 = 0x10;
  do {
    (**(code **)(**(longlong **)PTR_DAT_02005788 + 0x78))(*(longlong **)PTR_DAT_02005788,0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_40 = 0;
  local_20 = FUN_0105a0d0(&DAT_01057408,1);
  cVar1 = FUN_0105fed0(local_20 + 0x18,local_20 + 0x88);
  if (cVar1 != '\0') {
    FUN_00414ad0(local_20 + 0x20,*(undefined8 *)(local_20 + 0x18));
    FUN_0105ee90(local_20,local_40);
    local_68 = *(undefined8 *)(local_20 + 0x68);
    FUN_00416cd0(&local_30,3,*(undefined8 *)(local_20 + 0x60),&DAT_0160f608);
    FUN_00414b50(&local_38,*(undefined8 *)(local_20 + 0x70));
    iVar3 = (**(code **)(**(longlong **)PTR_DAT_02005788 + 0x28))(*(longlong **)PTR_DAT_02005788);
    if (local_40 < iVar3) {
      local_68 = local_38;
      FUN_00416cd0(&local_58,3,local_30,&LAB_0160f618);
      (**(code **)(**(longlong **)PTR_DAT_02005788 + 0x40))
                (*(longlong **)PTR_DAT_02005788,local_40,local_58);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,3);
  return;
}

