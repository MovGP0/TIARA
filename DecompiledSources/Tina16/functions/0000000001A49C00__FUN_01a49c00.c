/* Ghidra address: 01a49c00 */
/* Ghidra symbol: FUN_01a49c00 */


longlong * FUN_01a49c00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_b8;
  local_68 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(longlong *)(param_1 + 0x2b30) == 0) {
    if (*(char *)(param_1 + 0x293c) == '\0') {
      local_98 = L"temp.cir";
      FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a49e9c);
      cVar1 = FUN_00440a20(local_30,1);
      if (cVar1 != '\0') {
        FUN_004412f0(local_30);
      }
      local_58 = FUN_01a1efc0(&DAT_019ec6a8,1,0,&DAT_01a49ecc);
      uVar2 = FUN_019a4600();
      local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_90 = 1;
      local_88 = 1;
      local_80 = 0;
      local_78 = 0;
      FUN_01a1f1b0(local_58,local_30,uVar2,0);
      cVar1 = FUN_00440a20(local_30,1);
      if (cVar1 == '\0') {
        FUN_00416ba0(&local_68,local_30,L": not found");
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_68);
        FUN_004134c0(uVar2);
      }
      (**(code **)(*local_50 + 0xd8))(local_50,local_30);
      while( true ) {
        cVar1 = FUN_01a49b90(&DAT_01a49f04,local_50);
        if (cVar1 == '\0') break;
        FUN_01a49b00(&DAT_01a49f04,local_50);
      }
      FUN_01a49b00(L"TINA Netlist Editor format",local_50);
      FUN_01a49b00(L".TRAN",local_50);
      FUN_01a49b00(L".TEMP",local_50);
    }
  }
  else {
    FUN_00414b50(&local_30,*(undefined8 *)(param_1 + 0x2b30));
    (**(code **)(*local_50 + 0xd8))(local_50,local_30);
  }
  local_20 = local_50;
  FUN_00414480(&local_68);
  FUN_00414560(&local_38,3);
  return local_20;
}

