/* Ghidra address: 006de1c0 */
/* Ghidra symbol: FUN_006de1c0 */


void FUN_006de1c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_006dfe80(*(undefined8 *)(param_1 + 8));
  if ((*(char *)(param_1 + 0x38) == '\0') &&
     (cVar1 = FUN_004113d0(param_2,&PTR_FUN_006b5a58), cVar1 != '\0')) {
    FUN_006dc8a0(param_1,*(undefined8 *)(param_2 + 0x10));
    FUN_006dc990(param_1,*(undefined8 *)(param_2 + 0x18));
    FUN_006dcbd0(param_1,*(undefined4 *)(param_2 + 0x28));
    FUN_006dcca0(param_1,*(undefined4 *)(param_2 + 0x2c));
    FUN_006dcd70(param_1,*(undefined4 *)(param_2 + 0x34));
    FUN_006dcd10(param_1,*(undefined4 *)(param_2 + 0x30));
    uVar2 = FUN_006dd330(param_2);
    FUN_006dd300(param_1,uVar2);
    uVar2 = FUN_006dd240(param_2);
    FUN_006dd250(param_1,uVar2);
    uVar2 = FUN_006dd200(param_2);
    FUN_006dd210(param_1,uVar2);
    uVar2 = FUN_006dd2b0(param_2);
    FUN_006dd340(param_1,uVar2);
    return;
  }
  FUN_004b1060(param_1,param_2);
  return;
}

