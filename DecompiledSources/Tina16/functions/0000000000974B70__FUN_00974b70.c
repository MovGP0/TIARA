/* Ghidra address: 00974b70 */
/* Ghidra symbol: FUN_00974b70 */


void FUN_00974b70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar2 = FUN_0044d490(&PTR_FUN_00901a10,param_2,L"Internal Parser Exception");
    FUN_004134c0(uVar2);
  }
  FUN_00414b90(param_1 + 0x80,*(undefined8 *)(param_2 + 0x88));
  FUN_00598010(*(longlong *)(param_1 + 0x78) + 8);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  if (*(char *)(param_1 + 0x90) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x98);
    local_20[0] = FUN_00410e60(&PTR_FUN_008f5158,1);
    FUN_00597e50(lVar1 + 8,local_20);
  }
  return;
}

