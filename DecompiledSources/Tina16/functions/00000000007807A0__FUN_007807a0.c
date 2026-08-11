/* Ghidra address: 007807a0 */
/* Ghidra symbol: FUN_007807a0 */


undefined1 FUN_007807a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_41;
  longlong *local_40;
  undefined1 local_38 [40];
  
  local_90 = auStack_b8;
  FUN_00417580(local_68,&DAT_0075cb10);
  FUN_00417580(local_38,&DAT_0075cb10);
  local_41 = 1;
  *param_2 = param_1;
  local_70 = param_2[1];
  local_40 = (longlong *)FUN_00799090(&PTR_FUN_00772890,1,local_70);
  while( true ) {
    local_78 = local_40;
    *(int *)(local_40 + 2) = (int)local_40[2] + 1;
    if (*(int *)(local_40[1] + 0x10) <= (int)local_40[2]) break;
    FUN_00417740(local_38,&DAT_0075cb10);
    local_80 = local_40[1];
    FUN_00417c40(local_38,*(longlong *)(local_80 + 8) + (longlong)(int)local_40[2] * 0x20,
                 &DAT_0075cb10);
    FUN_00417c40(local_68,local_38,&DAT_0075cb10);
    FUN_00417740(local_38,&DAT_0075cb10);
    uVar1 = FUN_00416740(local_58);
    thunk_FUN_03e86d8d(param_1,uVar1,FUN_007806e0,param_2);
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + -0x20))(local_40,1);
  }
  FUN_00417740(local_68,&DAT_0075cb10);
  FUN_00417740(local_38,&DAT_0075cb10);
  return local_41;
}

