/* Ghidra address: 0185a1d0 */
/* Ghidra symbol: FUN_0185a1d0 */


void FUN_0185a1d0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                 int param_5,char param_6)

{
  int xoriginDest;
  int yoriginDest;
  char cVar1;
  int wSrc;
  int hSrc;
  BOOL BVar2;
  undefined8 uVar3;
  HDC hdcDest;
  HDC hdcSrc;
  bool bVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = *param_4;
  local_38 = param_4[1];
  if (param_6 == '\x01') {
    bVar4 = *param_2 != *(longlong *)PTR_PTR_02002398;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (param_5 == 0x1fffffff)) {
    (**(code **)(param_1 + 0x50))(param_1,param_2,param_3,&local_40);
    return;
  }
  if ((param_5 == 0x1fffffff) &&
     ((cVar1 = FUN_004113d0(param_3,&PTR_FUN_01858398), cVar1 != '\0' ||
      (cVar1 = FUN_004113d0(param_3,&PTR_FUN_00a2f148), cVar1 != '\0')))) {
    uVar3 = FUN_005ffa40(param_2);
    cVar1 = FUN_01853620(uVar3);
    if ((cVar1 != '\0') && (cVar1 = FUN_018599a0(param_3,&local_30), cVar1 != '\0')) {
      FUN_005fdf10(param_2);
      uVar3 = FUN_005ffa40(param_2);
      thunk_FUN_041e8c78(uVar3,4);
      hdcDest = (HDC)FUN_005ffa40(param_2);
      xoriginDest = (int)local_40;
      yoriginDest = local_40._4_4_;
      uVar3 = FUN_00609e10(local_30);
      hdcSrc = (HDC)FUN_005ffa40(uVar3);
      wSrc = (**(code **)(*param_3 + 0x60))(param_3);
      hSrc = (**(code **)(*param_3 + 0x48))(param_3);
      BVar2 = AlphaBlend(hdcDest,xoriginDest,yoriginDest,(int)local_38 - xoriginDest,
                         local_38._4_4_ - yoriginDest,hdcSrc,0,0,wSrc,hSrc,DAT_01fae428);
      FUN_005fe090(param_2);
      FUN_00410f20(local_30);
      if (BVar2 != 0) {
        return;
      }
      FUN_01868670(param_1,param_2,param_3,&local_40);
      return;
    }
  }
  FUN_01868670(param_1,param_2,param_3,&local_40);
  return;
}

