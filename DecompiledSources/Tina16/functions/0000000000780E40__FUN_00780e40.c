/* Ghidra address: 00780e40 */
/* Ghidra symbol: FUN_00780e40 */


undefined8 FUN_00780e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_41;
  longlong *local_40;
  undefined1 local_38 [40];
  
  local_80 = auStack_a8;
  FUN_00417580(&local_68,&DAT_0075cb10);
  FUN_00417580(local_38,&DAT_0075cb10);
  FUN_0040d200(param_2,0x20,0);
  local_40 = (longlong *)FUN_00799090(&PTR_FUN_00772890,1,DAT_02012580);
  while( true ) {
    local_70 = local_40;
    *(int *)(local_40 + 2) = (int)local_40[2] + 1;
    if (*(int *)(local_40[1] + 0x10) <= (int)local_40[2]) break;
    FUN_00417740(local_38,&DAT_0075cb10);
    local_78 = local_40[1];
    FUN_00417c40(local_38,*(longlong *)(local_78 + 8) + (longlong)(int)local_40[2] * 0x20,
                 &DAT_0075cb10);
    FUN_00417c40(&local_68,local_38,&DAT_0075cb10);
    FUN_00417740(local_38,&DAT_0075cb10);
    if (param_4 == '\0') {
      local_41 = FUN_0043e560(param_3,local_68,1);
    }
    else if (param_4 == '\x01') {
      local_41 = FUN_0043e560(param_3,local_60,1);
    }
    else if (param_4 == '\x02') {
      local_41 = FUN_0043e560(param_3,local_58,1);
    }
    else {
      local_41 = '\0';
    }
    if (local_41 != '\0') {
      FUN_00417c40(param_2,&local_68,&DAT_0075cb10);
    }
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + -0x20))(local_40,1);
  }
  FUN_00417740(&local_68,&DAT_0075cb10);
  FUN_00417740(local_38,&DAT_0075cb10);
  return param_2;
}

