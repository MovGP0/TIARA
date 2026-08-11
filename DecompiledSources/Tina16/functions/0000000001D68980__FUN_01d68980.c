/* Ghidra address: 01d68980 */
/* Ghidra symbol: FUN_01d68980 */


double FUN_01d68980(longlong param_1,longlong param_2,undefined1 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = 0.0;
  dVar6 = 0.0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + (longlong)param_4 * 8);
  if (lVar1 != 0) {
    iVar5 = *(int *)(lVar1 + 0x10);
    uVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        if (*(uint *)(lVar1 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        lVar2 = **(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
        lVar3 = FUN_01d68950(*(undefined8 *)(lVar2 + 0x128));
        dVar6 = dVar7;
        if ((lVar3 == param_2) && (*(char *)(lVar2 + 0x11e) != '\0')) {
          if (*(uint *)(lVar1 + 0x10) <= uVar4) {
            FUN_00594f90();
          }
          dVar6 = (double)(**(code **)(lVar2 + 0x108))
                                    (param_1,lVar2,*(undefined8 *)(lVar2 + 0x60),param_3,0,
                                     (longlong)
                                     *(int *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8)
                                             + 8));
          dVar6 = dVar7 + dVar6;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
        dVar7 = dVar6;
      } while (iVar5 != 0);
    }
  }
  return dVar6;
}

