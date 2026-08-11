/* Ghidra address: 0054adc0 */
/* Ghidra symbol: FUN_0054adc0 */


longlong * FUN_0054adc0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *local_30 [2];
  
  lVar2 = FUN_0054a100();
  piVar1 = *(int **)(lVar2 + -0xc0);
  if (piVar1 == (int *)0x0) {
    FUN_00419430(param_2,&DAT_00531568);
  }
  else {
    local_30[0] = piVar1 + (longlong)*piVar1 * 10 + 2;
    FUN_00419260(param_2,&DAT_00531568,1,(longlong)*piVar1);
    iVar6 = *piVar1;
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        puVar3 = (undefined8 *)FUN_0053c4c0(local_30);
        uVar4 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          uVar4 = *puVar3;
        }
        uVar4 = FUN_00542630(DAT_020116a8,uVar4);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_0052c988);
        *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return param_2;
}

