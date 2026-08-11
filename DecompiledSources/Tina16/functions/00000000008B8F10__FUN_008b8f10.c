/* Ghidra address: 008b8f10 */
/* Ghidra symbol: FUN_008b8f10 */


void FUN_008b8f10(undefined8 param_1,undefined **param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_2 == &PTR_FUN_008b3d68) {
    FUN_0041ddd0(&local_10,PTR_PTR_020056f8);
    uVar1 = FUN_0044d490(&PTR_FUN_008b3d68,1,local_10);
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b3eb8) {
    FUN_0041ddd0(&local_18,PTR_PTR_020026c8);
    uVar1 = FUN_0044d490(&PTR_FUN_008b3eb8,1,local_18);
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b4010) {
    FUN_0041ddd0(&local_20,PTR_PTR_02001ac0);
    uVar1 = FUN_0044d490(&PTR_FUN_008b4010,1,local_20);
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b4150) {
    FUN_0041ddd0(&local_28,PTR_PTR_020040a8);
    uVar1 = FUN_0044d490(&PTR_FUN_008b4150,1,local_28);
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b4290) {
    FUN_0041ddd0(&local_30,PTR_PTR_02002d60);
    uVar1 = FUN_0044d490(&PTR_FUN_008b4290,1,local_30);
    FUN_004134c0(uVar1);
  }
  else {
    FUN_00410ae0(param_2,&local_38);
    uVar1 = FUN_0044d490(param_2,1,local_38);
    FUN_004134c0(uVar1);
  }
  FUN_00414560(&local_38,6);
  return;
}

