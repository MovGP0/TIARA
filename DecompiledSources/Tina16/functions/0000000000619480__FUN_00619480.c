/* Ghidra address: 00619480 */
/* Ghidra symbol: FUN_00619480 */


longlong FUN_00619480(longlong param_1,char param_2,char param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_30 [2];
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
  FUN_00410e60(local_res8,0);
  uVar2 = FUN_00410e60(&DAT_00401a88,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  FUN_00412500(uVar2,10);
  if (param_3 != '\0') {
    *(undefined4 *)(local_res8 + 0x10) = 0x80000000;
  }
  if (((int)param_4 < 0) || (0xfff < (int)param_4)) {
    local_30[0] = 0xfff;
    local_28 = 0;
    local_48 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00434000,1,PTR_PTR_02005918,local_30);
    FUN_004134c0(uVar2);
  }
  if ((*(int *)PTR_DAT_02005280 == 1) && (0 < (int)param_4)) {
    *(uint *)(local_res8 + 0x10) = *(uint *)(local_res8 + 0x10) | 1;
  }
  else {
    *(uint *)(local_res8 + 0x10) = *(uint *)(local_res8 + 0x10) | param_4;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

