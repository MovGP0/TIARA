/* Ghidra address: 0040d560 */
/* Ghidra symbol: FUN_0040d560 */


undefined1 FUN_0040d560(longlong param_1,char *param_2,short param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_39;
  undefined1 local_2f [7];
  undefined1 *local_28;
  ushort local_1e;
  undefined2 local_1c;
  
  local_28 = (undefined1 *)0x0;
  *param_2 = '\0';
  if (*(char *)(param_1 + 0x2ea) < '\0') {
    if (*(char *)(param_1 + 0x2eb) == '\0') {
      iVar1 = FUN_004146a0(local_2f,6,param_1 + 0x2ec,-(int)*(char *)(param_1 + 0x2ea),param_3);
      *(char *)(param_1 + 0x2ea) = (char)iVar1;
      FUN_00409a70(local_2f,param_1 + 0x2ec,(longlong)iVar1);
    }
    else {
      *(undefined1 *)(param_1 + 0x2ea) = 0;
    }
  }
  if (*(char *)(param_1 + 0x2ea) < '\x01') {
    if (*(short *)(param_1 + 0x2e8) == param_3) {
      local_39 = FUN_0040d420(param_1,param_2);
      if (*param_2 == '\0') {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      }
    }
    else {
      uVar3 = 1;
      local_1e = FUN_0040d7c0(param_1,param_2);
      if (*param_2 == '\0') {
        if ((0xd7ff < local_1e) && (local_1e < 0xdc00)) {
          uVar3 = 2;
          FUN_0040daf0(param_1);
          local_1c = FUN_0040d7c0(param_1,param_2);
          if (*param_2 != '\0') {
            local_39 = 0x1a;
            goto LAB_0040d742;
          }
        }
        FUN_0040daf0(param_1);
        FUN_00414a20(&local_28,&local_1e,uVar3,param_3);
        iVar1 = FUN_00414cd0(local_28);
        if (iVar1 == 0) {
          local_39 = 0;
        }
        else {
          uVar2 = FUN_00414df0(&local_28);
          FUN_00409a70(uVar2,param_1 + 0x2ec,(longlong)iVar1);
          *(undefined1 *)(param_1 + 0x2eb) = 0;
          *(char *)(param_1 + 0x2ea) = (char)iVar1;
          local_39 = *local_28;
        }
      }
      else {
        local_39 = 0x1a;
      }
    }
  }
  else {
    local_39 = *(undefined1 *)(param_1 + 0x2ec + (ulonglong)*(byte *)(param_1 + 0x2eb));
  }
LAB_0040d742:
  FUN_004144d0(&local_28);
  return local_39;
}

