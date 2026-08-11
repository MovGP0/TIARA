/* Ghidra address: 0040e200 */
/* Ghidra symbol: FUN_0040e200 */


void FUN_0040e200(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = 0;
  FUN_00414480(param_2);
  if (*(short *)(param_1 + 0x2e8) == 0) {
    FUN_0040d3d0(param_1);
  }
  if (*(short *)(param_1 + 0x2e8) == 0x4b0) {
    FUN_004169f0(&local_18,0xff);
    FUN_0040ded0(param_1,local_18,0xff,&local_c);
    FUN_004169f0(&local_18,local_c);
    FUN_00414ad0(param_2,local_18);
    while (local_c == 0xff) {
      FUN_004169f0(&local_18,0xff);
      uVar1 = FUN_00416740(local_18);
      FUN_0040ded0(param_1,uVar1,0xff,&local_c);
      FUN_004169f0(&local_18,local_c);
      FUN_00416ad0(param_2,local_18);
      FUN_00414480(&local_18);
    }
  }
  else {
    FUN_0040e000(param_1,&local_20,*(short *)(param_1 + 0x2e8));
    if (local_20 != 0) {
      FUN_00416880(param_2,local_20);
    }
  }
  FUN_004144d0(&local_20);
  FUN_00414480(&local_18);
  return;
}

