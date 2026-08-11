/* Ghidra address: 016ef480 */
/* Ghidra symbol: FUN_016ef480 */


void FUN_016ef480(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int local_5c;
  
  if (*(char *)(param_1 + 0x112) != '\0') {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0x60),param_1,param_2);
  }
  local_5c = 1;
  for (uVar3 = (uint)*(ushort *)(param_1 + 0xe); uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + -2 + (longlong)local_5c * 2);
    iVar2 = *(int *)(param_1 + 0x84) + uVar1 + -1;
    dVar4 = (double)FUN_0040c850(*(undefined8 *)(*(longlong *)(param_2 + 400) + (longlong)iVar2 * 8)
                                );
    dVar5 = (double)FUN_0040c850(*(undefined8 *)
                                  (*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8));
    dVar6 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_2 + 0x1b8) + (longlong)iVar2 * 8) -
                                 *(double *)(*(longlong *)(param_2 + 400) + (longlong)iVar2 * 8));
    dVar7 = (double)FUN_0040c850(*(undefined8 *)
                                  (*(longlong *)(param_2 + 0x180) + (longlong)iVar2 * 8));
    dVar7 = *(double *)(param_2 + 0x3c0) * dVar7;
    if (dVar7 < dVar4) {
      dVar7 = dVar4;
    }
    if (dVar7 < dVar5) {
      dVar7 = dVar5;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x30) + -1 + (longlong)(int)uVar1) == '\x02') {
      dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + *(double *)(param_2 + 0x3d8);
    }
    else {
      dVar7 = *(double *)(param_2 + 0x3c8) * dVar7 + *(double *)(param_2 + 0x3d0);
    }
    if (dVar7 < dVar6) {
      FUN_016e9f80(param_1,param_2,1,10);
    }
    local_5c = local_5c + 1;
  }
  return;
}

