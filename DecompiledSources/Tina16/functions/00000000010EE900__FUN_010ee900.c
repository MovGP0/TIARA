/* Ghidra address: 010ee900 */
/* Ghidra symbol: FUN_010ee900 */


void FUN_010ee900(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_2c [3];
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x48,8);
    FUN_01d30f00(param_2,param_1 + 0x50,8);
    FUN_01d30f00(param_2,param_1 + 0x58,8);
    FUN_01d30f00(param_2,param_1 + 0x60,8);
    FUN_01d30f00(param_2,param_1 + 0x68,8);
    FUN_01d30f00(param_2,param_1 + 0x70,8);
    FUN_01d30f00(param_2,local_2c,4);
    lVar2 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
    }
    FUN_01d30f00(param_2,local_2c,4);
    plVar3 = (longlong *)FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong **)(param_1 + 0x80) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x100))(plVar3,param_1);
    }
    FUN_01d31e40(param_2,*(undefined8 *)(param_1 + 0x88));
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0xe0);
    (**(code **)(*plVar3 + 0x80))(plVar3,L"Circle",param_1);
  }
  return;
}

