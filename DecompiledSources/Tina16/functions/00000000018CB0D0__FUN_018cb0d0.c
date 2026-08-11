/* Ghidra address: 018cb0d0 */
/* Ghidra symbol: FUN_018cb0d0 */


double FUN_018cb0d0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  double dVar5;
  
  dVar5 = 0.0;
  for (lVar3 = FUN_018cb270(param_1,&PTR_FUN_01930f88); lVar3 != 0;
      lVar3 = *(longlong *)(lVar3 + 0x1a8)) {
    dVar5 = dVar5 + *(double *)(lVar3 + 0xb0);
  }
  for (lVar3 = FUN_018cb270(param_1,&PTR_FUN_01930480); lVar3 != 0;
      lVar3 = *(longlong *)(lVar3 + 0x1a8)) {
    dVar5 = dVar5 + *(double *)(lVar3 + 0xb0);
  }
  if (param_2 != '\0') {
    iVar2 = FUN_018c5900();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar4);
        if (*(longlong *)(lVar3 + 8) != 0) {
          lVar3 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar4);
          cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 8),&PTR_FUN_01930480);
          if (cVar1 == '\0') {
            lVar3 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar4);
            cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 8),&PTR_FUN_01930f88);
            if (cVar1 == '\0') {
              lVar3 = FUN_018c5910(*(undefined8 *)(param_1 + 0xc0),iVar4);
              dVar5 = dVar5 + *(double *)(*(longlong *)(lVar3 + 8) + 0xb0);
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return dVar5;
}

