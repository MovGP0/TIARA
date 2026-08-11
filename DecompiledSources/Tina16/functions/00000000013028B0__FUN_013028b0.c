/* Ghidra address: 013028b0 */
/* Ghidra symbol: FUN_013028b0 */


undefined8
FUN_013028b0(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong local_res18;
  int local_res20;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong local_60;
  undefined1 local_54 [8];
  undefined1 local_4c [52];
  undefined8 local_18;
  undefined8 local_10;
  
  local_a0 = auStack_d8;
  local_a8 = 0;
  local_88[0] = 0;
  local_90 = 0;
  local_98 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00417580(local_4c,&DAT_01d2e6d8);
  FUN_00414480(param_2);
  if (local_res20 == 0) {
    FUN_00414b50(local_88,L".refresult.tr");
  }
  else if (local_res20 == 1) {
    FUN_00414b50(local_88,L".refresult.dc");
  }
  else if (local_res20 == 2) {
    FUN_00414b50(local_88,L".refresult.ac");
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_a8);
  local_b8 = local_res18;
  local_b0 = local_88[0];
  FUN_00416cd0(&local_90,4,local_a8,&LAB_01302c80);
  cVar1 = FUN_00440a20(local_90,1);
  if (cVar1 != '\0') {
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_90,0x20);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,0x40);
    FUN_01d317c0(local_10,local_4c);
    FUN_01d30e90(local_10,local_54);
    if (*(char *)(param_1 + 0xabd) == '\0') {
      FUN_01d30f00(local_10,local_70,8);
      FUN_01d30f00(local_10,local_74,4);
      FUN_01d30f00(local_10,local_78,4);
    }
    local_60 = FUN_01cc3ce0(&PTR_FUN_01cb5bc0,1,local_10);
    local_68 = FUN_01d347d0(*(undefined8 *)(local_60 + 8),param_5);
    FUN_01cc0ae0(local_68,param_2);
    FUN_00410f20(local_60);
    iVar2 = FUN_01d31a40(local_10);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_10);
      FUN_00b047e0(uVar3);
    }
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
  }
  FUN_00414480(&local_a8);
  FUN_00414560(&local_98,3);
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  FUN_00414480(&local_res18);
  return param_2;
}

