/* Ghidra address: 00bcc3f0 */
/* Ghidra symbol: FUN_00bcc3f0 */


longlong * FUN_00bcc3f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_20;
  char local_19;
  int local_18;
  ushort local_12;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10[0]);
  local_12 = *(ushort *)*param_1;
  if (local_12 < 0x100) {
    bVar2 = ((byte)(&DAT_00bcc5cc)[(longlong)(ulonglong)local_12 >> 3] >> ((ulonglong)local_12 & 7)
            & 1) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_0043e1a0(&local_38,*param_1);
    iVar1 = FUN_004170c0(L"tsyn",local_38,1);
    if (iVar1 == 1) {
      FUN_00416e20(param_1,1,4);
    }
    else {
      FUN_00416e20(param_1,1,1);
    }
  }
  local_10 = 0;
  FUN_0043e1a0(&local_10,*param_1);
  local_18 = 0;
  if (*param_1 != 0) {
    local_18 = *(int *)(*param_1 + -4);
  }
  FUN_00416dc0(&local_40,local_10,local_18 + -2,3);
  iVar1 = FUN_00416db0(local_40,&DAT_00bcc610);
  local_19 = iVar1 == 0;
  FUN_00414480(&local_10);
  if (local_19 != '\0') {
    local_20 = 0;
    if (*param_1 != 0) {
      local_20 = *(int *)(*param_1 + -4);
    }
    FUN_004169f0(param_1,local_20 + -3);
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res10);
  return param_1;
}

