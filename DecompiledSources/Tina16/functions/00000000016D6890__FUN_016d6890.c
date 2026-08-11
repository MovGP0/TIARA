/* Ghidra address: 016d6890 */
/* Ghidra symbol: FUN_016d6890 */


void FUN_016d6890(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong local_res10 [3];
  undefined8 local_2c0 [2];
  undefined1 local_2ac [44];
  undefined1 local_280 [624];
  
  local_2c0[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x3d) == '\0') {
    FUN_016d2470(local_2ac,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24),2,
                 *(undefined4 *)(param_1 + 0x30));
    if (param_3 == (longlong *)0x0) {
      if (local_res10[0] == 0) {
        FUN_00416ba0(local_2c0,*(undefined8 *)PTR_DAT_020030c8,L"\\temp.wav");
        FUN_0040ce70(local_280,local_2c0[0]);
        FUN_00409900();
      }
      else {
        FUN_0040ce70(local_280,local_res10[0]);
        FUN_00409900();
      }
      FUN_0040e710(local_280,1);
      FUN_00409900();
      FUN_0040d120(local_280,local_2ac,0x2c,0);
      FUN_00409900();
      FUN_0040d120(local_280,*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x28) * 2,0);
      FUN_00409900();
      FUN_0040d150(local_280);
      FUN_00409900();
    }
    else {
      (**(code **)(*param_3 + 0x20))(param_3,local_2ac,0x2c);
      (**(code **)(*param_3 + 0x20))
                (param_3,*(undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x28) * 2);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x270))(*(longlong **)(param_1 + 0x48));
    while (*(int *)(*(longlong *)(param_1 + 0x48) + 0x580) != 0) {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  }
  FUN_00419430(param_1 + 0x40,&DAT_004066a0);
  FUN_00414480(local_2c0);
  FUN_00414480(local_res10);
  return;
}

