/* Ghidra address: 01cdcf90 */
/* Ghidra symbol: FUN_01cdcf90 */


void FUN_01cdcf90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_1c;
  
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d30f00(param_2,&local_1c,4);
    lVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_1c);
    *(longlong *)(param_1 + 0x78) = lVar3;
    if (lVar3 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      *(undefined8 *)(param_1 + 0x78) = uVar4;
    }
    FUN_01d30f00(param_2,&local_1c,4);
    uVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_1c);
    FUN_01cd9880(param_1,uVar4);
    FUN_01d30f00(param_2,&local_1c,4);
    uVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_1c);
    FUN_01cd98a0(param_1,uVar4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x88);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,param_1);
  }
  return;
}

