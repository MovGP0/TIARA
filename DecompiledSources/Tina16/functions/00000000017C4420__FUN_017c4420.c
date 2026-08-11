/* Ghidra address: 017c4420 */
/* Ghidra symbol: FUN_017c4420 */


double FUN_017c4420(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  short local_res10;
  short sStackX_12;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  short local_60;
  short sStack_5e;
  short local_5c;
  short sStack_5a;
  
  dVar6 = 32765.0;
  iVar1 = FUN_017c2b70();
  iVar5 = 0;
  if (-1 < iVar1 + -2) {
    iVar1 = iVar1 + -1;
    dVar6 = 32765.0;
    do {
      local_64 = FUN_017c2c60(*(undefined8 *)(param_1 + 0x70),iVar5);
      uVar2 = FUN_017c2c60(*(undefined8 *)(param_1 + 0x70),iVar5 + 1);
      local_5c = (short)local_64;
      local_60 = (short)uVar2;
      local_res10 = (short)param_2;
      sStackX_12 = (short)((uint)param_2 >> 0x10);
      sStack_5a = (short)((uint)local_64 >> 0x10);
      local_68 = uVar2;
      if (local_5c == local_60) {
        uVar3 = (int)local_res10 - (int)local_5c;
        uVar4 = (int)uVar3 >> 0x1f;
        dVar7 = (double)(int)((uVar3 ^ uVar4) - uVar4);
        local_6c = FUN_00b92120((int)local_5c,(longlong)sStackX_12);
        sStack_5e = (short)((uint)uVar2 >> 0x10);
        if (sStack_5e < sStack_5a) {
          local_68 = local_64;
          local_64 = uVar2;
        }
        if (sStackX_12 < local_64._2_2_) {
          local_6c = local_64;
          uVar2 = local_6c;
          local_6c._0_2_ = (short)local_64;
          dVar7 = (double)FUN_0040c760((double)(((int)local_res10 - (int)(short)local_6c) *
                                                ((int)local_res10 - (int)(short)local_6c) +
                                               ((int)sStackX_12 - (int)local_64._2_2_) *
                                               ((int)sStackX_12 - (int)local_64._2_2_)));
          local_6c = uVar2;
        }
        else if (local_68._2_2_ < sStackX_12) {
          local_6c = local_68;
          uVar2 = local_6c;
          local_6c._0_2_ = (short)local_68;
          dVar7 = (double)FUN_0040c760((double)(((int)local_res10 - (int)(short)local_6c) *
                                                ((int)local_res10 - (int)(short)local_6c) +
                                               ((int)sStackX_12 - (int)local_68._2_2_) *
                                               ((int)sStackX_12 - (int)local_68._2_2_)));
          local_6c = uVar2;
        }
      }
      else {
        uVar3 = (int)sStackX_12 - (int)sStack_5a;
        uVar4 = (int)uVar3 >> 0x1f;
        dVar7 = (double)(int)((uVar3 ^ uVar4) - uVar4);
        local_6c = FUN_00b92120((longlong)local_res10,(int)sStack_5a);
        if (local_60 < local_5c) {
          local_68 = local_64;
          local_64 = uVar2;
        }
        if (local_res10 < (short)local_64) {
          local_6c = local_64;
          uVar2 = local_6c;
          local_6c._2_2_ = (short)((uint)local_64 >> 0x10);
          dVar7 = (double)FUN_0040c760((double)(((int)local_res10 - (int)(short)local_64) *
                                                ((int)local_res10 - (int)(short)local_64) +
                                               ((int)sStackX_12 - (int)local_6c._2_2_) *
                                               ((int)sStackX_12 - (int)local_6c._2_2_)));
          local_6c = uVar2;
        }
        else if ((short)local_68 < local_res10) {
          local_6c = local_68;
          uVar2 = local_6c;
          local_6c._2_2_ = (short)((uint)local_68 >> 0x10);
          dVar7 = (double)FUN_0040c760((double)(((int)local_res10 - (int)(short)local_68) *
                                                ((int)local_res10 - (int)(short)local_68) +
                                               ((int)sStackX_12 - (int)local_6c._2_2_) *
                                               ((int)sStackX_12 - (int)local_6c._2_2_)));
          local_6c = uVar2;
        }
      }
      if (dVar7 < dVar6) {
        *param_3 = local_6c;
        dVar6 = dVar7;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return dVar6;
}

