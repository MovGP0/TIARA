/* Ghidra address: 009582d0 */
/* Ghidra symbol: FUN_009582d0 */


byte FUN_009582d0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30 [14];
  undefined1 local_22;
  byte local_21;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0xe0))(param_2,0);
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,&local_48);
  uVar1 = FUN_00414520(&local_38);
  local_58 = local_30;
  local_21 = (**(code **)(*param_1 + 0x38))(param_1,local_48,uVar1,&local_22);
  if (local_21 < 0xa0) {
    bVar2 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_21 >> 3] >> (local_21 & 7) & 1) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_20 = FUN_00958f40(param_1,local_38);
    (**(code **)(*param_2 + 0x1b0))(param_2,local_20);
    FUN_00410f20(local_20);
  }
  FUN_0094f140(param_2);
  (**(code **)(*param_2 + 0xe0))(param_2,1);
  FUN_00414520(&local_48);
  FUN_00414520(&local_38);
  return local_21;
}

