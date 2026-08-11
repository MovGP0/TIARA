/* Ghidra address: 0081a600 */
/* Ghidra symbol: FUN_0081a600 */


void FUN_0081a600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  cVar4 = FUN_00818440(param_1);
  if (cVar4 != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01') {
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x500);
      if ((((lVar1 == 0) || (*(char *)(lVar1 + 0xd0) != '\0')) ||
          (iVar5 = FUN_007e2ef0(*(undefined8 *)(lVar1 + 0x80)), iVar5 < 1)) ||
         (*(longlong *)(param_1 + 0xa0) != 0)) {
        if (((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x500) == 0) ||
            ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x500), lVar1 != 0 &&
             (iVar5 = FUN_007e2ef0(*(undefined8 *)(lVar1 + 0x80)), iVar5 == 0)))) &&
           (*(longlong *)(param_1 + 0xa0) != 0)) {
          *(undefined8 *)(param_1 + 0xa0) = 0;
        }
      }
      else {
        uVar7 = FUN_00813a50(&DAT_007f7ab0,1,param_1);
        *(undefined8 *)(param_1 + 0xa0) = uVar7;
      }
    }
    if (((*(int *)(param_2 + 8) == 0) || (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1) == '\0'))
       && ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1) != '\0' ||
           (*(longlong *)(param_1 + 0xa0) == 0)))) {
      if ((((*(int *)(param_2 + 8) != 0) &&
           (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1) == '\0')) &&
          (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d6) == '\x01')) &&
         (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d2) != '\x02')) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
    else {
      FUN_00819760(param_1,&local_38);
      iVar3 = local_30;
      iVar5 = local_38;
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00815380(*(longlong *)(param_1 + 0xa0),
                             (*(int *)(param_1 + 0x130) - local_38) - local_30);
        FUN_004238d0(local_48,iVar5,local_34,*(int *)(param_1 + 0x130) - iVar3,local_34 + iVar6);
        FUN_008177b0(*(undefined8 *)(param_1 + 0xa0),local_48);
      }
      piVar2 = *(int **)(param_2 + 0x10);
      *piVar2 = *piVar2 + local_38;
      piVar2[1] = piVar2[1] + local_34 + iVar6;
      piVar2[2] = piVar2[2] - local_30;
      piVar2[3] = piVar2[3] - local_2c;
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x324);
      if (iVar5 != 0) {
        *piVar2 = *piVar2 + iVar5;
        piVar2[1] = piVar2[1] + *(int *)(*(longlong *)(param_1 + 0x10) + 0x324);
        piVar2[2] = piVar2[2] - *(int *)(*(longlong *)(param_1 + 0x10) + 0x324);
        piVar2[3] = piVar2[3] - *(int *)(*(longlong *)(param_1 + 0x10) + 0x324);
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

