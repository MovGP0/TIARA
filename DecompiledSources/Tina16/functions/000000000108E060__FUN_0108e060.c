/* Ghidra address: 0108e060 */
/* Ghidra symbol: FUN_0108e060 */


void FUN_0108e060(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01072138,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01072a80(plVar3,*(undefined8 *)(param_1 + 0xae0));
  uVar1 = FUN_0108bb30(param_1);
  uVar4 = FUN_004425e0(param_1 + 0x2c10,*(undefined8 *)(param_1 + 0xae0));
  lVar5 = _Debug_GetSymbolPtr(*(undefined8 *)(param_1 + 0xb28),uVar1,uVar4,&local_30,&local_34);
  if (lVar5 == 0) {
    FUN_0072d440(L"Only for single types!",1,4,0);
  }
  else {
    FUN_01072a50(plVar3,lVar5,local_30);
    FUN_01072a10(plVar3,local_34);
    FUN_01072a00(plVar3,*(undefined4 *)(param_1 + 0xaa4));
    iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
    if (iVar2 == 1) {
      local_2c[0] = FUN_010729f0(plVar3);
      uVar4 = FUN_004425e0(param_1 + 0x2c10,*(undefined8 *)(param_1 + 0xae0));
      _Debug_SetSymbolValue(*(undefined8 *)(param_1 + 0xb28),uVar1,uVar4,local_2c);
      FUN_010892f0(param_1);
    }
  }
  FUN_00410f20(plVar3);
  return;
}

