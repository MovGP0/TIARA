/* Ghidra address: 007e8c00 */
/* Ghidra symbol: FUN_007e8c00 */


void FUN_007e8c00(longlong *param_1,longlong param_2,undefined8 *param_3,ushort param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  iVar3 = FUN_0044f080();
  if (iVar3 < 5) {
    iVar3 = FUN_0044f080();
    if (iVar3 == 4) {
      iVar3 = FUN_0044f0a0();
      if (0 < iVar3) goto LAB_007e8c49;
    }
    bVar1 = false;
  }
  else {
LAB_007e8c49:
    bVar1 = true;
  }
  pcVar6 = (code *)FUN_00411550(param_1,0xfff1);
  uVar7 = (*pcVar6)(param_1);
  cVar2 = FUN_004113d0(uVar7,&PTR_FUN_007db330);
  if (((param_4 & 1) == 0) || ((cVar2 != '\0' && ((cVar2 == '\0' || (bVar1)))))) {
    if ((bVar1) && ((param_4 & 0x80) != 0)) {
      FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xff000004);
      FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000011);
    }
    else {
      FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xff000004);
      FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000007);
    }
  }
  else {
    FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0xff00000d);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff00000e);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = FUN_005fce00(uVar7);
  uVar5 = FUN_007e53b0(param_1);
  uVar4 = thunk_FUN_03f3ed25(uVar4,uVar5,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_005fce30(uVar7,uVar4);
  (**(code **)(*param_1 + 0x88))(param_1,param_2,&local_38,param_4,cVar2);
  return;
}

