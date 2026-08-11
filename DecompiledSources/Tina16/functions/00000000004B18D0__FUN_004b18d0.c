/* Ghidra address: 004b18d0 */
/* Ghidra symbol: FUN_004b18d0 */


undefined8 FUN_004b18d0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_20;
  
  local_40 = 0;
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    FUN_00410ae0(*param_1,param_2);
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xfffe);
    (*pcVar2)(lVar1,&local_40);
    local_38 = local_40;
    local_30 = 0x11;
    local_28 = FUN_004b1870(param_1);
    local_20 = 0;
    FUN_00442f70(param_2,L"%s[%d]",&local_38,1);
  }
  FUN_00414480(&local_40);
  return param_2;
}

