/* Ghidra address: 00a01ab0 */
/* Ghidra symbol: FUN_00a01ab0 */


void FUN_00a01ab0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_00a02c10(param_1);
    (**(code **)(*param_2 + 8))(param_2,uVar1);
    iVar2 = FUN_00a02c10(param_1);
    FUN_00409a70(*(undefined8 *)(param_1 + 8),param_2[1],(longlong)iVar2);
  }
  return;
}

