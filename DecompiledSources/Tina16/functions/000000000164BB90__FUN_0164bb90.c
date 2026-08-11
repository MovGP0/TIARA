/* Ghidra address: 0164bb90 */
/* Ghidra symbol: FUN_0164bb90 */


undefined8 FUN_0164bb90(undefined8 param_1,double *param_2,ulonglong param_3,double param_4)

{
  uint uVar1;
  ushort uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  uint local_3c;
  
  if (*param_2 <= param_4) {
    uVar1 = (uint)param_3 & 0xffff;
    if (param_4 < param_2[(int)(uVar1 - 3)] || param_4 == param_2[(int)(uVar1 - 3)]) {
      uVar1 = 0;
      uVar2 = (short)((param_3 & 0xffff) / 3) - 1;
      do {
        local_3c = uVar1 + uVar2 >> 1;
        dVar3 = (double)FUN_0164bb60(auStack_78);
        if (dVar3 < 0.0) {
          uVar2 = (short)local_3c - 1;
        }
        else {
          uVar1 = (uint)(ushort)((short)local_3c + 1);
        }
      } while ((ushort)uVar1 <= uVar2);
      local_3c = (uVar1 + uVar2 >> 1) * 3;
      if (param_2[(int)local_3c] == 0.0) {
        param_2[(int)local_3c] = 1e-20;
      }
      dVar3 = (double)FUN_00c42800(param_4 / param_2[(int)local_3c]);
      dVar4 = (double)FUN_00c42800(param_2[(int)(local_3c + 3)] / param_2[(int)local_3c]);
      local_48 = (param_2[(int)(local_3c + 4)] - param_2[(int)(local_3c + 1)]) * (dVar3 / dVar4) +
                 param_2[(int)(local_3c + 1)];
      local_50 = (param_2[(int)(local_3c + 5)] - param_2[(int)(local_3c + 2)]) * (dVar3 / dVar4) +
                 param_2[(int)(local_3c + 2)];
      local_48 = (double)FUN_00c43d30(local_48);
      local_50 = local_50 * 0.017453292519943295;
      FUN_00c43ad0(&local_48,&local_50);
      FUN_00c44460(param_1,local_48,local_50);
    }
    else {
      local_48 = (double)FUN_00c43d30(param_2[(int)(uVar1 - 2)]);
      local_50 = param_2[(int)(uVar1 - 1)] * 0.017453292519943295;
      FUN_00c43ad0(&local_48,&local_50);
      FUN_00c44460(param_1,local_48,local_50);
    }
  }
  else {
    local_48 = (double)FUN_00c43d30(param_2[1]);
    local_50 = param_2[2] * 0.017453292519943295;
    FUN_00c43ad0(&local_48,&local_50);
    FUN_00c44460(param_1,local_48,local_50);
  }
  return param_1;
}

