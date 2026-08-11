/* Ghidra address: 01a2abe0 */
/* Ghidra symbol: FUN_01a2abe0 */


void FUN_01a2abe0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_ae8 [32];
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined1 local_ab0;
  undefined1 local_aa8;
  undefined4 local_aa0;
  undefined8 local_a98;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined1 local_a78;
  undefined8 local_a70;
  undefined1 local_a68;
  int local_a60;
  undefined1 local_a58;
  wchar_t *local_a50;
  undefined1 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined1 *local_a20;
  undefined1 local_a18 [2416];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [8];
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_a20 = auStack_ae8;
  local_a88 = 0;
  local_a40 = 0;
  local_a38 = 0;
  local_a30 = 0;
  local_a28 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58[0] = 0;
  local_98[0] = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  FUN_00417580(local_a18,&DAT_01d0d0b8);
  FUN_004b6930(&PTR_FUN_00478280,1);
  local_18 = 0;
  if (local_res10 != 0) {
    FUN_00417c40(local_a18,PTR_DAT_02004010,&DAT_01d0d0b8);
    FUN_01c75530(*(undefined8 *)PTR_DAT_02004e40,0);
    if (local_res20 == 0) {
      if (*(longlong *)(param_1 + 0x750) == 0) {
        FUN_00414b50(&local_40,L"temp.tsc");
        FUN_00441920(&local_a30,local_40);
        FUN_0147d310(&local_38,local_a30);
        FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_02005010,&DAT_01a2b260);
      }
      else {
        FUN_00414b50(&local_40,*(undefined8 *)(param_1 + 0x750));
        FUN_00441920(&local_a38,local_40);
        FUN_0147d310(&local_38,local_a38);
        FUN_00441640(&local_30,local_40);
      }
    }
    else {
      FUN_00414b50(&local_40,local_res20);
      FUN_00441920(&local_a28,local_40);
      FUN_0147d310(&local_38,local_a28);
      FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_02005010,&DAT_01a2b260);
    }
    DAT_01fc63a8 = DAT_01fc63a8 + 1;
    FUN_00417c40(PTR_DAT_02004010,local_a18,&DAT_01d0d0b8);
    local_a80 = local_30;
    local_a78 = 0x11;
    local_a70 = local_38;
    local_a68 = 0x11;
    local_a60 = DAT_01fc63a8;
    local_a58 = 0;
    local_a50 = L".tsc";
    local_a48 = 0x11;
    FUN_00442f70(&local_a40,L"%s%s_conv_%d%s",&local_a80,3);
    FUN_00414ad0(PTR_DAT_02004010 + 0xb1,local_a40);
    FUN_01c97850(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    uVar1 = FUN_019c7500(&DAT_019bfa70,1,local_res18);
    *(undefined8 *)(param_1 + 0x710) = uVar1;
    uVar1 = FUN_019a4600();
    local_ac8 = *(undefined8 *)(param_1 + 0x740);
    local_ac0 = CONCAT71(local_ac0._1_7_,*(undefined1 *)(param_1 + 0x748));
    uVar1 = FUN_019bef90(&DAT_019bb828,1,uVar1,*(undefined8 *)(param_1 + 0x738));
    *(undefined8 *)(param_1 + 0x718) = uVar1;
    FUN_00414480(&local_10);
    FUN_005d10a0(local_res10,0,0);
    FUN_005d1300(&local_10,local_res10);
    local_18 = FUN_00f30500(local_10,0,0);
    FUN_00414480(&local_10);
    uVar1 = FUN_019a4600();
    local_ac8 = 0;
    local_ac0 = 0;
    local_ab8 = 0;
    local_ab0 = 0;
    local_aa8 = 0;
    local_aa0 = 1;
    local_a98 = 0;
    FUN_019bd5f0(*(undefined8 *)(param_1 + 0x718),&local_a88,uVar1,local_18);
    uVar1 = FUN_019a4600();
    FUN_019c7ff0(*(undefined8 *)(param_1 + 0x710),uVar1,local_res10,2);
  }
  FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  FUN_00414480(&local_a88);
  FUN_00414560(&local_a40,4);
  FUN_00417740(local_a18,&DAT_01d0d0b8);
  FUN_00417840(&local_a8,&DAT_0147b748,2);
  FUN_00419430(local_98,&DAT_0147b708);
  FUN_00419430(local_58,&DAT_0147b708);
  FUN_00414560(&local_40,5);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res10);
  FUN_00414480(&local_res20);
  return;
}

