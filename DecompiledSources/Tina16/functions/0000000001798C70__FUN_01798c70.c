/* Ghidra address: 01798c70 */
/* Ghidra symbol: FUN_01798c70 */


void FUN_01798c70(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x260))(*(longlong **)(param_1 + 0xa58));
  iVar2 = FUN_01798550(param_1,uVar1);
  if (iVar2 != *(int *)(param_1 + 0xcb0)) {
    lVar3 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
    FUN_01797160(param_1,lVar3,0);
    *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(param_1 + 0xcb0);
    FUN_00c3f030(*(undefined8 *)(param_1 + 0xca8),lVar3);
    FUN_01798920(param_1,iVar2);
  }
  return;
}

