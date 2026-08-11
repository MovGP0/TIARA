/* Ghidra address: 0072aa60 */
/* Ghidra symbol: FUN_0072aa60 */


undefined4
FUN_0072aa60(longlong param_1,undefined8 param_2,int param_3,ulonglong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  int local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_26;
  char local_25;
  undefined4 local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_24 = 0;
  if (param_3 < 6) {
    if (param_3 == 5) {
      local_30 = auStack_58;
      pcVar2 = (code *)FUN_00411550(param_1,0xffeb);
      (*pcVar2)(param_1);
    }
    else if (param_3 < 3) {
      if (param_3 == 2) {
        local_25 = '\x01';
        local_30 = auStack_58;
        pcVar2 = (code *)FUN_00411550(param_1,0xffee);
        (*pcVar2)(param_1,param_4 & 0xffffffff,&local_25);
        if (local_25 == '\0') {
          local_24 = 1;
        }
      }
      else if (param_3 == 0) {
        local_30 = auStack_58;
        pcVar2 = (code *)FUN_00411550(param_1,0xffec);
        (*pcVar2)(param_1);
      }
      else {
        local_30 = auStack_58;
        if (param_3 == 1) {
          local_30 = auStack_58;
          pcVar2 = (code *)FUN_00411550(param_1,0xffe7);
          (*pcVar2)(param_1);
        }
      }
    }
    else if (param_3 == 3) {
      local_30 = auStack_58;
      FUN_00414480(&local_20);
      FUN_004167d0(&local_20,param_5);
      pcVar2 = (code *)FUN_00411550(param_1,0xffe8);
      (*pcVar2)(param_1,local_20);
      FUN_00414480(&local_20);
    }
    else {
      local_30 = auStack_58;
      if (param_3 == 4) {
        local_26 = '\0';
        local_30 = auStack_58;
        pcVar2 = (code *)FUN_00411550(param_1,0xffe5);
        (*pcVar2)(param_1,param_4 & 0xffffffff,&local_26);
        if (local_26 != '\0') {
          local_24 = 1;
        }
      }
    }
  }
  else {
    local_res20 = (int)param_4;
    if (param_3 < 9) {
      if (param_3 == 8) {
        local_30 = auStack_58;
        pcVar2 = (code *)FUN_00411550(param_1,0xffe4);
        (*pcVar2)(param_1,param_4 == 1);
      }
      else if (param_3 == 6) {
        local_30 = auStack_58;
        pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
        (*pcVar2)(param_1,param_4 & 0xffffffff);
      }
      else {
        local_30 = auStack_58;
        if (param_3 == 7) {
          *(undefined8 *)(param_1 + 0xd8) = param_2;
          uVar1 = *(undefined8 *)(param_1 + 0x80);
          local_30 = auStack_58;
          pcVar2 = (code *)FUN_00411550(uVar1,0xfffa);
          (*pcVar2)(uVar1);
          uVar1 = *(undefined8 *)(param_1 + 0x100);
          pcVar2 = (code *)FUN_00411550(uVar1,0xfffa);
          (*pcVar2)(uVar1);
          FUN_00729c40(*(undefined8 *)(param_1 + 0xf0));
          pcVar2 = (code *)FUN_00411550(param_1,0xffed);
          (*pcVar2)(param_1);
        }
      }
    }
    else if (param_3 == 9) {
      pcVar2 = (code *)FUN_00411550(param_1,0xffe9);
      (*pcVar2)(param_1);
    }
    else {
      local_30 = auStack_58;
      if (param_3 == 10) {
        local_30 = auStack_58;
        pcVar2 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar2)(param_1,local_res20 != 0);
      }
    }
  }
  FUN_00414480(&local_20);
  return local_24;
}

