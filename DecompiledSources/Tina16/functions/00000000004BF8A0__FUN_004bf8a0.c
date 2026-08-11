/* Ghidra address: 004bf8a0 */
/* Ghidra symbol: FUN_004bf8a0 */


undefined4 FUN_004bf8a0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = 0;
  uVar3 = FUN_004097b0();
  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_004334c0);
  if (cVar1 != '\0') {
    cVar1 = FUN_004bf870(param_1);
    if (cVar1 != '\0') {
      FUN_00410f20(*param_2);
    }
    *param_2 = 0;
    FUN_004c2d70(*(undefined8 *)(param_1 + 0x180),0);
    lVar4 = FUN_004097b0();
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x20))
                      (*(longlong **)(param_1 + 0x180),*(undefined8 *)(lVar4 + 8));
  }
  return uVar2;
}

