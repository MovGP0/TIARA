/* Ghidra address: 016034e0 */
/* Ghidra symbol: FUN_016034e0 */


void FUN_016034e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 *local_290;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_290 = auStack_2e8;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_298,param_2,*(undefined8 *)(param_1 + 0x48));
  iVar1 = FUN_00441230(local_298,*(undefined4 *)(param_1 + 0x68),local_288);
  if (iVar1 == 0) {
    do {
      if ((local_278 & 0x10) == 0) {
LAB_0160359c:
        FUN_00416ba0(&local_2a0,param_2,local_270);
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))
                  (*(longlong **)(param_1 + 0x40),local_2a0);
      }
      else {
        iVar1 = FUN_00416db0(local_270,&DAT_01603750);
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(local_270,&DAT_01603760);
          if (iVar1 != 0) goto LAB_0160359c;
        }
      }
      iVar1 = FUN_00441290(local_288);
    } while (iVar1 == 0);
    FUN_004412c0(local_288);
  }
  FUN_00416ba0(&local_2a8,param_2,&DAT_01603774);
  iVar1 = FUN_00441230(local_2a8,*(uint *)(param_1 + 0x68) | 0x10,local_288);
  if (iVar1 == 0) {
    do {
      if ((local_278 & 0x10) != 0) {
        iVar1 = FUN_00416db0(local_270,&DAT_01603750);
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(local_270,&DAT_01603760);
          if (iVar1 != 0) {
            local_2c8 = &LAB_01603784;
            FUN_00416cd0(&local_2b0,3,param_2,local_270);
            FUN_016034e0(param_1,local_2b0);
          }
        }
      }
      iVar1 = FUN_00441290(local_288);
    } while (iVar1 == 0);
    FUN_004412c0(local_288);
  }
  FUN_00414560(&local_2b0,4);
  FUN_00417740(local_288,&DAT_00432b90);
  return;
}

