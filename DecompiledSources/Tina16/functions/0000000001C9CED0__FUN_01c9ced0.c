/* Ghidra address: 01c9ced0 */
/* Ghidra symbol: FUN_01c9ced0 */


void FUN_01c9ced0(void)

{
  char cVar1;
  undefined1 auStack_868 [32];
  wchar_t *local_848;
  undefined8 local_830;
  wchar_t *local_828;
  undefined1 *local_820;
  undefined8 local_10;
  
  local_820 = auStack_868;
  local_828 = (wchar_t *)0x0;
  local_830 = 0;
  local_10 = 0;
  if ((*PTR_DAT_02001df8 == '\0') && (*(longlong *)(PTR_DAT_02004010 + 0xb1) != 0)) {
    local_820 = auStack_868;
    FUN_00441920(&local_830,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_004414c0(&local_828,local_830,L".STA");
    local_848 = local_828;
    FUN_00416cd0(&local_10,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01c9d08c);
  }
  else if ((*PTR_DAT_02001df8 == '\0') || (*(longlong *)PTR_DAT_02003bd8 == 0)) {
    local_848 = L"Transient Statistics.STA";
    FUN_00416cd0(&local_10,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01c9d08c);
  }
  else {
    local_820 = auStack_868;
    FUN_00414b50(&local_10,*(undefined8 *)PTR_DAT_02003bd8);
  }
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 != '\0') {
    FUN_01d44af0(L"Notepad.exe",local_10,1);
  }
  FUN_00414560(&local_830,2);
  FUN_00414480(&local_10);
  return;
}

