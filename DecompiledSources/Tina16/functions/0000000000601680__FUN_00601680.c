/* Ghidra address: 00601680 */
/* Ghidra symbol: FUN_00601680 */


void FUN_00601680(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  short local_80;
  short local_7e;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_70 = 0;
  iVar1 = thunk_FUN_03d2c01a(param_1,0x68,local_90);
  if (iVar1 == 0) {
    FUN_005ffe50();
  }
  else if ((iVar1 < 0x48) || (local_70 < 0x28)) {
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
  if (param_3 == 2) {
    *(undefined2 *)((longlong)param_2 + 0xe) = 1;
  }
  else if (param_3 - 3U < 0xe) {
    *(undefined2 *)((longlong)param_2 + 0xe) = 4;
    *(int *)(param_2 + 4) = param_3;
  }
  else if (param_3 - 0x11U < 0xf0) {
    *(undefined2 *)((longlong)param_2 + 0xe) = 8;
    *(int *)(param_2 + 4) = param_3;
  }
  else {
    *(short *)((longlong)param_2 + 0xe) = local_7e * local_80;
  }
  *(undefined2 *)((longlong)param_2 + 0xc) = 1;
  if (*(uint *)(param_2 + 4) < *(uint *)((longlong)param_2 + 0x24)) {
    *(uint *)((longlong)param_2 + 0x24) = *(uint *)(param_2 + 4);
  }
  if (*(int *)((longlong)param_2 + 0x14) == 0) {
    iVar1 = FUN_00600270(*(undefined4 *)((longlong)param_2 + 4),
                         *(undefined2 *)((longlong)param_2 + 0xe),0x20);
    uVar2 = (int)*(uint *)(param_2 + 1) >> 0x1f;
    *(uint *)((longlong)param_2 + 0x14) = iVar1 * ((*(uint *)(param_2 + 1) ^ uVar2) - uVar2);
  }
  return;
}

