/* Ghidra address: 00419a70 */
/* Ghidra symbol: FUN_00419a70 */


ulonglong FUN_00419a70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar1 = FUN_00419a40(param_2);
  iVar1 = iVar1 + -1;
  if (0 < iVar1) {
    do {
      if (param_1 != (longlong *)0x0) {
        iVar6 = 0;
        if (param_1 != (longlong *)0x0) {
          iVar6 = (int)param_1[-1];
        }
        iVar3 = 0;
        if (*param_1 != 0) {
          iVar3 = (int)*(undefined8 *)(*param_1 + -8);
        }
        iVar6 = iVar6 + -1;
        iVar2 = 1;
        if (0 < iVar6) {
          do {
            lVar4 = 0;
            if (param_1[iVar2] != 0) {
              lVar4 = *(longlong *)(param_1[iVar2] + -8);
            }
            if (lVar4 != iVar3) {
              uVar5 = 0;
              goto LAB_00419b0a;
            }
            iVar2 = iVar2 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_1 = (longlong *)*param_1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_00419b0a:
  return uVar5 & 0xffffffff;
}

