/* Ghidra address: 006180f0 */
/* Ghidra symbol: FUN_006180f0 */


undefined8 FUN_006180f0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0041f930();
  if (*(longlong *)(lVar3 + 0x248) != 0) {
    lVar3 = FUN_0041f930();
    iVar1 = thunk_FUN_041de4d6(*(undefined8 *)(lVar3 + 0x248));
    if (iVar1 != 0) goto LAB_00618199;
  }
  iVar1 = FUN_0044f060();
  if (iVar1 == 2) {
    iVar1 = FUN_0044f080();
    if (iVar1 < 5) goto LAB_00618138;
    uVar5 = 0xfffffffffffffffd;
  }
  else {
LAB_00618138:
    uVar5 = 0;
  }
  uVar4 = 0;
  do {
    lVar3 = FUN_0041f930();
    uVar4 = thunk_FUN_04114b41(uVar5,uVar4,L"OleMainThreadWndClass",0);
    *(undefined8 *)(lVar3 + 0x248) = uVar4;
    lVar3 = FUN_0041f930();
    uVar4 = *(undefined8 *)(lVar3 + 0x248);
    lVar3 = FUN_0041f930();
    if (*(longlong *)(lVar3 + 0x248) == 0) break;
    lVar3 = FUN_0041f930();
    iVar1 = thunk_FUN_039b6ab1(*(undefined8 *)(lVar3 + 0x248),0);
    iVar2 = FUN_00427ab0();
  } while (iVar1 != iVar2);
LAB_00618199:
  lVar3 = FUN_0041f930();
  return *(undefined8 *)(lVar3 + 0x248);
}

