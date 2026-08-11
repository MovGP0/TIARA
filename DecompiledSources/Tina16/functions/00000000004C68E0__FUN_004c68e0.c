/* Ghidra address: 004c68e0 */
/* Ghidra symbol: FUN_004c68e0 */


undefined1 FUN_004c68e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_0058d710(&local_30,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0x7f) == '\0') {
    uVar2 = FUN_00460ba0(&local_48);
    cVar1 = FUN_004c5b80(param_1,uVar2);
    if (cVar1 == '\0') {
      if ((*(int *)(*(longlong *)(param_1 + 0xb8) + 0x24) == -0x80000000) ||
         (cVar1 = FUN_0046c280(&local_30), cVar1 == '\0')) {
        local_61 = 0;
      }
      else {
        local_61 = 1;
      }
    }
    else {
      cVar1 = FUN_0046c3d0(&local_48);
      if ((cVar1 == '\0') && (cVar1 = FUN_0046c280(&local_30), cVar1 != '\0')) {
        local_61 = 1;
      }
      else {
        local_61 = 0;
      }
    }
  }
  else {
    FUN_0058d710(&local_60,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8));
    local_61 = FUN_0046c500(&local_30,&local_60);
  }
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return local_61;
}

