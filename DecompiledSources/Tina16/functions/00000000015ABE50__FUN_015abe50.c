/* Ghidra address: 015abe50 */
/* Ghidra symbol: FUN_015abe50 */


void FUN_015abe50(ulonglong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 local_c;
  
  if ((DAT_01f6bdf0 != 0) && (local_c = *(int *)(DAT_01f6bdf0 + 0x10) + -1, -1 < local_c)) {
    do {
      uVar1 = FUN_004aeac0(DAT_01f6bdf0,local_c);
      uVar2 = FUN_00419bd0(uVar1);
      if (uVar2 == (param_1 & 0xffffffff)) {
        FUN_004ae870(DAT_01f6bdf0,local_c);
      }
      local_c = local_c + -1;
    } while (local_c != -1);
  }
  return;
}

