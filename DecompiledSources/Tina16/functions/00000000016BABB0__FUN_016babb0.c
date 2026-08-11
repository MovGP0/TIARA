/* Ghidra address: 016babb0 */
/* Ghidra symbol: FUN_016babb0 */


undefined1
FUN_016babb0(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4,char param_5,
            char *param_6)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 local_res18 [2];
  undefined1 local_139;
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  uStack_28 = param_4[2];
  uStack_20 = param_4[3];
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_139 = 1;
  if ((byte)(param_5 - 0x28U) < 0x58) {
    uVar2 = ((ulonglong)(byte)(param_5 - 0x28U) & 0x7f) + 0x20;
    bVar3 = (*(byte *)(((longlong)uVar2 >> 3) + 0x16bad58) >> (uVar2 & 7) & 1) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_0040f800(param_1 + 0x20,&DAT_016bad67,0x20);
  }
  FUN_016ba220(param_1,local_138,&local_38,1);
  FUN_00414ff0(param_6,local_138);
  if (param_2 == '\0') {
    cVar1 = FUN_016ba520(param_1,param_6,local_res18[0],&local_38);
    if (cVar1 == '\0') {
      FUN_016b9df0(param_1);
      local_139 = 0;
      goto LAB_016bad17;
    }
  }
  else if (param_2 == '\x01') {
    cVar1 = FUN_016ba860(param_1,param_6,local_res18[0]);
    if (cVar1 == '\0') {
      FUN_016b9df0(param_1);
      local_139 = 0;
      goto LAB_016bad17;
    }
  }
  else if ((param_2 == '\x02') && (*param_6 == '\0')) {
    local_139 = 0;
  }
  if (param_5 != '\0') {
    FUN_016b9f90(param_1,param_5);
  }
LAB_016bad17:
  FUN_00414480(local_res18);
  return local_139;
}

