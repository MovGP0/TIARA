/* Ghidra address: 015b00a0 */
/* Ghidra symbol: FUN_015b00a0 */


void FUN_015b00a0(ulonglong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_1c;
  
  cVar1 = FUN_015ab240(DAT_01f6e9f0,&PTR_FUN_00478280);
  if (cVar1 != '\0') {
    local_1c = (**(code **)(*DAT_01f6e9f0 + 0x28))(DAT_01f6e9f0);
    local_1c = local_1c + -1;
    if (-1 < local_1c) {
      do {
        uVar2 = (**(code **)(*DAT_01f6e9f0 + 0x30))(DAT_01f6e9f0,local_1c);
        uVar3 = FUN_00419bd0(uVar2);
        if (uVar3 == (param_1 & 0xffffffff)) {
          (**(code **)(*DAT_01f6e9f0 + 0x98))(DAT_01f6e9f0,local_1c);
        }
        local_1c = local_1c + -1;
      } while (local_1c != -1);
    }
  }
  return;
}

