/* Ghidra address: 006aa5a0 */
/* Ghidra symbol: FUN_006aa5a0 */


void FUN_006aa5a0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
  iVar1 = FUN_007ff9d0(uVar2);
  (**(code **)(*param_1 + 0xe8))(param_1,0 < iVar1);
  return;
}

