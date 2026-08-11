/* Ghidra address: 004ade40 */
/* Ghidra symbol: FUN_004ade40 */


void FUN_004ade40(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  FUN_00545e10();
  lVar1 = FUN_0041f930();
  lVar1 = *(longlong *)(lVar1 + 0x240);
  if (lVar1 == 0) {
    lVar1 = FUN_004f19f0(&PTR_FUN_004accb0,1);
    lVar2 = FUN_0041f930();
    *(longlong *)(lVar2 + 0x240) = lVar1;
  }
  lVar2 = FUN_0041f930();
  local_10 = *(undefined8 *)(lVar2 + 0x238);
  FUN_00597e50(lVar1 + 8,&local_10);
  uVar3 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
  lVar1 = FUN_0041f930();
  *(undefined8 *)(lVar1 + 0x238) = uVar3;
  return;
}

