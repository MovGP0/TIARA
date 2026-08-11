/* Ghidra address: 00f11cf0 */
/* Ghidra symbol: FUN_00f11cf0 */


void FUN_00f11cf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 local_2c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x50),(longlong)(*(int *)(param_1 + 0x58) * 8));
    FUN_01d30f00(param_2,param_1 + 0x58,4);
    uVar2 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x58) * 8));
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    FUN_01d30f00(param_2,param_1 + 0x48,4);
    iVar1 = *(int *)(param_1 + 0x48);
    iVar5 = 1;
    if (0 < iVar1) {
      do {
        FUN_01d30f00(param_2,*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar5 * 8,8);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01d30f00(param_2,param_1 + 0x5c,1);
    FUN_01d31e40(param_2,*(undefined8 *)(param_1 + 0x60));
    FUN_01d30f00(param_2,param_1 + 0x70,1);
    if (*(char *)(param_1 + 0x70) != '\0') {
      uVar2 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x58) << 4));
      *(undefined8 *)(param_1 + 0x68) = uVar2;
      iVar1 = *(int *)(param_1 + 0x48);
      iVar5 = 1;
      if (0 < iVar1) {
        do {
          FUN_01d30f00(param_2,*(longlong *)(param_1 + 0x68) + -0x10 + (longlong)iVar5 * 0x10,0x10);
          iVar5 = iVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_01d30f00(param_2,&local_2c,4);
    lVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
    *(longlong *)(param_1 + 0x78) = lVar3;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
    }
    FUN_01d30f00(param_2,&local_2c,4);
    plVar4 = (longlong *)FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
    *(longlong **)(param_1 + 0x80) = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x100))(plVar4,param_1);
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0xe0);
    (**(code **)(*plVar4 + 0x80))(plVar4,L"Line",param_1);
  }
  return;
}

