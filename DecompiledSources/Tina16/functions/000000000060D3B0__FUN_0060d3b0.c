/* Ghidra address: 0060d3b0 */
/* Ghidra symbol: FUN_0060d3b0 */


void FUN_0060d3b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_88;
  FUN_0060d2c0(param_1,param_2,0);
  if (param_2 != 0) {
    iVar2 = thunk_FUN_03ea2ad7(param_2,local_38);
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_03d2c01a(local_20,0x20,local_58);
      if (iVar2 != 0) {
        lVar1 = param_1[9];
        *(undefined4 *)(lVar1 + 0x18) = local_54;
        *(undefined4 *)(lVar1 + 0x1c) = local_50;
      }
      thunk_FUN_0416f828(local_28);
      thunk_FUN_0416f828(local_20);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

