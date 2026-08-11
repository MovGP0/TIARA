/* Ghidra address: 01bfbed0 */
/* Ghidra symbol: FUN_01bfbed0 */


undefined1 FUN_01bfbed0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_0061c2b8);
  if (cVar2 != '\0') {
    pcVar3 = (code *)FUN_00411550(uVar1,0xffee);
    cVar2 = (*pcVar3)(uVar1,param_2);
    if ((((cVar2 != '\0') && (*(char *)(*(longlong *)PTR_DAT_02004030 + 0xf8) != '\0')) &&
        (*(short *)(*(longlong *)(param_1 + 0x18) + 0x102) != 0)) && (*param_2 != 0)) {
      local_40 = *param_2;
      local_38 = 0x11;
      FUN_007dc700(&local_48,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x102));
      local_30 = local_48;
      local_28 = 0x11;
      FUN_00442f70(local_20,L"%s (%s)",&local_40,1);
      FUN_00414ad0(param_2,local_20[0]);
    }
  }
  FUN_00414480(&local_48);
  FUN_00414480(local_20);
  return 1;
}

