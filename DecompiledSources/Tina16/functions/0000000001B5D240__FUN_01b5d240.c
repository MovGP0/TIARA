/* Ghidra address: 01b5d240 */
/* Ghidra symbol: FUN_01b5d240 */


void FUN_01b5d240(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_40;
  longlong local_38;
  byte local_29 [9];
  
  local_40 = 0;
  *(undefined1 *)((longlong)param_1 + 0x5b) = 0;
  (**(code **)(*param_1 + 0x120))(param_1,param_2);
  if ((char)param_1[0x13] == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x23) = 0x4d595806;
    *(undefined2 *)((longlong)param_1 + 0x27) = 0x6165;
    *(undefined1 *)((longlong)param_1 + 0x29) = 0x73;
  }
  else if ((char)param_1[0x13] == '\x01') {
    *(undefined8 *)((longlong)param_1 + 0x23) = 0x61654d7261684308;
    *(undefined1 *)((longlong)param_1 + 0x2b) = 0x73;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x23) = 0x4d595806;
    *(undefined2 *)((longlong)param_1 + 0x27) = 0x6165;
    *(undefined1 *)((longlong)param_1 + 0x29) = 0x73;
  }
  FUN_00e1cb80(param_2,(longlong)param_1 + 0x23);
  FUN_00e1d420(local_29,&local_38);
  uVar2 = (uint)local_29[0];
  iVar1 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      FUN_004169a0(&local_40,local_38 + (longlong)iVar1 * 0x29);
      (**(code **)(*(longlong *)param_1[0x12] + 0x78))((longlong *)param_1[0x12],local_40);
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_004095f0(local_38,(uint)local_29[0] * 0x29);
  FUN_00414480(&local_40);
  return;
}

