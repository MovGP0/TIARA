/* Ghidra address: 00c69cb0 */
/* Ghidra symbol: FUN_00c69cb0 */


void FUN_00c69cb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar3 = (longlong *)FUN_0064acf0(*(longlong *)(param_1 + 0x6b0) + 200,1);
  iVar1 = FUN_006fa830(plVar3);
  if (-1 < iVar1) {
    plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_00c66d78,1,*(undefined8 *)PTR_DAT_02004030);
    plVar4[0xee] = *(longlong *)(param_1 + 0x6e8);
    lVar5 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),iVar1);
    plVar4[0xef] = lVar5;
    FUN_00c68390(plVar4);
    iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
    if (iVar2 == 1) {
      lVar5 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),iVar1);
      FUN_00c6bbe0(plVar3,*(undefined8 *)(lVar5 + 0x28));
      uVar6 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),iVar1);
      FUN_00c6fa30(uVar6,local_30);
      FUN_0064de00(plVar3,local_30[0]);
      lVar5 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),iVar1);
      FUN_00414ad0(plVar3 + 0x1e,*(undefined8 *)(lVar5 + 0x20));
      lVar5 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),iVar1);
      FUN_00c6bd30(plVar3,*(undefined4 *)(lVar5 + 0x18));
      lVar5 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),iVar1);
      FUN_00c6bda0(plVar3,*(undefined4 *)(lVar5 + 0x1c));
      (**(code **)(*plVar3 + 0x188))(plVar3);
    }
  }
  FUN_00414480(local_30);
  return;
}

