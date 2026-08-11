/* Ghidra address: 00812f70 */
/* Ghidra symbol: FUN_00812f70 */


void FUN_00812f70(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 local_24;
  undefined4 local_1c;
  
  if ((char)param_1[0xe] == '\x1c') {
    uVar1 = FUN_00786090(param_1);
    uVar2 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    local_1c = CONCAT22(uVar2,4);
    thunk_FUN_0413e052(uVar1,0x115,(longlong)local_1c,0);
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0x1a;
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
    thunk_FUN_039ed528();
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_0413e052(uVar1,0x115,8,0);
  }
  else if ((char)param_1[10] == '\x18') {
    uVar1 = FUN_00786090(param_1);
    uVar2 = FUN_0040c770((double)*(float *)((longlong)param_1 + 0x5c));
    local_24 = CONCAT22(uVar2,4);
    thunk_FUN_0413e052(uVar1,0x114,(longlong)local_24,0);
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
    *(undefined1 *)(param_1 + 10) = 0x16;
    (**(code **)(*param_1 + 0xa0))(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
    thunk_FUN_039ed528();
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_0413e052(uVar1,0x114,8,0);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x71) == '\x04') {
      *(undefined1 *)((longlong)param_1 + 0x71) = 2;
    }
    if ((char)param_1[0xc] == '\b') {
      *(undefined1 *)(param_1 + 0xc) = 6;
    }
    if (*(char *)((longlong)param_1 + 0x51) == '\f') {
      *(undefined1 *)((longlong)param_1 + 0x51) = 10;
    }
    if ((char)param_1[8] == '\x10') {
      *(undefined1 *)(param_1 + 8) = 0xe;
    }
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}

