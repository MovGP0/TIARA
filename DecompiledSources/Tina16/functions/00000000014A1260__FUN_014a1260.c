/* Ghidra address: 014a1260 */
/* Ghidra symbol: FUN_014a1260 */


void FUN_014a1260(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414ad0(PTR_DAT_02004010 + 0xb1,local_res8);
  FUN_00441920(&local_28,local_res8);
  FUN_004414c0(local_20,local_28,0);
  FUN_00414b50(&local_res8,local_20[0]);
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768);
  if (lVar1 != 0) {
    FUN_00416cd0(&local_res8,4,local_res8,&DAT_014a150c,local_res10,L" [MACRO");
    if (*(char *)(lVar1 + 0x80) != '\0') {
      FUN_00416ad0(&local_res8,L"; LOCKED");
    }
    FUN_00416ad0(&local_res8,&LAB_014a1558);
  }
  if ((((*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) == 0) ||
       (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) + 0x70) != '\x02')) ||
      (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xfd8) + 0x80) == '\0')) ||
     (*(longlong *)PTR_DAT_020057d0 == 0)) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_50,0x5af);
    local_40 = local_res8;
    local_38 = 0x11;
    FUN_00442f70(&local_48,local_50,&local_40,0);
    FUN_0064de00(*(undefined8 *)PTR_DAT_02004e40,local_48);
  }
  else {
    local_40 = local_res8;
    local_38 = 0x11;
    FUN_00442f70(&local_30,*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x8d8),&local_40,0);
    FUN_0064de00(*(undefined8 *)PTR_DAT_02004e40,local_30);
  }
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_01c97850(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  }
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,3);
  FUN_00414560(&local_res8,2);
  return;
}

