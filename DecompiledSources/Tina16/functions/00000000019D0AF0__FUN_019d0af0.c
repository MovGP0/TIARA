/* Ghidra address: 019d0af0 */
/* Ghidra symbol: FUN_019d0af0 */


void FUN_019d0af0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_74 [76];
  
  FUN_019d2180(param_1,param_2);
  dVar4 = *(double *)(param_1 + 0x78);
  for (iVar2 = 0; iVar2 <= *(int *)(param_1 + 0x74) + -1; iVar2 = iVar2 + 1) {
    FUN_019d0630(param_1,iVar2,dVar4,1);
    dVar4 = dVar4 * 10.0;
  }
  cVar1 = FUN_019d0660(param_1,*(undefined8 *)(param_2 + 0x20),local_74);
  if (cVar1 == '\0') {
    FUN_019d0700(param_1,*(undefined8 *)(param_2 + 0x20),1);
  }
  cVar1 = FUN_019d0660(param_1,*(undefined8 *)(param_2 + 0x30),local_74);
  if (cVar1 == '\0') {
    FUN_019d0700(param_1,*(undefined8 *)(param_2 + 0x30),1);
  }
  for (iVar2 = 0; iVar2 <= *(int *)(param_1 + 0x74) + -1; iVar2 = iVar2 + 1) {
    uVar3 = FUN_0123b200(*(undefined8 *)(param_1 + 0xb0 + (longlong)iVar2 * 0x10),param_2);
    *(undefined8 *)(param_1 + 0x700 + (longlong)iVar2 * 8) = uVar3;
  }
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x74) + -1; iVar2 = iVar2 + 1) {
    if (((*(short *)(param_2 + 0x1fa4) == 0x48) &&
        (dVar4 = (double)FUN_0040c850(*(double *)(param_1 + 0x700 + (longlong)iVar2 * 8) -
                                      *(double *)(param_2 + 0x10)), dVar4 < 1e-12)) &&
       (dVar4 = (double)FUN_0040c850(*(double *)(param_1 + 0x700 + (longlong)(iVar2 + 1) * 8) -
                                     *(double *)(param_2 + 0x10)), dVar4 < 1e-12)) {
      *(undefined4 *)(param_1 + 0xb8 + (longlong)iVar2 * 0x10) = 0;
    }
  }
  for (iVar2 = 0; iVar2 <= *(int *)(param_1 + 0x74) + -1; iVar2 = iVar2 + 1) {
    uVar3 = FUN_0123b200(*(undefined8 *)(param_1 + 0xb0 + (longlong)iVar2 * 0x10),param_2);
    *(undefined8 *)(param_1 + 0x700 + (longlong)iVar2 * 8) = uVar3;
    if ((0 < iVar2) &&
       (dVar4 = (double)FUN_0040c850(*(double *)(param_1 + 0xb0 + (longlong)iVar2 * 0x10) -
                                     *(double *)(param_2 + 0x20)), dVar4 < 1e-12)) {
      if (*(short *)(param_2 + 0x1fa4) == 0x4c) {
        *(undefined4 *)(param_1 + 0xb8 + (longlong)iVar2 * 0x10) = 2;
      }
      else if (*(short *)(param_2 + 0x1fa4) == 0x48) {
        *(undefined4 *)(param_1 + 0xb8 + (longlong)iVar2 * 0x10) = 4;
      }
    }
  }
  return;
}

