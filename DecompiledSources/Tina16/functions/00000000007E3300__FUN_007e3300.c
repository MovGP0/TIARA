/* Ghidra address: 007e3300 */
/* Ghidra symbol: FUN_007e3300 */


void FUN_007e3300(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((-1 < param_2) && (param_1[0x17] != 0)) {
    iVar1 = FUN_007e2ef0(param_1);
    if (param_2 < iVar1) goto LAB_007e3332;
  }
  FUN_007dc5c0(PTR_PTR_02002e30);
LAB_007e3332:
  lVar2 = FUN_004aeac0(param_1[0x17],param_2);
  FUN_004ae870(param_1[0x17],param_2);
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0x100) = 0;
  *(undefined8 *)(lVar2 + 0x108) = 0;
  if (param_1[0x2b] != 0) {
    FUN_007dde90(param_1);
  }
  iVar1 = FUN_007e2ef0(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1,iVar1 == 0);
  return;
}

