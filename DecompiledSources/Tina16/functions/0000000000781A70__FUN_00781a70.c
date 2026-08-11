/* Ghidra address: 00781a70 */
/* Ghidra symbol: FUN_00781a70 */


char FUN_00781a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [24];
  undefined8 local_58;
  char local_49;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [40];
  
  local_90 = auStack_b8;
  FUN_00417580(local_70,&DAT_0075cb10);
  FUN_00417580(local_38,&DAT_0075cb10);
  local_49 = '\0';
  local_48 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x40);
  local_40 = (longlong *)FUN_00799090(&PTR_FUN_00772890,1,DAT_02012580);
  while( true ) {
    local_78 = local_40;
    *(int *)(local_40 + 2) = (int)local_40[2] + 1;
    if (*(int *)(local_40[1] + 0x10) <= (int)local_40[2]) break;
    FUN_00417740(local_38,&DAT_0075cb10);
    local_80 = local_40[1];
    FUN_00417c40(local_38,*(longlong *)(local_80 + 8) + (longlong)(int)local_40[2] * 0x20,
                 &DAT_0075cb10);
    FUN_00417c40(local_70,local_38,&DAT_0075cb10);
    FUN_00417740(local_38,&DAT_0075cb10);
    local_49 = FUN_007799a0(local_58,local_48,param_3);
    if (local_49 != '\0') break;
    FUN_004b6dc0(local_48,0);
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + -0x20))(local_40,1);
  }
  FUN_00410f20(local_48);
  FUN_00417740(local_70,&DAT_0075cb10);
  FUN_00417740(local_38,&DAT_0075cb10);
  return local_49;
}

