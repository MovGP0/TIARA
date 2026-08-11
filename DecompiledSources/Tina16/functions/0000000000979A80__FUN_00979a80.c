/* Ghidra address: 00979a80 */
/* Ghidra symbol: FUN_00979a80 */


void FUN_00979a80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  FUN_00978130(param_1,6,lVar1);
  if (*(char *)((longlong)param_1 + 0x79) == '\0') {
    local_40 = &DAT_00979ba0;
    local_38 = *(undefined8 *)(param_2 + 0x88);
    local_30 = &DAT_00979bac;
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_40,2,0);
  }
  else {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2 + 0x80;
    }
    FUN_00978370(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,1);
  }
  *(int *)(param_1 + 0x1a) = (int)param_1[0x1a] + -1;
  if ((int)param_1[0x1a] == 0) {
    local_48 = &LAB_00979bb4;
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_48,0,0);
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,6,param_2);
  return;
}

