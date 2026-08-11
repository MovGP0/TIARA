/* Ghidra address: 00d1a5c0 */
/* Ghidra symbol: FUN_00d1a5c0 */


void FUN_00d1a5c0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong local_30 [2];
  
  iVar2 = (int)param_1[5] % 0x80;
  *(undefined1 *)((longlong)param_1 + (longlong)iVar2 + 0x2c) = 1;
  iVar2 = iVar2 + 1;
  if (0x76 < iVar2) {
    FUN_0040d200((longlong)param_1 + (longlong)iVar2 + 0x2c,(longlong)(0x76 - iVar2),0);
    (*(code *)param_1[0x1a])(param_1[0x1b],(longlong)param_1 + 0x2c);
    iVar2 = 0;
  }
  FUN_0040d200((longlong)param_1 + (longlong)iVar2 + 0x2c,(longlong)(0x76 - iVar2),0);
  iVar2 = (**(code **)(*param_1 + 0x60))(*param_1);
  uVar1 = iVar2 * 8;
  *(byte *)((longlong)param_1 + 0xa2) = *(char *)((longlong)param_1 + 0xcc) * '\b' | 1;
  *(char *)((longlong)param_1 + 0xa3) = (char)(uVar1 >> 2);
  local_30[0] = (longlong)((int)param_1[5] * 8);
  FUN_00409a70(local_30,(longlong)param_1 + 0xa4,8);
  (*(code *)param_1[0x1a])(param_1[0x1b],(longlong)param_1 + 0x2c);
  FUN_0040d200((longlong)param_1 + 0x2c,0x80,0);
  if (uVar1 == 0x80) {
    iVar2 = FUN_00cd7280(*(uint *)(param_1 + 0x19) & 0xff |
                         *(uint *)((longlong)param_1 + 0xc4) & 0xff000000 |
                         *(uint *)(param_1 + 0x18) & 0xff0000 |
                         *(uint *)((longlong)param_1 + 0xbc) & 0xff00,8);
    *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + iVar2;
    iVar2 = FUN_00cd7280(*(uint *)(param_1 + 0x19) & 0xff00 |
                         *(uint *)((longlong)param_1 + 0xc4) & 0xff |
                         *(uint *)(param_1 + 0x18) & 0xff000000 |
                         *(uint *)((longlong)param_1 + 0xbc) & 0xff0000,0x10);
    *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar2;
    iVar2 = FUN_00cd7280(*(uint *)(param_1 + 0x19) & 0xff0000 |
                         *(uint *)((longlong)param_1 + 0xc4) & 0xff00 |
                         *(uint *)(param_1 + 0x18) & 0xff |
                         *(uint *)((longlong)param_1 + 0xbc) & 0xff000000,0x18);
    *(int *)((longlong)param_1 + 0xb4) = *(int *)((longlong)param_1 + 0xb4) + iVar2;
    *(uint *)(param_1 + 0x17) =
         (int)param_1[0x17] +
         (*(uint *)(param_1 + 0x19) & 0xff000000 | *(uint *)((longlong)param_1 + 0xc4) & 0xff0000 |
          *(uint *)(param_1 + 0x18) & 0xff00 | *(uint *)((longlong)param_1 + 0xbc) & 0xff);
  }
  else if (uVar1 == 0xa0) {
    iVar2 = FUN_00cd7280(*(uint *)(param_1 + 0x19) & 0x3f |
                         *(uint *)((longlong)param_1 + 0xc4) & 0xfe000000 |
                         *(uint *)(param_1 + 0x18) & 0x1f80000,0x13);
    *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + iVar2;
    iVar2 = FUN_00cd7280(*(uint *)(param_1 + 0x19) & 0xfc0 |
                         *(uint *)((longlong)param_1 + 0xc4) & 0x3f |
                         *(uint *)(param_1 + 0x18) & 0xfe000000,0x19);
    *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar2;
    *(int *)((longlong)param_1 + 0xb4) =
         *(int *)((longlong)param_1 + 0xb4) +
         (*(uint *)(param_1 + 0x19) & 0x7f000 | *(uint *)((longlong)param_1 + 0xc4) & 0xfc0 |
         *(uint *)(param_1 + 0x18) & 0x3f);
    *(uint *)(param_1 + 0x17) =
         (int)param_1[0x17] +
         ((*(uint *)(param_1 + 0x19) & 0x1f80000 | *(uint *)((longlong)param_1 + 0xc4) & 0x7f000 |
          *(uint *)(param_1 + 0x18) & 0xfc0) >> 6);
    *(int *)((longlong)param_1 + 0xbc) =
         *(int *)((longlong)param_1 + 0xbc) +
         ((*(uint *)(param_1 + 0x19) & 0x6e000000 | *(uint *)((longlong)param_1 + 0xc4) & 0x1f80000
          | *(uint *)(param_1 + 0x18) & 0x7f000) >> 0xc);
  }
  else if (uVar1 == 0xc0) {
    iVar2 = FUN_00cd7280(*(uint *)(param_1 + 0x19) & 0x3f |
                         *(uint *)((longlong)param_1 + 0xc4) & 0xfc000000,0x1a);
    *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + iVar2;
    *(uint *)(param_1 + 0x16) =
         (int)param_1[0x16] +
         (*(uint *)(param_1 + 0x19) & 0x3e0 | *(uint *)((longlong)param_1 + 0xc4) & 0x1f);
    *(int *)((longlong)param_1 + 0xb4) =
         *(int *)((longlong)param_1 + 0xb4) +
         ((*(uint *)(param_1 + 0x19) & 0xfc00 | *(uint *)((longlong)param_1 + 0xc4) & 0x3e0) >> 5);
    *(uint *)(param_1 + 0x17) =
         (int)param_1[0x17] +
         ((*(uint *)(param_1 + 0x19) & 0x1f0000 | *(uint *)((longlong)param_1 + 0xc4) & 0xfc00) >>
         10);
    *(int *)((longlong)param_1 + 0xbc) =
         *(int *)((longlong)param_1 + 0xbc) +
         ((*(uint *)(param_1 + 0x19) & 0x3e00000 | *(uint *)((longlong)param_1 + 0xc4) & 0x1f0000)
         >> 0x10);
    *(uint *)(param_1 + 0x18) =
         (int)param_1[0x18] +
         ((*(uint *)(param_1 + 0x19) & 0xfc000000 | *(uint *)((longlong)param_1 + 0xc4) & 0x3e00000)
         >> 0x15);
  }
  else if (uVar1 == 0xe0) {
    *(int *)((longlong)param_1 + 0xac) =
         *(int *)((longlong)param_1 + 0xac) + (*(uint *)(param_1 + 0x19) >> 0x1b);
    *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + (*(uint *)(param_1 + 0x19) >> 0x16 & 0x1f);
    *(int *)((longlong)param_1 + 0xb4) =
         *(int *)((longlong)param_1 + 0xb4) + (*(uint *)(param_1 + 0x19) >> 0x12 & 0xf);
    *(uint *)(param_1 + 0x17) = (int)param_1[0x17] + (*(uint *)(param_1 + 0x19) >> 0xd & 0x1f);
    *(int *)((longlong)param_1 + 0xbc) =
         *(int *)((longlong)param_1 + 0xbc) + (*(uint *)(param_1 + 0x19) >> 9 & 0xf);
    *(uint *)(param_1 + 0x18) = (int)param_1[0x18] + (*(uint *)(param_1 + 0x19) >> 4 & 0x1f);
    *(int *)((longlong)param_1 + 0xc4) =
         *(int *)((longlong)param_1 + 0xc4) + (*(uint *)(param_1 + 0x19) & 0xf);
  }
  FUN_00d0d260(param_1,0);
  return;
}

