/* Ghidra address: 00c03380 */
/* Ghidra symbol: FUN_00c03380 */


void FUN_00c03380(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  code *local_28;
  longlong local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x538);
  if (param_2 != lVar2) {
    if (lVar2 != 0) {
      local_28 = FUN_00c0a8a0;
      local_20 = param_1;
      FUN_00bc2660(lVar2,&local_28);
      FUN_004d2d90(*(undefined8 *)(param_1 + 0x538),param_1);
    }
    if (param_2 != 0) {
      local_28 = FUN_00c0a8a0;
      local_20 = param_1;
      FUN_00bc2020(param_2,&local_28);
      FUN_004d26c0(param_2,param_1);
    }
    *(longlong *)(param_1 + 0x538) = param_2;
    if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
      FUN_00c0a8a0(param_1,param_2);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x498);
    FUN_00bfcd40(param_1,0);
    FUN_00bfcd40(param_1,uVar1);
    plVar3 = *(longlong **)(param_1 + 0x538);
    cVar4 = FUN_004113d0(plVar3,&PTR_FUN_00bdbcc0);
    if (cVar4 != '\0') {
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(param_1 + 0x4a8));
    }
  }
  return;
}

