/* Ghidra address: 00a3da10 */
/* Ghidra symbol: FUN_00a3da10 */


void FUN_00a3da10(undefined8 param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_a8 = 0;
  local_a0[0] = 0;
  FUN_0040d200(local_90,0x68,0);
  iVar1 = thunk_FUN_03d2c01a(param_1,0x68,local_90);
  if (iVar1 == 0) {
    FUN_0041ddd0(local_a0,&PTR_PTR_00a3d788);
    FUN_00a3d980(local_a0[0]);
  }
  if ((iVar1 < 0x48) || (local_70 < 0x28)) {
    FUN_0040d200(param_2,0x28,0);
    *(undefined4 *)param_2 = 0x28;
    *(undefined4 *)((longlong)param_2 + 4) = local_8c;
    *(undefined4 *)(param_2 + 1) = local_88;
  }
  else {
    *param_2 = CONCAT44(uStack_6c,local_70);
    param_2[1] = uStack_68;
    param_2[2] = uStack_60;
    param_2[3] = uStack_58;
    param_2[4] = uStack_50;
  }
  if (param_3 == '\x01') {
    *(undefined2 *)((longlong)param_2 + 0xe) = 1;
  }
  else if (param_3 == '\x02') {
    *(undefined2 *)((longlong)param_2 + 0xe) = 4;
  }
  else if (param_3 == '\x03') {
    *(undefined2 *)((longlong)param_2 + 0xe) = 8;
  }
  else if (param_3 == '\x06') {
    *(undefined2 *)((longlong)param_2 + 0xe) = 0x18;
  }
  else {
    FUN_0041ddd0(&local_a8,&PTR_PTR_00a3d798);
    FUN_00a3d980(local_a8);
  }
  *(undefined2 *)((longlong)param_2 + 0xc) = 1;
  iVar1 = FUN_00a3d9f0(*(undefined4 *)((longlong)param_2 + 4),
                       *(undefined2 *)((longlong)param_2 + 0xe),0x20);
  uVar2 = (int)*(uint *)(param_2 + 1) >> 0x1f;
  *(uint *)((longlong)param_2 + 0x14) = iVar1 * ((*(uint *)(param_2 + 1) ^ uVar2) - uVar2);
  FUN_00414560(&local_a8,2);
  return;
}

