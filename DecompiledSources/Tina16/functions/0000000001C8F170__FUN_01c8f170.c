/* Ghidra address: 01c8f170 */
/* Ghidra symbol: FUN_01c8f170 */


void FUN_01c8f170(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b92c88,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar1 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x198))(*(longlong **)(param_1 + 0xa10));
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
    FUN_00c85140(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30));
    FUN_00c82c10(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),0,0);
    FUN_01c691d0(param_1,*(undefined2 *)(param_1 + 0x1810));
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
  }
  FUN_00410f20(local_20);
  return;
}

