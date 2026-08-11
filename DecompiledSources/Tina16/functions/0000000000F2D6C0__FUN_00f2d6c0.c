/* Ghidra address: 00f2d6c0 */
/* Ghidra symbol: FUN_00f2d6c0 */


/* WARNING: Removing unreachable block (ram,0x00f2df5d) */
/* WARNING: Removing unreachable block (ram,0x00f2e0ad) */
/* WARNING: Removing unreachable block (ram,0x00f2db92) */
/* WARNING: Removing unreachable block (ram,0x00f2d87a) */
/* WARNING: Removing unreachable block (ram,0x00f2d8e0) */
/* WARNING: Removing unreachable block (ram,0x00f2dbf9) */

void FUN_00f2d6c0(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_38 [2];
  undefined1 local_30;
  undefined1 local_28 [8];
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  pbVar1 = *(byte **)(param_1 + 8);
  bVar2 = *pbVar1;
  if ((bVar2 & 0xe0) == 0xc0) {
    if (*(byte **)(param_1 + 0x18) < pbVar1 + 1) {
      uVar6 = (longlong)pbVar1 - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < uVar6 + 0x80000000) {
        uVar6 = FUN_00410a90();
      }
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,uVar6 & 0xffffffff,param_1,0,PTR_PTR_02003c08,
                           local_28,0xffffffff);
      FUN_004134c0(uVar7);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 1) & 0xc0) != 0x80) {
      lVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar8 + 0x80000000U) {
        lVar8 = FUN_00410a90();
      }
      local_38[0] = 2;
      local_30 = 0;
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,(int)lVar8 + 1,param_1,0,PTR_PTR_02005190,local_38,0)
      ;
      FUN_004134c0(uVar7);
    }
    FUN_00419260(param_1 + 0x28,&DAT_00406578,1,6);
    *(undefined4 *)(param_1 + 0x34) = 6;
    lVar9 = 0;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(longlong *)(lVar8 + -8) == 0)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x5c;
    lVar9 = 1;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 2)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x75;
    lVar9 = 2;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 3)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) = *PTR_u_0123456789ABCDEF_01efb7a0;
    bVar2 = (**(byte **)(param_1 + 8) & 0x1c) >> 2;
    lVar9 = 3;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 4)) {
      bVar2 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) = PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uint)bVar2 * 2];
    bVar2 = (**(byte **)(param_1 + 8) & 3) * '\x04' | ((*(byte **)(param_1 + 8))[1] & 0x30) >> 4;
    lVar9 = 4;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 5)) {
      bVar2 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) = PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uint)bVar2 * 2];
    uVar3 = (uint)(*(byte *)(*(longlong *)(param_1 + 8) + 1) & 0xf);
    lVar9 = 5;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 6)) {
      uVar3 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar3 & 0xff) * 2];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
  }
  else if ((bVar2 & 0xf0) == 0xe0) {
    if (*(byte **)(param_1 + 0x18) < pbVar1 + 2) {
      uVar6 = (longlong)pbVar1 - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < uVar6 + 0x80000000) {
        uVar6 = FUN_00410a90();
      }
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,uVar6 & 0xffffffff,param_1,0,PTR_PTR_02003c08,
                           local_28,0xffffffff);
      FUN_004134c0(uVar7);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 1) & 0xc0) != 0x80) {
      lVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar8 + 0x80000000U) {
        lVar8 = FUN_00410a90();
      }
      local_38[0] = 3;
      local_30 = 0;
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,(int)lVar8 + 1,param_1,0,PTR_PTR_02005190,local_38,0)
      ;
      FUN_004134c0(uVar7);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 2) & 0xc0) != 0x80) {
      lVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar8 + 0x80000000U) {
        lVar8 = FUN_00410a90();
      }
      local_38[0] = 3;
      local_30 = 0;
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,(int)lVar8 + 2,param_1,0,PTR_PTR_02005190,local_38,0)
      ;
      FUN_004134c0(uVar7);
    }
    FUN_00419260(param_1 + 0x28,&DAT_00406578,1,6);
    *(undefined4 *)(param_1 + 0x34) = 6;
    lVar9 = 0;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(longlong *)(lVar8 + -8) == 0)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x5c;
    lVar9 = 1;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 2)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x75;
    uVar3 = (uint)(**(byte **)(param_1 + 8) & 0xf);
    lVar9 = 2;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 3)) {
      uVar3 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar3 & 0xff) * 2];
    bVar2 = (*(byte *)(*(longlong *)(param_1 + 8) + 1) & 0x3c) >> 2;
    lVar9 = 3;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 4)) {
      bVar2 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) = PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uint)bVar2 * 2];
    bVar2 = (*(byte *)(*(longlong *)(param_1 + 8) + 1) & 3) * '\x04' |
            (*(byte *)(*(longlong *)(param_1 + 8) + 2) & 0x30) >> 4;
    lVar9 = 4;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 5)) {
      bVar2 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) = PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uint)bVar2 * 2];
    uVar3 = (uint)(*(byte *)(*(longlong *)(param_1 + 8) + 2) & 0xf);
    lVar9 = 5;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 6)) {
      uVar3 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar3 & 0xff) * 2];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 3;
  }
  else if ((bVar2 & 0xf8) == 0xf0) {
    if (*(byte **)(param_1 + 0x18) < pbVar1 + 3) {
      uVar6 = (longlong)pbVar1 - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < uVar6 + 0x80000000) {
        uVar6 = FUN_00410a90();
      }
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,uVar6 & 0xffffffff,param_1,0,PTR_PTR_02003c08,
                           local_28,0xffffffff);
      FUN_004134c0(uVar7);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 1) & 0xc0) != 0x80) {
      lVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar8 + 0x80000000U) {
        lVar8 = FUN_00410a90();
      }
      local_38[0] = 4;
      local_30 = 0;
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,(int)lVar8 + 1,param_1,0,PTR_PTR_02005190,local_38,0)
      ;
      FUN_004134c0(uVar7);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 2) & 0xc0) != 0x80) {
      lVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar8 + 0x80000000U) {
        lVar8 = FUN_00410a90();
      }
      local_38[0] = 4;
      local_30 = 0;
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,(int)lVar8 + 2,param_1,0,PTR_PTR_02005190,local_38,0)
      ;
      FUN_004134c0(uVar7);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 3) & 0xc0) != 0x80) {
      lVar8 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar8 + 0x80000000U) {
        lVar8 = FUN_00410a90();
      }
      local_38[0] = 4;
      local_30 = 0;
      uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,(int)lVar8 + 3,param_1,0,PTR_PTR_02005190,local_38,0)
      ;
      FUN_004134c0(uVar7);
    }
    pbVar1 = *(byte **)(param_1 + 8);
    uVar6 = ((((ulonglong)(*pbVar1 & 7) << 6 | (ulonglong)(pbVar1[1] & 0x3f)) << 6 |
             (ulonglong)(pbVar1[2] & 0x3f)) << 6 | (ulonglong)(pbVar1[3] & 0x3f)) - 0x10000;
    uVar5 = (uint)(uVar6 >> 10);
    uVar3 = (uint)uVar6;
    FUN_00419260(param_1 + 0x28,&DAT_00406578,1,0xc);
    *(undefined4 *)(param_1 + 0x34) = 0xc;
    lVar9 = 0;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(longlong *)(lVar8 + -8) == 0)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x5c;
    lVar9 = 1;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 2)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x75;
    uVar4 = 0xd;
    lVar9 = 2;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 3)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar4 & 0xff) * 2];
    uVar4 = ((uVar5 & 0x7ff | 0xd800) & 0xf00) >> 8;
    if (0xff < uVar4) {
      uVar4 = FUN_00410a90();
    }
    lVar9 = 3;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 4)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar4 & 0xff) * 2];
    uVar4 = (uVar5 & 0xf0) >> 4;
    if (0xff < uVar4) {
      uVar4 = FUN_00410a90();
    }
    lVar9 = 4;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 5)) {
      uVar4 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar4 & 0xff) * 2];
    uVar5 = uVar5 & 0xf;
    if (0xff < uVar5) {
      uVar5 = FUN_00410a90();
    }
    lVar9 = 5;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 6)) {
      uVar5 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar5 & 0xff) * 2];
    lVar9 = 6;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 7)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x5c;
    lVar9 = 7;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 8)) {
      lVar9 = FUN_00410a90();
    }
    *(undefined1 *)(lVar8 + lVar9) = 0x75;
    uVar5 = 0xd;
    lVar9 = 8;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 9)) {
      uVar5 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar5 & 0xff) * 2];
    uVar5 = ((uVar3 & 0x7ff | 0xdc00) & 0xf00) >> 8;
    if (0xff < uVar5) {
      uVar5 = FUN_00410a90();
    }
    lVar9 = 9;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 10)) {
      uVar5 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar5 & 0xff) * 2];
    uVar5 = (uVar3 & 0xf0) >> 4;
    if (0xff < uVar5) {
      uVar5 = FUN_00410a90();
    }
    lVar9 = 10;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 0xb)) {
      uVar5 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar5 & 0xff) * 2];
    uVar3 = uVar3 & 0xf;
    if (0xff < uVar3) {
      uVar3 = FUN_00410a90();
    }
    lVar9 = 0xb;
    lVar8 = *(longlong *)(param_1 + 0x28);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + -8) < 0xc)) {
      uVar3 = FUN_00410a90();
    }
    *(undefined *)(lVar8 + lVar9) =
         PTR_u_0123456789ABCDEF_01efb7a0[(longlong)(int)(uVar3 & 0xff) * 2];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
  }
  else {
    uVar6 = (longlong)pbVar1 - *(longlong *)(param_1 + 0x10);
    if (0xffffffff < uVar6 + 0x80000000) {
      uVar6 = FUN_00410a90();
    }
    uVar7 = FUN_00f2c2b0(&PTR_FUN_00f21720,1,uVar6 & 0xffffffff,param_1,0,PTR_PTR_02004f80,local_28,
                         0xffffffff);
    FUN_004134c0(uVar7);
  }
  return;
}

