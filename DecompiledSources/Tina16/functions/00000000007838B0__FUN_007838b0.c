/* Ghidra address: 007838b0 */
/* Ghidra symbol: FUN_007838b0 */


undefined8
FUN_007838b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5
            ,undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 local_58 [20];
  undefined1 local_44 [12];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((byte)(param_5 - 3U) < 4) {
    if (param_5 == '\x03') {
      local_38 = *param_6;
      uStack_30 = param_6[1];
    }
    else if (param_5 == '\x04') {
      FUN_00423010(&local_38,*(undefined4 *)param_6,*(undefined4 *)((longlong)param_6 + 4),
                   *(undefined4 *)(param_6 + 1),*(undefined4 *)((longlong)param_6 + 0xc));
    }
    else if (param_5 == '\x05') {
      FUN_00423010(&local_38,*(undefined4 *)param_6,*(undefined4 *)((longlong)param_6 + 4),
                   *(undefined4 *)(param_6 + 1),*(undefined4 *)((longlong)param_6 + 0xc));
    }
    else if (param_5 == '\x06') {
      FUN_00423010(&local_38,*(undefined4 *)param_6,*(undefined4 *)((longlong)param_6 + 4),
                   *(undefined4 *)(param_6 + 1),*(undefined4 *)((longlong)param_6 + 0xc));
    }
    (**(code **)(*param_2 + 0x158))(param_2,local_58,0x1d);
    uVar1 = FUN_00778dc0(param_2,param_3,local_58,&local_38,param_7,param_8);
  }
  else if ((byte)(param_5 - 7U) < 3) {
    if (param_5 == '\a') {
      (**(code **)(*param_2 + 0x138))(param_2,local_44,2);
    }
    else if (param_5 == '\b') {
      (**(code **)(*param_2 + 0x138))(param_2,local_44,3);
    }
    else if (param_5 == '\t') {
      (**(code **)(*param_2 + 0x138))(param_2,local_44,4);
    }
    local_38 = *param_6;
    uStack_30 = param_6[1];
    if (5 < *(int *)PTR_DAT_02001bd8) {
      FUN_00423b10(&local_38,1,1);
    }
    uVar1 = FUN_00778dc0(param_2,param_3,local_44,param_6,param_7,param_8);
  }
  else if ((byte)(param_5 - 0x1aU) < 4) {
    if (param_5 == '\x1a') {
      (**(code **)(*param_2 + 0xf0))(param_2,local_44,2);
    }
    else if (param_5 == '\x1b') {
      (**(code **)(*param_2 + 0xf0))(param_2,local_44,3);
    }
    else if (param_5 == '\x1c') {
      (**(code **)(*param_2 + 0xf0))(param_2,local_44,4);
    }
    else if (param_5 == '\x1d') {
      (**(code **)(*param_2 + 0xf0))(param_2,local_44,5);
    }
    uVar1 = FUN_00778dc0(param_2,param_3,local_44,param_6,param_7,param_8);
  }
  else if ((byte)(param_5 - 0x1eU) < 3) {
    if (param_5 == '\x1e') {
      (**(code **)(*param_2 + 200))(param_2,local_44,2);
    }
    else if (param_5 == '\x1f') {
      (**(code **)(*param_2 + 200))(param_2,local_44,3);
    }
    else {
      if (param_5 != ' ') {
        return 0;
      }
      (**(code **)(*param_2 + 200))(param_2,local_44,4);
    }
    uVar1 = FUN_00778dc0(param_2,param_3,local_44,param_6,param_7,param_8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

