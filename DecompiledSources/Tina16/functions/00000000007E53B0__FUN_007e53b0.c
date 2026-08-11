/* Ghidra address: 007e53b0 */
/* Ghidra symbol: FUN_007e53b0 */


undefined4 FUN_007e53b0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined4 local_44 [7];
  undefined1 local_28 [16];
  
  lVar5 = FUN_007e3880();
  if (((lVar5 == 0) ||
      (cVar2 = FUN_004113d0(*(undefined8 *)(lVar5 + 8),&PTR_FUN_00640c18), cVar2 == '\0')) ||
     (cVar2 = FUN_0044f0c0(6,3), cVar2 == '\0')) {
    plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02005950 + 0xd0);
    if (plVar1 == (longlong *)0x0) {
      uVar7 = thunk_FUN_040ef593(0);
      uVar4 = thunk_FUN_03e5bd07(uVar7,0x5a);
      thunk_FUN_041a9b5c(0,uVar7);
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
    }
    return uVar4;
  }
  local_44[0] = 0x2c;
  lVar6 = FUN_0065b870(*(undefined8 *)(lVar5 + 8));
  if (lVar6 != 0) {
    uVar7 = FUN_0065b870(*(undefined8 *)(lVar5 + 8));
    iVar3 = thunk_FUN_03f78330(uVar7,local_44);
    if (iVar3 != 0) {
      local_50 = FUN_00423530(local_28);
      lVar5 = FUN_00809b30(*(undefined8 *)PTR_DAT_02005950,&local_50,0);
      goto LAB_007e5470;
    }
  }
  lVar5 = FUN_00809ba0(*(undefined8 *)PTR_DAT_02005950,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0);
LAB_007e5470:
  if (lVar5 != 0) {
    uVar4 = FUN_008078c0(lVar5);
    return uVar4;
  }
  return *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
}

