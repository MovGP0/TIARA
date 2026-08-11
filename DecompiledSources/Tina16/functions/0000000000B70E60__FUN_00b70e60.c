/* Ghidra address: 00b70e60 */
/* Ghidra symbol: FUN_00b70e60 */


void FUN_00b70e60(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  
  FUN_0040d200(&local_40,8,0);
  uVar6 = (param_3 & 0xffffffff) / 8;
  FUN_00409a70(&DAT_01e89858,param_1 + 0x13,0x1000);
  FUN_00409a70(&DAT_01e89810,param_1 + 0x213,0x48);
  uVar5 = 0;
  uVar4 = 0;
  do {
    iVar3 = (int)uVar5;
    puVar1 = (uint *)((longlong)param_1 + uVar4 * 4 + 0x1098);
    *puVar1 = *puVar1 ^ (uint)*(byte *)(param_2 + (ulonglong)(iVar3 + 3) % uVar6) +
                        (uint)*(byte *)(param_2 + (ulonglong)(iVar3 + 2) % uVar6) * 0x100 +
                        (uint)*(byte *)(param_2 + (ulonglong)(iVar3 + 1) % uVar6) * 0x10000 +
                        (uint)*(byte *)(param_2 + uVar5) * 0x1000000;
    uVar5 = (ulonglong)(iVar3 + 4) % uVar6;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 != 0x12);
  FUN_0040d200(&local_40,8,0);
  iVar3 = 0;
  do {
    (**(code **)(*param_1 + 0x110))(param_1,&local_40,&local_40);
    *(uint *)((longlong)param_1 + (ulonglong)(uint)(iVar3 * 2) * 4 + 0x1098) =
         (uint)local_3d + (uint)local_3e * 0x100 + (uint)local_3f * 0x10000 +
         (uint)local_40 * 0x1000000;
    *(uint *)((longlong)param_1 + (ulonglong)(iVar3 * 2 + 1) * 4 + 0x1098) =
         (uint)local_39 + (uint)local_3a * 0x100 + (uint)local_3b * 0x10000 +
         (uint)local_3c * 0x1000000;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 9);
  uVar6 = 0;
  do {
    iVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x110))(param_1,&local_40,&local_40);
      *(uint *)((longlong)param_1 + (ulonglong)(uint)(iVar3 * 2) * 4 + uVar6 * 0x400 + 0x98) =
           (uint)local_3d + (uint)local_3e * 0x100 + (uint)local_3f * 0x10000 +
           (uint)local_40 * 0x1000000;
      *(uint *)((longlong)param_1 + (ulonglong)(iVar3 * 2 + 1) * 4 + uVar6 * 0x400 + 0x98) =
           (uint)local_39 + (uint)local_3a * 0x100 + (uint)local_3b * 0x10000 +
           (uint)local_3c * 0x1000000;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x80);
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
  } while (uVar2 != 4);
  return;
}

