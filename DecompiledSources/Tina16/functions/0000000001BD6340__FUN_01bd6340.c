/* Ghidra address: 01bd6340 */
/* Ghidra symbol: FUN_01bd6340 */


void FUN_01bd6340(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  FUN_01bff8d0(param_1);
  cVar3 = FUN_01c02d10(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x3c0))(param_1);
  }
  else {
    while (param_1[0xb0] != 0) {
      iVar4 = FUN_00611650(param_1[0xb0]);
      if (iVar4 < 1) break;
      uVar5 = (**(code **)(*(longlong *)param_1[0xb0] + 8))((longlong *)param_1[0xb0]);
      FUN_0064dbe0(uVar5,1);
    }
    lVar1 = param_1[0xb0];
    param_1[0xb0] = 0;
    FUN_00410f20(lVar1);
    cVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar3 == '\0') {
      lVar1 = param_1[0xb2];
      param_1[0xb2] = 0;
      FUN_00410f20(lVar1);
    }
    else {
      plVar2 = (longlong *)param_1[0xb2];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,0);
      }
    }
    pcVar6 = (code *)FUN_00411550(param_1,0xffce);
    (*pcVar6)(param_1);
  }
  return;
}

