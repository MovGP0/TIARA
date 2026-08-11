/* Ghidra address: 006998f0 */
/* Ghidra symbol: FUN_006998f0 */


void FUN_006998f0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined1 local_68 [72];
  undefined8 local_20;
  
  local_70 = auStack_98;
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar1 = FUN_00786090(param_1);
    uVar1 = thunk_FUN_041804fe(uVar1,local_68);
    FUN_005ffb10(local_20,uVar1);
  }
  else {
    FUN_005ffb10(local_20,*(longlong *)(param_2 + 8));
  }
  (**(code **)(*param_1 + 0x20))(param_1,local_20);
  uVar1 = FUN_005ffa40(local_20);
  FUN_006573b0(param_1[2],uVar1,0);
  FUN_005ffb10(local_20,0);
  FUN_00410f20(local_20);
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_0416269d(uVar1,local_68);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

