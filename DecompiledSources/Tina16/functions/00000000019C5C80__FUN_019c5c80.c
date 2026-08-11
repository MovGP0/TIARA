/* Ghidra address: 019c5c80 */
/* Ghidra symbol: FUN_019c5c80 */


undefined8 FUN_019c5c80(int *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40;
  int local_3c [3];
  
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = (int)*(undefined8 *)(param_2 + -8);
  }
  iVar3 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)iVar3 * 8);
      iVar6 = 0;
      if (lVar1 != 0) {
        iVar6 = (int)*(undefined8 *)(lVar1 + -8);
      }
      iVar4 = 0;
      if (iVar6 - 1U < 0x80000000) {
        do {
          plVar2 = *(longlong **)
                    (*(longlong *)(param_2 + (longlong)iVar3 * 8) + (longlong)iVar4 * 0x18);
          (**(code **)(*plVar2 + 0x1f0))
                    (plVar2,*(undefined4 *)
                             (*(longlong *)(param_2 + (longlong)iVar3 * 8) + 8 +
                             (longlong)iVar4 * 0x18),local_3c,&local_40);
          local_3c[0] = local_3c[0] / 8;
          local_40 = local_40 / 8;
          if ((*param_1 == local_3c[0]) && (param_1[1] == local_40)) {
            return *(undefined8 *)
                    (*(longlong *)(param_2 + (longlong)iVar3 * 8) + (longlong)iVar4 * 0x18);
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

