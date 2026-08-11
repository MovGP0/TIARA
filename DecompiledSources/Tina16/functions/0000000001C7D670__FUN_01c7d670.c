/* Ghidra address: 01c7d670 */
/* Ghidra symbol: FUN_01c7d670 */


void FUN_01c7d670(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b713c8,1,*(undefined8 *)PTR_DAT_02004030);
  lVar3 = FUN_01c7d9d0(param_1);
  FUN_01b719f0(local_20,*(undefined4 *)(lVar3 + 0xc));
  iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar1 == 1) {
    uVar2 = FUN_01b71a50(local_20);
    lVar3 = FUN_01c7d9d0(param_1);
    *(undefined4 *)(lVar3 + 0xc) = uVar2;
    FUN_01c77ab0(param_1,0);
  }
  FUN_00410f20(local_20);
  return;
}

