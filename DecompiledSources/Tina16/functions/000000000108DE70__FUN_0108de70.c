/* Ghidra address: 0108de70 */
/* Ghidra symbol: FUN_0108de70 */


void FUN_0108de70(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_30;
  
  local_30 = 0;
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01072138,1,*(undefined8 *)PTR_DAT_02004030);
  uVar4 = FUN_00442620(param_1 + 0xc08,*(undefined8 *)(param_1 + 0xb38));
  uVar5 = FUN_004425e0(param_1 + 0x2c10,*(undefined8 *)(param_1 + 0xae8));
  uVar6 = FUN_004425e0(param_1 + 0x3011,*(undefined8 *)(param_1 + 0xaf0));
  uVar1 = _Dbg_XMC_GetPeriphValue(*(undefined8 *)(param_1 + 0xb20),uVar4,uVar5,uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0xaf0);
  FUN_00415980(&local_30,3,*(undefined8 *)(param_1 + 0xae8),&LAB_0108e054,uVar4);
  uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_01072a80(plVar3,local_30);
  FUN_01072a40(plVar3,uVar1);
  FUN_01072a00(plVar3,0);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    uVar1 = FUN_010729f0(plVar3);
    uVar4 = FUN_00442620(param_1 + 0xc08,*(undefined8 *)(param_1 + 0xb38));
    uVar5 = FUN_004425e0(param_1 + 0x2c10,*(undefined8 *)(param_1 + 0xae8));
    uVar6 = FUN_004425e0(param_1 + 0x3011,*(undefined8 *)(param_1 + 0xaf0));
    _Dbg_XMC_SetPeriphValue
              (*(undefined8 *)(param_1 + 0xb20),uVar4,uVar5,uVar6,CONCAT44(uVar7,uVar1));
    FUN_010892f0(param_1);
  }
  FUN_00410f20(plVar3);
  FUN_004144d0(&local_30);
  return;
}

