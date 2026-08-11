/* Ghidra address: 00dd2560 */
/* Ghidra symbol: FUN_00dd2560 */


void FUN_00dd2560(longlong param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  bVar1 = false;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x214);
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x80) + 0x30 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((*(double *)(*(longlong *)(param_1 + 0x48) + 8) <= *(double *)(param_1 + 0x40)) &&
       (dVar7 = *(double *)(*(longlong *)(param_1 + 0x48) + 0x10),
       *(double *)(param_1 + 0x40) <= dVar7 && dVar7 != *(double *)(param_1 + 0x40)))
    goto code_r0x00dd260a;
    iVar2 = iVar2 + 1;
    if ((iVar2 == 0x14) ||
       (*(char *)(*(longlong *)(param_1 + 0x80) + 0x30 + (longlong)iVar2 * 0x18) == '\f')) {
      iVar2 = 0;
    }
    if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x214)) break;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x80) + 0x30 + (longlong)iVar2 * 0x18;
  }
  bVar1 = true;
code_r0x00dd260a:
  if (bVar1) {
    if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x21c) == '\f') {
      iVar3 = 0;
      dVar7 = 1e+30;
      iVar2 = 0;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x80) + 0x30;
      while ((**(char **)(param_1 + 0x48) != '\f' && (iVar3 < 0x14))) {
        uVar4 = FUN_0040c850(*(double *)(param_1 + 0x40) -
                             *(double *)(*(longlong *)(param_1 + 0x48) + 8));
        uVar5 = FUN_0040c850(*(double *)(param_1 + 0x40) -
                             *(double *)(*(longlong *)(param_1 + 0x48) + 0x10));
        dVar6 = (double)FUN_00b90650(uVar4,uVar5);
        if (dVar6 < dVar7) {
          dVar7 = dVar6;
          iVar2 = iVar3;
        }
        iVar3 = iVar3 + 1;
        *(longlong *)(param_1 + 0x48) =
             *(longlong *)(param_1 + 0x80) + 0x30 + (longlong)iVar3 * 0x18;
      }
      *(int *)(*(longlong *)(param_1 + 0x80) + 0x214) = iVar2;
      *(undefined1 *)(param_1 + 0x3f) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x30 + (longlong)iVar2 * 0x18);
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x218);
      if (iVar2 != -1) {
        *(int *)(*(longlong *)(param_1 + 0x80) + 0x214) = iVar2;
      }
      *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x21c);
    }
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x214) = iVar2;
    *(undefined1 *)(param_1 + 0x3f) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x30 + (longlong)iVar2 * 0x18);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x11) = *(undefined1 *)(param_1 + 0x3f);
  return;
}

