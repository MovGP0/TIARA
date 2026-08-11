/* Ghidra address: 00c30bd0 */
/* Ghidra symbol: FUN_00c30bd0 */


byte FUN_00c30bd0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte local_41;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_41 = 0;
  cVar2 = FUN_00c28880(param_2);
  if (cVar2 == '\0') {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),param_2);
    pbVar6 = *(byte **)(param_2 + 0x30);
    iVar5 = (uint)*(ushort *)(param_2 + 0x4d) * (uint)*(ushort *)(param_2 + 0x4f);
    bVar3 = FUN_00c2a4a0(param_2);
    if (bVar3 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_00c2e3e0(*(undefined8 *)(param_2 + 0x60));
    }
    local_41 = 0;
    for (; 0 < iVar5; iVar5 = iVar5 + -1) {
      if ((bVar3 == 0) || (*pbVar6 != bVar4)) {
        if (*(int *)(param_1 + 0x10) <= (int)(uint)*pbVar6) {
          *pbVar6 = 0;
          FUN_0041ddd0(local_40,PTR_PTR_020042b0);
          FUN_00c1a780(param_2,1,local_40[0]);
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar6 * 0x18);
        if (*piVar1 == 0x7fffffff) break;
        *piVar1 = *piVar1 + 1;
      }
      else {
        local_41 = local_41 | bVar3;
      }
      pbVar6 = pbVar6 + 1;
    }
    if ((bVar3 != 0) && (local_41 == 0)) {
      FUN_00c2e3f0(*(undefined8 *)(param_2 + 0x60),0);
      FUN_00c2e340(*(undefined8 *)(param_2 + 0x60),0);
    }
  }
  FUN_00414480(local_40);
  return local_41;
}

