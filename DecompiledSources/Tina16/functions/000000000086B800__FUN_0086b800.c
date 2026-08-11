/* Ghidra address: 0086b800 */
/* Ghidra symbol: FUN_0086b800 */


void FUN_0086b800(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *local_res10 [3];
  undefined1 auStack_e8 [80];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_38;
  undefined1 local_30 [32];
  
  local_60 = auStack_e8;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_68 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00417580(&local_38,&DAT_00862ac0);
  FUN_004194b0(&local_50,DAT_020127b8,&DAT_00862b58);
  local_48 = 0;
  while( true ) {
    local_58 = local_50;
    if (local_50 != 0) {
      local_58 = *(ulonglong *)(local_50 - 8);
    }
    if (local_58 <= local_48) break;
    FUN_00417c40(&local_38,local_50 + local_48 * 0x20,&DAT_00862ac0);
    cVar1 = FUN_0046c3d0(local_30);
    if (cVar1 == '\0') {
      FUN_004168e0(&local_68,local_38);
      uVar2 = (**(code **)(*local_res10[0] + 0x280))(local_res10[0],local_68,local_30);
      FUN_0041d630(uVar2);
    }
    local_48 = local_48 + 1;
  }
  FUN_00419430(&local_50,&DAT_00862b58);
  FUN_00460ba0(&local_98);
  FUN_00460ba0(&local_80);
  FUN_00414520(&local_68);
  FUN_00419430(&local_50,&DAT_00862b58);
  FUN_00417740(&local_38,&DAT_00862ac0);
  FUN_0041b800(local_res10);
  return;
}

