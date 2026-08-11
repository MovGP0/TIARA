/* Ghidra address: 006d7ac0 */
/* Ghidra symbol: FUN_006d7ac0 */


void FUN_006d7ac0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_34 [2];
  
  iVar1 = (int)*(short *)(param_2 + 0x10);
  local_34[0] = CONCAT44((int)*(short *)(param_2 + 0x12),iVar1);
  uVar3 = FUN_0065b870(param_1);
  iVar1 = FUN_004701a0(uVar3,0x130d,0,local_34,iVar1);
  if (-1 < iVar1) {
    iVar2 = FUN_006d5120(param_1);
    if (iVar1 != iVar2) {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

