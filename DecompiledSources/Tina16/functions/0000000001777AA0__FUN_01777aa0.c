/* Ghidra address: 01777aa0 */
/* Ghidra symbol: FUN_01777aa0 */


void FUN_01777aa0(longlong param_1,undefined8 *param_2,undefined2 param_3,ushort param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  char local_19 [9];
  
  local_30 = auStack_68;
  local_38 = 0;
  local_48 = param_5;
  FUN_017690a0(param_1,param_2,param_3,param_4);
  if (param_4 < 0x29) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xd) = 1;
  }
  iVar1 = FUN_01d31a40(*param_2);
  if (iVar1 == 0) {
    local_19[0] = '\x01';
    if (0x12 < param_4) {
      FUN_01d30f00(*param_2,local_19,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
    if (local_19[0] == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 1;
      FUN_01768520(&local_38,*(undefined8 *)(param_1 + 0x48),0);
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))(*(longlong **)(param_1 + 0xb0),local_38)
      ;
    }
    else {
      FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xb0));
      if (0x10 < param_4) {
        FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xe8));
        FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xf0));
        FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xf8));
      }
    }
    if (0x11 < param_4) {
      FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x100));
    }
  }
  FUN_00414480(&local_38);
  return;
}

