/* Ghidra address: 00781140 */
/* Ghidra symbol: FUN_00781140 */


undefined8 FUN_00781140(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  longlong local_90;
  longlong *local_88;
  undefined *local_80 [2];
  longlong local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [40];
  
  local_a0 = auStack_e8;
  FUN_00417580(local_68,&DAT_0075cb10);
  FUN_00417580(local_80,&DAT_0076f818);
  FUN_00417580(local_38,&DAT_0075cb10);
  if ((DAT_02012558 != '\0') && (DAT_02012571 != '\0')) {
    FUN_007809d0(&DAT_0075cd78);
  }
  local_48 = (longlong *)FUN_00797100(DAT_02012578);
  do {
    do {
      cVar1 = thunk_FUN_00797a55(local_48);
      if (cVar1 == '\0') {
        if (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + -0x20))(local_48,1);
        }
        local_a8 = 0x11;
        local_c8 = 0;
        local_b0 = param_2;
        uVar2 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_02001748,&local_b0);
        FUN_004134c0(uVar2);
LAB_0078139e:
        FUN_00417740(local_80,&DAT_0076f818);
        FUN_00417740(local_68,&DAT_0075cb10);
        FUN_00417740(local_38,&DAT_0075cb10);
        return param_1;
      }
      FUN_007978e0(local_48,local_80);
      cVar1 = FUN_0043e560(param_2,local_80[0],1);
    } while (cVar1 == '\0');
    local_40 = (longlong *)FUN_00799090(&PTR_FUN_00772890,1,DAT_02012580);
    while( true ) {
      local_88 = local_40;
      *(int *)(local_40 + 2) = (int)local_40[2] + 1;
      if (*(int *)(local_40[1] + 0x10) <= (int)local_40[2]) break;
      FUN_00417740(local_38,&DAT_0075cb10);
      local_90 = local_40[1];
      FUN_00417c40(local_38,*(longlong *)(local_90 + 8) + (longlong)(int)local_40[2] * 0x20,
                   &DAT_0075cb10);
      FUN_00417c40(local_68,local_38,&DAT_0075cb10);
      FUN_00417740(local_38,&DAT_0075cb10);
      if (local_50 == local_70) {
        FUN_00417c40(param_1,local_68,&DAT_0075cb10);
        FUN_00781420(0,local_a0);
        FUN_00781460(0,local_a0);
        goto LAB_0078139e;
      }
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + -0x20))(local_40,1);
    }
  } while( true );
}

