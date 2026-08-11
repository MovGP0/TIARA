/* Ghidra address: 00c27aa0 */
/* Ghidra symbol: FUN_00c27aa0 */


void FUN_00c27aa0(longlong *param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,longlong param_7,undefined4 param_8)

{
  undefined2 uVar1;
  short sVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  *(undefined4 *)(param_1 + 3) = param_8;
  param_1[4] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_5;
  *(undefined1 *)(param_1 + 6) = param_6;
  param_1[7] = param_7;
  if (*(byte *)((longlong)param_1 + 0x1c) < 2) {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 2;
  }
  *(uint *)(param_1 + 0xb) = *(byte *)((longlong)param_1 + 0x1c) + 1;
  (**(code **)(*(longlong *)param_1[4] + 0x20))((longlong *)param_1[4],(longlong)param_1 + 0x1c,1);
  *(int *)((longlong)param_1 + 0x54) = (int)param_1[0xb];
  uVar1 = FUN_00c27900(param_1,(int)param_1[0xb]);
  *(undefined2 *)((longlong)param_1 + 0x5c) = uVar1;
  sVar2 = (short)(1 << ((char)(int)param_1[0xb] - 1U & 0x1f));
  *(short *)((longlong)param_1 + 0x5e) = sVar2;
  *(short *)(param_1 + 0xc) = sVar2 + 1;
  *(short *)((longlong)param_1 + 0x62) = sVar2 + 2;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  if ((char)param_1[6] == '\0') {
    *(int *)(param_1 + 0xe) = (int)param_1[5] * *(int *)((longlong)param_1 + 0x2c);
  }
  else {
    *(int *)(param_1 + 0xe) = (int)param_1[5];
  }
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  local_38 = FUN_00c25bb0(&PTR_FUN_00c25950,1,param_2);
  param_1[8] = local_38;
  *(longlong *)(local_38 + 8) = param_1[1];
  *(longlong *)(local_38 + 0x10) = param_1[2];
  if (((param_1[7] == 0) || (*(int *)((longlong)param_1 + 0x2c) < 1)) || ((int)param_1[5] < 1)) {
    (**(code **)*param_1)(param_1,(longlong)(short)param_1[0xc]);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)*param_1)(param_1,(longlong)(short)param_1[0xc]);
  }
  FUN_00410f20(param_1[8]);
  FUN_00c1a380(param_1[4],0);
  return;
}

