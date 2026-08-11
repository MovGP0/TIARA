/* Ghidra address: 015322f0 */
/* Ghidra symbol: FUN_015322f0 */


void FUN_015322f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_330 [2];
  undefined1 local_320 [768];
  
  local_330[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0xa8))(*(longlong **)(param_1 + 0x8c8));
  if (cVar2 != '\0') {
    FUN_0069c880(local_320);
    FUN_0040ca00(local_320);
    FUN_00409900();
    uVar4 = FUN_0069e8a0();
    uVar4 = FUN_0069db00(uVar4);
    uVar5 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x958));
    FUN_005ff880(uVar4,uVar5);
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x958) + 0x4e8) + 0x28))();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x4e8);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_330,iVar6);
        uVar4 = FUN_0040f200(local_320,local_330[0]);
        FUN_0040f590(uVar4);
        FUN_00409900();
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0040d150(local_320);
    FUN_00409900();
  }
  FUN_00414480(local_330);
  return;
}

