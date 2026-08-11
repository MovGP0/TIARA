/* Ghidra address: 00e0ac40 */
/* Ghidra symbol: FUN_00e0ac40 */


char FUN_00e0ac40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  char local_19;
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *local_res18 = lVar2;
  local_98 = (wchar_t *)PTR_u_fpga_pinout_txt_01edb648;
  FUN_00416cd0(&local_30,3,local_res8,&DAT_00e0b05c);
  local_48 = 0;
  local_19 = '\x01';
  local_28 = 0;
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(local_res10,L"File not found ",PTR_u_fpga_pinout_txt_01edb648);
    local_19 = '\0';
    FUN_00e0afa0(0,local_70);
  }
  else {
    FUN_01b24310(&local_38);
    cVar1 = FUN_00440a20(local_30,1);
    if (cVar1 == '\0') {
      FUN_00416ba0(local_res10,local_30,L": file not found!");
      local_19 = '\0';
    }
    else {
      local_28 = FUN_00e091c0(&DAT_00e09048,1);
      local_98 = L"yylex2.txt";
      FUN_00416cd0(&local_78,3,local_38,&DAT_00e0b05c);
      FUN_00e080e0(*(undefined8 *)(*(longlong *)(local_28 + 0x10) + 8),local_30,local_78);
      local_3c = FUN_00e09900(local_28);
      if (local_3c == 0) {
        *local_res18 = *(longlong *)(local_28 + 0x20);
        iVar3 = *(int *)(*local_res18 + 0x10);
        local_40 = 0;
        if (-1 < iVar3 + -1) {
          do {
            local_50 = FUN_004aeac0(*local_res18,local_40);
            iVar4 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
            local_44 = 0;
            if (-1 < iVar4 + -1) {
              do {
                local_58 = FUN_004aeac0(*(undefined8 *)(local_50 + 0x10),local_44);
                FUN_00e0a860(local_58);
                local_44 = local_44 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_40 = local_40 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        local_48 = *(undefined4 *)(*(longlong *)(*(longlong *)(local_28 + 0x10) + 8) + 0x18);
        FUN_01d43440(&local_80,local_48);
        local_98 = L": line ";
        local_90 = local_80;
        FUN_00416cd0(local_res10,4,L"Syntax error in ",PTR_u_fpga_pinout_txt_01edb648);
        local_19 = '\0';
      }
    }
    if (local_19 == '\0') {
      FUN_00410f20(*local_res18);
      *local_res18 = 0;
    }
    if (local_28 != 0) {
      FUN_00e08170(*(undefined8 *)(*(longlong *)(local_28 + 0x10) + 8));
    }
    if (local_28 != 0) {
      FUN_00410f20(local_28);
    }
  }
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res8);
  return local_19;
}

