/* Ghidra address: 00df82e0 */
/* Ghidra symbol: FUN_00df82e0 */


void FUN_00df82e0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 local_5c [13];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  iVar1 = **(int **)(lVar3 + 0x10);
  iVar2 = (*(int **)(lVar3 + 0x10))[1];
  FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  local_5c[0] = 0;
  FUN_017de670(*(undefined8 *)(param_2 + 0xd8),0,*(undefined8 *)(lVar3 + 0x58),local_5c);
  FUN_017de460(*(undefined8 *)(param_2 + 0xd8),0x3ff0000000000000,*(undefined8 *)(lVar3 + 0x58),
               local_5c);
  if (param_3 == '\b') {
    dVar7 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8);
    dVar8 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar1 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar2 * 8);
    dVar5 = (double)FUN_0040c760(dVar7 * dVar7 + dVar8 * dVar8);
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
    if (dVar5 == 0.0) {
      dVar5 = 0.0;
      dVar8 = -1.5707963267948966;
    }
    dVar7 = **(double **)(lVar3 + 0x18);
    dVar6 = (double)FUN_0040bcd0(-param_5 * dVar7 + dVar8 + 3.141592653589793);
    dVar7 = (double)FUN_0040bdd0(-param_5 * dVar7 + dVar8 + 3.141592653589793);
    uVar4 = local_5c[0];
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),dVar5 * dVar6,*(undefined8 *)(lVar3 + 0x58),0,
                 local_5c);
    FUN_017de420(*(undefined8 *)(param_2 + 0xd8),dVar5 * dVar7,*(undefined8 *)(lVar3 + 0x58),uVar4);
  }
  else if ((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) {
    if (*(char *)(lVar3 + 0x39) == '\0') {
      dVar5 = **(double **)(lVar3 + 0x18);
    }
    else {
      dVar5 = (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar1 * 8) -
              *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8)) * 0.0;
    }
    FUN_017de390(*(undefined8 *)(param_2 + 0xd8),-dVar5,*(undefined8 *)(lVar3 + 0x58),0,local_5c);
  }
  return;
}

