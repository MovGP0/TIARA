/* Ghidra address: 015f47a0 */
/* Ghidra symbol: FUN_015f47a0 */


undefined1
FUN_015f47a0(undefined8 param_1,longlong param_2,char param_3,undefined8 param_4,longlong param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_50 = 0;
  FUN_00414610(param_6);
  if (param_5 != 0) {
    if ((param_3 != '\x03') && (*(longlong *)PTR_DAT_02004208 == 0)) {
      uVar1 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_02004208 = uVar1;
    }
    if ((*(longlong *)PTR_DAT_02004208 != 0) &&
       (*(char *)(*(longlong *)PTR_DAT_02004208 + 0xa9) == '\0')) {
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(&local_50,PTR_PTR_02004c28);
      FUN_00b8e650(uVar1,&local_48,L"HDLStrings.Msg_CompilingHDLSource",local_50);
      FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_48);
      *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
      FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  _read_in_dat_file_from_tina(param_1);
  local_22 = _if_compile_design(param_1,param_4);
  FUN_01778ce0(*(undefined8 *)(param_2 + 0x1f8),param_1,param_6);
  if ((*PTR_DAT_02002b78 != '\0') && (*(longlong *)PTR_DAT_020044c0 != 0)) {
    FUN_014ba120(*(undefined8 *)PTR_DAT_020044c0,param_1);
  }
  local_21 = local_22;
  if (*(longlong *)PTR_DAT_02004208 != 0) {
    local_20 = *(undefined8 *)PTR_DAT_02004208;
    *(undefined8 *)PTR_DAT_02004208 = 0;
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&param_6);
  return local_21;
}

