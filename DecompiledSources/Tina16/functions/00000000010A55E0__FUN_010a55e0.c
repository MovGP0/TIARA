/* Ghidra address: 010a55e0 */
/* Ghidra symbol: FUN_010a55e0 */


void FUN_010a55e0(longlong param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c [3];
  
  iVar1 = FUN_00c08890(*(undefined8 *)(param_1 + 0x960));
  if (iVar1 != 0) {
    FUN_010a3870(param_1,local_1c,local_20);
    FUN_010a5500(param_1,local_1c[0]);
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x180))(*(longlong **)(param_1 + 0x960));
  }
  return;
}

