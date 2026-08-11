/* Ghidra address: 00b78da0 */
/* Ghidra symbol: FUN_00b78da0 */


void FUN_00b78da0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  int iVar5;
  ushort uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (undefined4 *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar3 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar3);
  }
  local_40 = *param_2;
  local_3c = param_2[1];
  iVar5 = 4;
  puVar4 = (ushort *)&local_40;
  do {
    *puVar4 = *puVar4 << 8 | *puVar4 >> 8;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0;
  do {
    uVar2 = iVar5 * 6;
    FUN_00b78d50(&local_40,*(undefined2 *)(param_1 + 0x98 + (ulonglong)uVar2 * 2));
    local_3c._0_2_ = (ushort)local_3c + *(short *)(param_1 + 0x98 + (ulonglong)(uVar2 + 2) * 2);
    local_40._2_2_ = local_40._2_2_ + *(short *)(param_1 + 0x98 + (ulonglong)(uVar2 + 1) * 2);
    FUN_00b78d50((longlong)&local_3c + 2,
                 *(undefined2 *)(param_1 + 0x98 + (ulonglong)(uVar2 + 3) * 2));
    uVar6 = (ushort)local_3c;
    local_3c._0_2_ = (ushort)local_3c ^ (ushort)local_40;
    FUN_00b78d50(&local_3c,*(undefined2 *)(param_1 + 0x98 + (ulonglong)(uVar2 + 4) * 2));
    uVar1 = local_40._2_2_;
    local_40._2_2_ = (local_40._2_2_ ^ local_3c._2_2_) + (ushort)local_3c;
    FUN_00b78d50((longlong)&local_40 + 2,
                 *(undefined2 *)(param_1 + 0x98 + (ulonglong)(uVar2 + 5) * 2));
    local_3c._0_2_ = (ushort)local_3c + local_40._2_2_;
    local_40 = CONCAT22(local_40._2_2_ ^ uVar6,(ushort)local_40 ^ local_40._2_2_);
    local_3c = CONCAT22(local_3c._2_2_ ^ (ushort)local_3c,(ushort)local_3c ^ uVar1);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  FUN_00b78d50(&local_40,*(undefined2 *)(param_1 + 0xf8));
  local_40._2_2_ = local_40._2_2_ + *(short *)(param_1 + 0xfc);
  local_3c._0_2_ = (ushort)local_3c + *(short *)(param_1 + 0xfa);
  FUN_00b78d50((longlong)&local_3c + 2,*(undefined2 *)(param_1 + 0xfe));
  uVar6 = (ushort)local_3c << 8;
  uVar1 = (ushort)local_3c >> 8;
  local_3c = CONCAT22(local_3c._2_2_ << 8 | local_3c._2_2_ >> 8,
                      local_40._2_2_ << 8 | local_40._2_2_ >> 8);
  local_40 = CONCAT22(uVar6 | uVar1,(ushort)local_40 << 8 | (ushort)local_40 >> 8);
  *param_3 = local_40;
  param_3[1] = local_3c;
  return;
}

