/* Ghidra address: 0159f6f0 */
/* Ghidra symbol: FUN_0159f6f0 */


undefined8 FUN_0159f6f0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_10;
  
  if ((param_1 == (longlong *)0x0) || (param_1[5] == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    local_18 = (int *)param_1[5];
    if (((int)param_1[1] == 0) && ((uint)local_18[0x11] < 8)) {
      uVar2 = 0xfffffffb;
    }
    else {
      if (*local_18 != 0x1f) {
        *local_18 = 0x1f;
        local_18[0x10] = local_18[0x10] << ((byte)local_18[0x11] & 7);
        local_18[0x11] = local_18[0x11] - (local_18[0x11] & 7U);
        local_28 = 0;
        local_10 = local_18;
        while (7 < (uint)local_18[0x11]) {
          local_24[local_28] = (char)local_18[0x10];
          local_28 = local_28 + 1;
          local_18[0x10] = (uint)local_18[0x10] >> 8;
          local_18[0x11] = local_18[0x11] + -8;
        }
        local_18[0x1e] = 0;
        FUN_015a0530(local_18 + 0x1e,local_24,local_28);
      }
      uVar1 = FUN_015a0530(local_18 + 0x1e,*param_1,(int)param_1[1]);
      *(uint *)(param_1 + 1) = (int)param_1[1] - uVar1;
      *param_1 = (ulonglong)uVar1 + *param_1;
      *(uint *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar1;
      if (local_18[0x1e] == 4) {
        local_20 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_1c = *(undefined4 *)((longlong)param_1 + 0x1c);
        FUN_0159fb50(param_1);
        *(undefined4 *)((longlong)param_1 + 0xc) = local_20;
        *(undefined4 *)((longlong)param_1 + 0x1c) = local_1c;
        *local_18 = 0xb;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
  }
  return uVar2;
}

