/* Ghidra address: 00bd40f0 */
/* Ghidra symbol: FUN_00bd40f0 */


void FUN_00bd40f0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    uVar1 = FUN_0044d490(&PTR_FUN_00bd2610,1,L"SetBaseFont: \'Value\' must be specified.");
    FUN_004134c0(uVar1);
  }
  else {
    uVar1 = FUN_00bd38f0();
    lVar2 = FUN_00bd3cb0(uVar1,param_2);
    if (lVar2 == param_1[3]) {
      uVar1 = FUN_00bd38f0();
      FUN_00bd3d20(uVar1,lVar2);
    }
    else {
      FUN_00bd40a0(param_1);
      param_1[3] = lVar2;
      plVar4 = (longlong *)(lVar2 + 0x10);
      plVar5 = param_1 + 8;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
      *(int *)plVar5 = (int)*plVar4;
      (**(code **)(*param_1 + 0x40))(param_1,*(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x31));
    }
  }
  return;
}

