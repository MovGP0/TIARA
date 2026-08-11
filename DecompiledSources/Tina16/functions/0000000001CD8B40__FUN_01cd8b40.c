/* Ghidra address: 01cd8b40 */
/* Ghidra symbol: FUN_01cd8b40 */


void FUN_01cd8b40(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_2c;
  
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 != 0) {
    return;
  }
  FUN_01d30f00(param_2,param_1 + 0x40,4);
  FUN_01d30f00(param_2,&local_2c,4);
  lVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
  *(longlong *)(param_1 + 0x60) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
  }
  FUN_01d30f00(param_2,&local_2c,4);
  lVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c);
  *(longlong *)(param_1 + 0x68) = lVar3;
  if (lVar3 == 0) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
    uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  FUN_01d30f00(param_2,param_1 + 0x70,1);
  FUN_01d30f00(param_2,param_1 + 0x74,4);
  FUN_01d30f00(param_2,param_1 + 0x80,1);
  FUN_01d30f00(param_2,param_1 + 0x88,8);
  FUN_01d30f00(param_2,param_1 + 0x90,4);
  FUN_01d31c60(param_2,*(undefined8 *)(param_1 + 0x98));
  FUN_01d31c60(param_2,*(undefined8 *)(param_1 + 0xa0));
  FUN_01d30f00(param_2,param_1 + 0xb8,8);
  FUN_01d30f00(param_2,param_1 + 0xc0,8);
  FUN_01d30f00(param_2,param_1 + 200,8);
  FUN_01d30f00(param_2,param_1 + 0xd0,8);
  if (param_3 < 0x11) {
    FUN_01d312f0(param_2,param_1 + 0xd8);
  }
  else {
    FUN_01d316c0(param_2,param_1 + 0xd8);
  }
  FUN_01d312f0(param_2,param_1 + 0xe0);
  FUN_01d30f00(param_2,param_1 + 0xf0,1);
  if (0x21 < param_3) {
    FUN_01d30f00(param_2,param_1 + 0x120,1);
    FUN_01d30f00(param_2,param_1 + 0x12,1);
  }
  uVar5 = FUN_01cd6670(param_1);
  uVar5 = uVar5 & 0xff;
  if (uVar5 < 6) {
    if (uVar5 != 5) {
      uVar5 = uVar5 - 1;
      if (uVar5 != 0xffffffffffffffff) {
        if (uVar5 < 3) goto LAB_01cd8db0;
        if (uVar5 != 3) goto LAB_01cd8dfc;
      }
LAB_01cd8d95:
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x70);
      (**(code **)(*plVar1 + 0x80))(plVar1,0,param_1);
      goto LAB_01cd8dfc;
    }
  }
  else {
    if (uVar5 == 6) goto LAB_01cd8d95;
    if (uVar5 != 7) goto LAB_01cd8dfc;
  }
LAB_01cd8db0:
  if (*(char *)(param_1 + 0x120) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x78);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2 + -1);
    *(longlong *)(lVar3 + 0x118) = param_1;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x78);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,param_1);
  }
LAB_01cd8dfc:
  if (0x11 < param_3) {
    uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01d32040(param_2,uVar4);
    FUN_005dd980(*(undefined8 *)(param_1 + 0x110),uVar4);
    FUN_00410f20(uVar4);
  }
  return;
}

