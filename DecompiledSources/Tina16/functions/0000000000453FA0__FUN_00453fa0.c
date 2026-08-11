/* Ghidra address: 00453fa0 */
/* Ghidra symbol: FUN_00453fa0 */


longlong FUN_00453fa0(longlong param_1,char param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_30 [2];
  undefined1 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (param_4 < 1) {
    uVar2 = FUN_0044d710(&PTR_FUN_004355d0,1,PTR_PTR_02005140);
    FUN_004134c0(uVar2);
  }
  if (param_4 < param_3) {
    local_28 = 0;
    local_48 = 0;
    local_30[0] = param_3;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02003a10,local_30);
    FUN_004134c0(uVar2);
  }
  FUN_004540d0(local_res8,0,param_3);
  *(int *)(local_res8 + 0x14) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

