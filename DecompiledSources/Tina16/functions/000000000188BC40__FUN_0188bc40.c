/* Ghidra address: 0188bc40 */
/* Ghidra symbol: FUN_0188bc40 */


void FUN_0188bc40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined8 local_840;
  short local_838 [1028];
  
  local_840 = 0;
  FUN_0040d200(local_838,0x800,0);
  uVar3 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60));
  uVar4 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xb0));
  iVar2 = thunk_FUN_041f4de7(uVar3,uVar4,2,local_838,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe0));
  lVar5 = FUN_004095c0((longlong)(iVar2 << 7));
  uVar3 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60));
  uVar4 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xb0));
  thunk_FUN_041f4de7(uVar3,uVar4,0x10,lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe0));
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    psVar7 = local_838;
    iVar8 = iVar2;
    do {
      if (*psVar7 != 0x100) {
        FUN_00442b00(&local_840,lVar5 + (longlong)(iVar6 << 6) * 2);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x70);
        (**(code **)(*plVar1 + 0x80))(plVar1,local_840,*psVar7);
      }
      iVar6 = iVar6 + 1;
      psVar7 = psVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_004095f0(lVar5,(longlong)(iVar2 << 7));
  FUN_00414480(&local_840);
  return;
}

