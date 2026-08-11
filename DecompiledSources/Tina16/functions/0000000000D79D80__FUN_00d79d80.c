/* Ghidra address: 00d79d80 */
/* Ghidra symbol: FUN_00d79d80 */


undefined8 FUN_00d79d80(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_38 = 0;
  cVar1 = FUN_00d5a0b0(param_1[0x24]);
  if (((cVar1 != '\0') && (0 < *(int *)((longlong)param_1 + 0x84))) && (0 < (int)param_1[0x11])) {
    if ((*(char *)((longlong)param_1 + 0x79) == '\r') ||
       (*(char *)((longlong)param_1 + 0xf5) == '\0')) {
      local_38 = thunk_FUN_03976db5(*(int *)((longlong)param_1 + 0x7c),(int)param_1[0x10],
                                    *(int *)((longlong)param_1 + 0x7c) +
                                    *(int *)((longlong)param_1 + 0x84),
                                    (int)param_1[0x10] + (int)param_1[0x11]);
    }
    else {
      FUN_00d77cb0(param_1,&local_30);
      local_68 = (undefined4)param_1[0x11];
      FUN_004238d0(local_50,0,0,*(undefined4 *)((longlong)param_1 + 0x84));
      FUN_00d77b90(param_1,local_50);
      local_20 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
      (**(code **)(*local_20 + 0xe0))
                (local_20,*(undefined4 *)((longlong)param_1 + 0x84),(int)param_1[0x11]);
      uVar2 = FUN_00609e10(local_20);
      local_68 = (undefined4)param_1[0x11];
      FUN_004238d0(local_50,0,0,*(undefined4 *)((longlong)param_1 + 0x84));
      FUN_00d57cd0(uVar2,local_50,&DAT_007f007f);
      if (*(char *)((longlong)param_1 + 0x79) == '\x19') {
        *(undefined1 *)((longlong)param_1 + 0x79) = 0;
        uVar2 = FUN_00609e10(local_20);
        FUN_00d77cb0(param_1,local_50);
        (**(code **)(*param_1 + 0xa8))(param_1,uVar2,local_50);
        *(undefined1 *)((longlong)param_1 + 0x79) = 0x19;
      }
      else {
        uVar2 = FUN_00609e10(local_20);
        FUN_00d77cb0(param_1,local_50);
        (**(code **)(*param_1 + 0xa8))(param_1,uVar2,local_50);
      }
      local_38 = FUN_00d583f0(local_20,local_30,local_2c);
      FUN_00410f20(local_20);
      FUN_00d77b90(param_1,&local_30);
    }
  }
  return local_38;
}

