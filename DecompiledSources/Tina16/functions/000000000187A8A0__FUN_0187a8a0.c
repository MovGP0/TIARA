/* Ghidra address: 0187a8a0 */
/* Ghidra symbol: FUN_0187a8a0 */


void FUN_0187a8a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  
  FUN_0187a800(auStack_38,*(undefined8 *)(param_2 + 0x240));
  FUN_0187a800(auStack_38,*(undefined8 *)(param_2 + 0x248));
  if (0 < *(int *)(*(longlong *)(param_2 + 0x240) + 0x10)) {
    uVar1 = FUN_0196bb80(param_2,&PTR_FUN_01930a20);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x240),0);
    FUN_0187a6c0(auStack_38,uVar1,uVar2);
    uVar1 = FUN_0196bb80(param_2,&PTR_FUN_01931418);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x240),0);
    FUN_0187a6c0(auStack_38,uVar1,uVar2);
    uVar1 = FUN_0196bb80(param_2,&PTR_FUN_01932e38);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x240),0);
    FUN_0187a6c0(auStack_38,uVar1,uVar2);
  }
  return;
}

