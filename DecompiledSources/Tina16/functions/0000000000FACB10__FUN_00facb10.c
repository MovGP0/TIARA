/* Ghidra address: 00facb10 */
/* Ghidra symbol: FUN_00facb10 */


undefined4 FUN_00facb10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 unaff_ESI;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
  *(undefined8 *)(param_1 + 0x718) = uVar6;
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  *(undefined8 *)(param_1 + 0x710) = uVar6;
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_1 + 0x970);
  if (*(char *)(param_1 + 0x700) == '\0') {
    iVar5 = 3;
    piVar3 = &DAT_01f0405c;
    do {
      iVar1 = *piVar3;
      *(int *)(param_1 + 0x704) = iVar1;
      iVar1 = FUN_0040c770(*(double *)(param_1 + 0x718) /
                           ((double)(iVar1 * 4) * *(double *)(param_1 + 0x720)));
      *(int *)(param_1 + 0x708) = iVar1 + -1;
      if ((*(int *)(param_1 + 0x708) < 0x100) && (-1 < *(int *)(param_1 + 0x708))) {
        uVar4 = 1;
        break;
      }
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if ((char)uVar4 == '\0') {
      FUN_00faca70(param_1,L"Error in generation of PWM data");
      unaff_ESI = 0;
    }
    else {
      lVar2 = FUN_0040c770(*(double *)(param_1 + 0x710) /
                           ((double)*(int *)(param_1 + 0x704) * *(double *)(param_1 + 0x720)));
      *(double *)(param_1 + 0x728) = (double)lVar2;
      unaff_ESI = uVar4;
    }
  }
  return unaff_ESI;
}

