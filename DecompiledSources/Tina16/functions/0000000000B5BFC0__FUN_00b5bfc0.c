/* Ghidra address: 00b5bfc0 */
/* Ghidra symbol: FUN_00b5bfc0 */


void FUN_00b5bfc0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_30;
  undefined2 uStack_2c;
  
  local_40 = auStack_68;
  local_30 = *param_4;
  uStack_2c = *(undefined2 *)(param_4 + 1);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x30) = local_30;
    *(undefined2 *)(param_1 + 0x34) = uStack_2c;
    FUN_00414b90(param_1 + 0x58,param_3);
    FUN_00b69370(*(undefined8 *)(param_1 + 8));
    uVar1 = FUN_00b181d0(&DAT_00b16888,1,param_2);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    FUN_00b5c0a0(param_1);
    FUN_00b5c230(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  }
  return;
}

