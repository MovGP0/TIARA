/* Ghidra address: 0054a120 */
/* Ghidra symbol: FUN_0054a120 */


longlong * FUN_0054a120(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_00419430(param_2,&DAT_0052f6f8);
  }
  else {
    uVar1 = FUN_0053c4f0(param_1 + 0x68);
    FUN_00419260(param_2,&DAT_0052f6f8,1,uVar1);
    iVar4 = 0;
    if (*param_2 != 0) {
      iVar4 = (int)*(undefined8 *)(*param_2 + -8);
    }
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_00545f10(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18),&PTR_FUN_00549908
                             ,*(undefined8 *)(param_1 + 0x80),param_1 + 0x68);
        uVar2 = FUN_004113f0(uVar2,&LAB_0052a288);
        *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return param_2;
}

