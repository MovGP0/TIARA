/* Ghidra address: 0112f010 */
/* Ghidra symbol: FUN_0112f010 */


undefined8 FUN_0112f010(undefined8 param_1,byte *param_2,longlong param_3)

{
  short *psVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_c0;
  short *local_b8;
  short local_ac [70];
  
  local_c0 = 0;
  if (*param_2 == 0) {
    FUN_00414ad0(param_1,&LAB_0112f2a4);
  }
  else {
    if ((0x40 < *param_2) || (*param_2 < (param_2[1] & 0x3f))) {
      FUN_0041ddd0(&local_c0,PTR_PTR_02003350);
      FUN_0112d910(local_c0);
    }
    local_b8 = local_ac;
    bVar2 = *param_2 - (param_2[1] & 0x3f);
    uVar4 = (uint)*param_2;
    uVar3 = 0;
    if (-1 < (int)(uVar4 - 1)) {
      do {
        if (uVar3 == bVar2) {
          if (uVar3 == 0) {
            FUN_0112f000(&local_b8,0x30);
          }
          FUN_0112f000(&local_b8,*(undefined2 *)(param_3 + 0x17a));
        }
        if ((uVar3 & 1) == 0) {
          FUN_0112f000(&local_b8,(param_2[(longlong)((int)uVar3 / 2) + 2] >> 4) + 0x30);
        }
        else {
          FUN_0112f000(&local_b8,
                       CONCAT62((int6)((ulonglong)((longlong)(int)uVar3 % 2) >> 0x10),
                                (param_2[(longlong)((int)uVar3 / 2) + 2] & 0xf) + 0x30) & 0xffffffff
                      );
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar3 = (uint)*param_2;
    psVar1 = local_b8;
    while ((local_b8 = psVar1 + -1, (int)(uint)bVar2 < (int)uVar3 && (*local_b8 == 0x30))) {
      uVar3 = uVar3 - 1;
      psVar1 = local_b8;
    }
    if (*local_b8 == *(short *)(param_3 + 0x17a)) {
      *local_b8 = 0;
    }
    else {
      *psVar1 = 0;
    }
    for (local_b8 = local_ac; *local_b8 == 0x30; local_b8 = local_b8 + 1) {
    }
    if ((*local_b8 == 0) || (*local_b8 == *(short *)(param_3 + 0x17a))) {
      local_b8 = local_b8 + -1;
    }
    if (((param_2[1] & 0x80) == 0x80) && ((*local_b8 != 0x30 || (local_b8[1] != 0)))) {
      local_b8 = local_b8 + -1;
      *local_b8 = 0x2d;
    }
    FUN_004167d0(param_1,local_b8);
  }
  FUN_00414480(&local_c0);
  return param_1;
}

