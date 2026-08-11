/* Ghidra address: 009e1bc0 */
/* Ghidra symbol: FUN_009e1bc0 */


undefined1 FUN_009e1bc0(undefined8 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 local_res10;
  undefined1 auStack_a98 [32];
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined1 *local_a60;
  undefined8 local_a50;
  undefined1 local_a42 [522];
  int local_838;
  undefined2 local_832;
  undefined1 local_830 [2063];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_c;
  
  local_a60 = auStack_a98;
  local_a78 = 0;
  local_a70 = 0;
  local_a68 = 0;
  local_18 = 0;
  local_a50 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_21 = 1;
  local_c = 0;
  local_832 = 0;
  local_838 = thunk_FUN_0416522a(0x3fe,local_830);
  if (local_838 == 0) {
    uVar1 = thunk_FUN_03ce33a6();
    FUN_0044b630(&local_a68,uVar1,0);
    uVar2 = FUN_0044d490(&PTR_FUN_00434f90,1,local_a68);
    FUN_004134c0(uVar2);
  }
  FUN_00414740(&local_18,&local_832,local_838 + 1);
  FUN_0043e130(&local_a70,local_18);
  FUN_00414b50(&local_18,local_a70);
  uVar2 = FUN_00416740(local_res8);
  local_838 = thunk_FUN_041b7fae(uVar2,local_a42,0x104);
  if (local_838 == 0) {
    local_21 = 0;
  }
  else {
    FUN_00414740(&local_a50,local_a42,local_838);
    FUN_0043e130(&local_a78,local_a50);
    FUN_00414b50(&local_a50,local_a78);
    FUN_00414480(&local_20);
    FUN_0044f850(&local_20,local_a50);
    FUN_009e1640(auStack_a98,local_20);
    FUN_00414480(&local_20);
  }
  FUN_00414560(&local_a78,3);
  FUN_00414480(&local_a50);
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_res8);
  return local_21;
}

