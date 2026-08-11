/* Ghidra address: 01518490 */
/* Ghidra symbol: FUN_01518490 */


void FUN_01518490(longlong param_1)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar6 = (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x90)) + *(int *)(param_1 + 0x94);
  uVar2 = *(ushort *)(param_1 + 0xac);
  dVar1 = *(double *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xaa) == '\0') {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar7);
        lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106728);
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          FUN_01cc56d0(*(undefined8 *)(lVar5 + 0x98),*(undefined4 *)(lVar5 + 0x110),
                       (double)(int)((uint)uVar2 - iVar6) * dVar1,
                       *(undefined1 *)
                        (*(longlong *)(param_1 + 200) +
                         (longlong)(int)(iVar7 * (uint)*(ushort *)(param_1 + 0x98)) +
                        (ulonglong)*(ushort *)(param_1 + 0xae)));
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar7);
        lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106728);
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          if ((int)*(uint *)(param_1 + 0xb4) < 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulonglong)*(uint *)(param_1 + 0xb4);
          }
          for (; (ushort)uVar8 <= *(ushort *)(param_1 + 0xac);
              uVar8 = (ulonglong)(ushort)((ushort)uVar8 + 1)) {
            FUN_01cc56d0(*(undefined8 *)(lVar5 + 0x98),*(undefined4 *)(lVar5 + 0x110),
                         (double)(int)(((uint)uVar8 & 0xffff) - iVar6) * *(double *)(param_1 + 0xa0)
                         ,*(undefined1 *)
                           (*(longlong *)(param_1 + 200) +
                            (longlong)(int)(iVar7 * (uint)*(ushort *)(param_1 + 0x98)) +
                           (uVar8 & 0xffff) % (ulonglong)*(ushort *)(param_1 + 0x98)));
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0xaa) = 0;
  return;
}

