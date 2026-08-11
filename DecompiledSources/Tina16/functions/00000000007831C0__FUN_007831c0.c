/* Ghidra address: 007831c0 */
/* Ghidra symbol: FUN_007831c0 */


void FUN_007831c0(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_90 = auStack_b8;
  FUN_00417580(local_48,&DAT_0076f818);
  DAT_02012570 = 0;
  DAT_02012550 = 0;
  DAT_02012598 = 0;
  local_20 = (longlong *)FUN_00797100(DAT_02012578);
  while( true ) {
    cVar2 = thunk_FUN_00797a55(local_20);
    if (cVar2 == '\0') break;
    FUN_007978e0(local_20,local_48);
    if (local_40 != 0) {
      FUN_00410f20(local_40);
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  uVar1 = DAT_02012578;
  local_50 = DAT_02012578;
  DAT_02012578 = 0;
  FUN_00410f20(uVar1);
  uVar1 = DAT_02012580;
  local_58 = DAT_02012580;
  DAT_02012580 = 0;
  FUN_00410f20(uVar1);
  local_28 = (longlong *)FUN_0079b670(&PTR_FUN_00776160,1,DAT_02012590);
  while( true ) {
    local_60 = local_28;
    *(int *)(local_28 + 2) = (int)local_28[2] + 1;
    if (*(int *)(local_28[1] + 0x10) <= (int)local_28[2]) break;
    local_68 = local_28[1];
    local_30 = *(undefined8 *)(*(longlong *)(local_68 + 8) + (longlong)(int)local_28[2] * 8);
    FUN_00410f20(local_30);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + -0x20))(local_28,1);
  }
  uVar1 = DAT_02012588;
  local_70 = DAT_02012588;
  DAT_02012588 = 0;
  FUN_00410f20(uVar1);
  uVar1 = DAT_02012590;
  local_78 = DAT_02012590;
  DAT_02012590 = 0;
  FUN_00410f20(uVar1);
  uVar1 = DAT_02012560;
  local_80 = DAT_02012560;
  DAT_02012560 = 0;
  FUN_00410f20(uVar1);
  FUN_00417740(local_48,&DAT_0076f818);
  return;
}

