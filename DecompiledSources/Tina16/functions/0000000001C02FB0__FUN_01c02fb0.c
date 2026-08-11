/* Ghidra address: 01c02fb0 */
/* Ghidra symbol: FUN_01c02fb0 */


void FUN_01c02fb0(longlong *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined7 uVar3;
  bool bVar4;
  
  cVar1 = FUN_00652a50(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_004113d0(param_1[0x93],&PTR_FUN_01bee940), cVar1 != '\0')) {
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    if (*(byte *)((longlong)param_1 + 0xad) < 8) {
      bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)((longlong)param_1 + 0xad) & 0x1f) & 6U) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) ||
       ((cVar1 = (**(code **)(*param_1 + 0xf8))(param_1), cVar1 != '\0' &&
        (*(char *)((longlong)param_1 + 0xad) == '\0')))) {
      param_5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    }
    if (*(byte *)((longlong)param_1 + 0xad) < 8) {
      bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)((longlong)param_1 + 0xad) & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) ||
       ((cVar1 = (**(code **)(*param_1 + 0xf8))(param_1), iVar2 = param_4, cVar1 != '\0' &&
        (*(char *)((longlong)param_1 + 0xad) == '\0')))) {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
    }
    cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((cVar1 == '\0') && (iVar2 != (int)param_1[0x13])) {
      param_4 = iVar2;
    }
  }
  FUN_0065aa90(param_1,param_2,param_3,param_4,param_5);
  return;
}

