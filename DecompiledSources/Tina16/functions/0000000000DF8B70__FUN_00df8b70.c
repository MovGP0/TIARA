/* Ghidra address: 00df8b70 */
/* Ghidra symbol: FUN_00df8b70 */


void FUN_00df8b70(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_ESI;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 local_6c;
  double local_68;
  double local_60;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  iVar1 = **(int **)(lVar3 + 0x10);
  iVar2 = (*(int **)(lVar3 + 0x10))[1];
  iVar5 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  local_6c = 0;
  FUN_017de670(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),&local_6c);
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar3 + 0x58),
               &local_6c);
  if (param_3 == '\b') {
    dVar7 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8);
    dVar8 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar2 * 8);
    dVar6 = (double)FUN_0040c760(dVar7 * dVar7 + dVar8 * dVar8);
    if (dVar7 == 0.0) {
      if (dVar8 <= 0.0) {
        dVar8 = -1.5707963267948966;
      }
      else {
        dVar8 = 1.5707963267948966;
      }
    }
    else {
      dVar8 = (double)FUN_0040c660(dVar8 / dVar7);
    }
    if (dVar7 < 0.0) {
      dVar8 = dVar8 - 3.141592653589793;
    }
    if (dVar6 == 0.0) {
      dVar6 = 1.0;
      dVar8 = -1.5707963267948966;
    }
    dVar7 = **(double **)(lVar3 + 0x18);
    local_68 = (double)FUN_0040bcd0(-param_5 * dVar7 + dVar8 + 3.141592653589793);
    local_68 = dVar6 * local_68;
    local_60 = (double)FUN_0040bdd0(-param_5 * dVar7 + dVar8 + 3.141592653589793);
    uVar4 = local_6c;
    local_60 = dVar6 * local_60;
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),local_68,*(undefined8 *)(lVar3 + 0x58),0,&local_6c)
    ;
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),local_60,*(undefined8 *)(lVar3 + 0x58),uVar4);
  }
  else if ((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) {
    if (*(char *)(lVar3 + 0x39) == '\0') {
      dVar6 = **(double **)(lVar3 + 0x18);
    }
    else {
      dVar6 = (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar1 * 8) -
              *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8)) * 0.0;
    }
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),
                 (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)unaff_EBX * 8) -
                 *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)unaff_ESI * 8)) - dVar6,
                 *(undefined8 *)(lVar3 + 0x58),0,&local_6c);
    FUN_017de540(*(undefined8 *)(param_2 + 0xd8),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8),
                 *(undefined8 *)(lVar3 + 0x58),0,&local_6c);
  }
  return;
}

