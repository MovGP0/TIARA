/* Ghidra address: 00c851d0 */
/* Ghidra symbol: FUN_00c851d0 */


longlong FUN_00c851d0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_res8;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  local_48 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_00c8540c);
  plVar4 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  *(longlong **)(local_res8 + 0x10) = plVar4;
  (**(code **)(*plVar4 + 0xb0))(plVar4,L"ComponentHotkeys",*(undefined8 *)(local_res8 + 0x38));
  FUN_004a0a40(&PTR_FUN_00c7f650);
  uVar3 = FUN_00c81e80(&DAT_00c801e0,1,0,0);
  *(undefined8 *)(local_res8 + 0x30) = uVar3;
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\CompRegU.BMP");
  cVar2 = FUN_00440a20(local_20[0],1);
  if (cVar2 != '\0') {
    local_48 = *(wchar_t **)(*(longlong *)(local_res8 + 0x30) + 0x28);
    uVar3 = FUN_00c7e190(&DAT_00c7db88,1,0xffffffff,local_20[0]);
    *(undefined8 *)(local_res8 + 0x20) = uVar3;
  }
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_020049a0,L"\\CompRegE.BMP");
  cVar2 = FUN_00440a20(local_20[0],1);
  if (cVar2 != '\0') {
    local_48 = *(wchar_t **)(*(longlong *)(local_res8 + 0x30) + 0x28);
    uVar3 = FUN_00c7e190(&DAT_00c7db88,1,0xffffffff,local_20[0]);
    *(undefined8 *)(local_res8 + 0x18) = uVar3;
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

