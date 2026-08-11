/* Ghidra address: 007dde90 */
/* Ghidra symbol: FUN_007dde90 */


void FUN_007dde90(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 8) != 0) {
    return;
  }
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return;
  }
  if (param_1[0x1b] != 0) {
    FUN_007dde90(param_1[0x1b]);
    return;
  }
  uVar3 = FUN_007de060(param_1);
  iVar2 = thunk_FUN_041b99e8(uVar3);
  bVar5 = iVar2 == 0;
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    uVar3 = FUN_007de060(param_1);
    uVar4 = thunk_FUN_03af2864(uVar3,iVar2 + -1,0x400);
    if ((uVar4 & 4) == 0) {
      uVar3 = FUN_007de060(param_1);
      thunk_FUN_03c0ff03(uVar3,iVar2 + -1,0x400);
      bVar5 = true;
    }
  }
  if (!bVar5) {
    return;
  }
  if ((param_1[0x19] == 0) && (cVar1 = FUN_004113d0(param_1[0x1c],&PTR_FUN_007db330), cVar1 != '\0')
     ) {
    uVar3 = FUN_007de060(param_1);
    iVar2 = thunk_FUN_041b99e8(uVar3);
    if (iVar2 == 0) {
      thunk_FUN_03a10f16(param_1[0x2b]);
      param_1[0x2b] = 0;
      goto LAB_007ddfa0;
    }
  }
  FUN_007ddc50(param_1);
LAB_007ddfa0:
  (**(code **)(*param_1 + 0xa0))(param_1,0);
  return;
}

