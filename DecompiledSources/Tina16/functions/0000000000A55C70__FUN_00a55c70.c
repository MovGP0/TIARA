/* Ghidra address: 00a55c70 */
/* Ghidra symbol: FUN_00a55c70 */


undefined4
FUN_00a55c70(ushort *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  ushort *local_20;
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30[0] = 0;
  cVar1 = FUN_0046c390(param_1);
  if (cVar1 == '\0') {
    if (*param_1 < 0x20) {
      bVar2 = (1 << ((byte)*param_1 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar2 = false;
    }
    local_20 = param_1;
    if (bVar2) {
      FUN_00468530(&local_48,0xff439eb2,0xfffffffffffffffc);
      cVar1 = FUN_0046f340(param_1,&local_48);
      if (cVar1 != '\0') {
        local_4c = FUN_00462650(param_1);
        goto code_r0x00a55d5d;
      }
    }
    local_4c = param_6;
  }
  else {
    FUN_00467e90(local_30,param_1);
    local_4c = FUN_00a61c40(local_30[0],param_2,param_3,param_4,param_5,param_6);
  }
code_r0x00a55d5d:
  FUN_00460ba0(&local_48);
  FUN_00414480(local_30);
  return local_4c;
}

