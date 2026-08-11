/* Ghidra address: 00df85e0 */
/* Ghidra symbol: FUN_00df85e0 */


void FUN_00df85e0(longlong param_1,longlong param_2,char param_3,ulonglong param_4,double param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  iVar2 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  iVar3 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  iVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 2));
  iVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 3));
  iVar6 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  FUN_017dca30(*(undefined8 *)(param_2 + 0xd8),0,0,iVar6,iVar2,iVar3);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,iVar4,iVar5,iVar6);
  if (param_3 == '\b') {
    dVar9 = *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8) -
            *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar3 * 8);
    dVar10 = *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar2 * 8) -
             *(double *)(*(longlong *)(param_2 + 0x120) + (longlong)iVar3 * 8);
    dVar7 = (double)FUN_0040c760(dVar9 * dVar9 + dVar10 * dVar10);
    if (dVar9 == 0.0) {
      if (dVar10 <= 0.0) {
        dVar10 = -1.5707963267948966;
      }
      else {
        dVar10 = 1.5707963267948966;
      }
    }
    else {
      dVar10 = (double)FUN_0040c660(dVar10 / dVar9);
    }
    if (dVar9 < 0.0) {
      dVar10 = dVar10 - 3.141592653589793;
    }
    if (dVar7 == 0.0) {
      dVar7 = 1.0;
      dVar10 = -1.5707963267948966;
    }
    dVar9 = **(double **)(lVar1 + 0x18);
    dVar8 = (double)FUN_0040bcd0(-param_5 * dVar9 + dVar10 + 3.141592653589793);
    dVar9 = (double)FUN_0040bdd0(-param_5 * dVar9 + dVar10 + 3.141592653589793);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,dVar7 * dVar8,iVar6,
                 *(undefined4 *)(param_2 + 0x308));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),1,dVar7 * dVar9,iVar6,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else if ((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) {
    if (*(char *)(lVar1 + 0x39) == '\0') {
      dVar7 = **(double **)(lVar1 + 0x18);
    }
    else {
      dVar7 = (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar2 * 8) -
              *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar3 * 8)) * 0.0;
    }
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,
                 *(undefined8 *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar6 * 8),iVar5,iVar4,
                 *(undefined4 *)(param_2 + 0x308));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,
                 (*(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar4 * 8) -
                 *(double *)(*(longlong *)(param_2 + 0x118) + (longlong)iVar5 * 8)) - dVar7,iVar6,
                 *(undefined4 *)(param_2 + 0x308));
  }
  return;
}

