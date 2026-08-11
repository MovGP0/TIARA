/* Ghidra address: 00894b80 */
/* Ghidra symbol: FUN_00894b80 */


longlong FUN_00894b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
                     undefined1 *param_5)

{
  undefined2 uVar1;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  short local_90;
  undefined2 local_8e;
  undefined1 local_8c [4];
  undefined1 local_88 [124];
  undefined4 local_c;
  
  local_a8 = 0;
  local_a0[0] = 0;
  local_c = 0x80;
  local_b0 = (**(code **)PTR_PTR_02001ea8)(param_2,&local_90,&local_c);
  if (local_b0 != -1) {
    if (local_90 == 2) {
      FUN_00891ce0(param_1,local_a0,local_8c,0);
      FUN_00414ad0(param_3,local_a0[0]);
      uVar1 = (**(code **)PTR_PTR_02002a90)(local_8e);
      *param_4 = uVar1;
      *param_5 = 0;
    }
    else if (local_90 == 0x17) {
      FUN_00891ce0(param_1,&local_a8,local_88,1);
      FUN_00414ad0(param_3,local_a8);
      uVar1 = (**(code **)PTR_PTR_02002a90)(local_8e);
      *param_4 = uVar1;
      *param_5 = 1;
    }
    else {
      (**(code **)PTR_PTR_02005588)(local_b0);
      local_b0 = -1;
      FUN_0089bf30(param_1);
    }
  }
  FUN_00414560(&local_a8,2);
  return local_b0;
}

