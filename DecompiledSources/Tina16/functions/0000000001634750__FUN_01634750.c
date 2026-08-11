/* Ghidra address: 01634750 */
/* Ghidra symbol: FUN_01634750 */


void FUN_01634750(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x5f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5f8));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x600));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x600));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x608));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x608));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x628));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x628));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x610));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x610));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x630));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x630));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x590));
  FUN_01600500(*(undefined8 *)(param_1 + 0x578));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x578));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x588));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x598));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5a0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x580));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_01600500(*(undefined8 *)(param_1 + 0x68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_01600500(*(undefined8 *)(param_1 + 0x70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_01600500(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6b8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6c8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6d0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  FUN_01b202f0(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0xa1) != '\0') {
    FUN_00419430(param_1 + 0x690,&DAT_016212d0);
    FUN_00419430(param_1 + 0x6a0,&DAT_01621318);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar1 = 0;
    if (iVar3 - 1U < 0x80000000) {
      do {
        iVar4 = *(int *)(param_1 + 0x54);
        iVar2 = 0;
        if (iVar4 - 1U < 0x80000000) {
          do {
            FUN_00410f20(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x6a8) + (longlong)iVar1 * 8) +
                          (longlong)iVar2 * 8));
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00419430(param_1 + 0x6a8,&DAT_016213a8);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    FUN_00419430(param_1 + 0x98,&DAT_01621240);
  }
  FUN_00419430(param_1 + 0xa8,&DAT_01621288);
  FUN_00419430(param_1 + 0x698,&DAT_016212d0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

