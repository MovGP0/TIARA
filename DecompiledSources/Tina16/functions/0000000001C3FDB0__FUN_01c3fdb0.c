/* Ghidra address: 01c3fdb0 */
/* Ghidra symbol: FUN_01c3fdb0 */


void FUN_01c3fdb0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x808);
    iVar2 = FUN_006e65f0(uVar1);
    FUN_006e6920(uVar1,iVar2 + 1);
  }
  else {
    FUN_006e6920(*(undefined8 *)(param_1 + 0x808));
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  return;
}

