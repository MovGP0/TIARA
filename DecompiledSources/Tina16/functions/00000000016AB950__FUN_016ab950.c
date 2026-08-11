/* Ghidra address: 016ab950 */
/* Ghidra symbol: FUN_016ab950 */


undefined8 FUN_016ab950(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  char acStack_114 [252];
  
  local_120 = 0;
  local_128 = 0;
  if (DAT_0210f8f4 < 0x1b) {
    if (DAT_0210f8f4 == 0x1a) {
      local_118 = CONCAT13(local_118._3_1_,0x464902);
      goto LAB_016aba51;
    }
    if (DAT_0210f8f4 < 0x18) {
      if (DAT_0210f8f4 == 0x17) {
        local_118 = 0x50545305;
        acStack_114[0] = '/';
        acStack_114[1] = 'U';
        goto LAB_016aba51;
      }
      if (DAT_0210f8f4 != 0xc) {
        if (DAT_0210f8f4 == 0xf) {
          local_118 = 0x4e475303;
          goto LAB_016aba51;
        }
        if (DAT_0210f8f4 != 0x10) goto LAB_016aba51;
      }
      local_118 = 0x4d494c05;
      acStack_114[0] = 'I';
      acStack_114[1] = 'T';
      goto LAB_016aba51;
    }
    if (DAT_0210f8f4 == 0x18) goto LAB_016aba12;
    if (DAT_0210f8f4 != 0x19) goto LAB_016aba51;
  }
  else {
    if (DAT_0210f8f4 < 0x2e) {
      if ((DAT_0210f8f4 == 0x2d) || (DAT_0210f8f4 == 0x22)) {
        local_118 = 0x50584504;
        acStack_114[0] = 'L';
      }
      else if (DAT_0210f8f4 == 0x23) {
        local_118 = 0x41525505;
        acStack_114[0] = 'M';
        acStack_114[1] = 'P';
      }
      goto LAB_016aba51;
    }
    if (DAT_0210f8f4 == 0x30) {
LAB_016aba12:
      local_118 = 0x58414d03;
      goto LAB_016aba51;
    }
    if (DAT_0210f8f4 != 0x31) goto LAB_016aba51;
  }
  local_118 = 0x4e494d03;
LAB_016aba51:
  FUN_004154b0(&local_120,&local_118,0);
  FUN_004155b0(&local_120,": not supported");
  FUN_00416880(&local_128,local_120);
  uVar1 = FUN_0044d490(&PTR_FUN_0169fa10,1,local_128);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_128);
  FUN_004144d0(&local_120);
  return param_1;
}

