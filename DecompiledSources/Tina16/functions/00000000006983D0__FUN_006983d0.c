/* Ghidra address: 006983d0 */
/* Ghidra symbol: FUN_006983d0 */


void FUN_006983d0(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  HWND pHVar5;
  undefined8 uVar6;
  
  bVar2 = false;
  cVar3 = FUN_00696b90(param_1);
  bVar1 = false;
  if (cVar3 != '\0') {
    iVar4 = *param_2;
    bVar1 = bVar2;
    if ((iVar4 == 5) || (iVar4 - 0x201U < 4)) {
      pHVar5 = (HWND)FUN_00786090(param_1);
      BufferedPaintStopAllAnimations(pHVar5);
    }
    else if (iVar4 == 0xb007) {
      if (*(longlong *)(param_2 + 4) == *(longlong *)(param_1 + 0x10)) {
        pHVar5 = (HWND)FUN_00786090(param_1);
        BufferedPaintStopAllAnimations(pHVar5);
      }
    }
    else {
      bVar1 = false;
      if (iVar4 == 0xb00c) {
        pHVar5 = (HWND)FUN_00786090(param_1);
        BufferedPaintStopAllAnimations(pHVar5);
        FUN_00786040(param_1,0);
        bVar1 = true;
      }
    }
  }
  FUN_00786c80(param_1,param_2);
  iVar4 = *param_2;
  if (iVar4 == 0xb007) {
    cVar3 = FUN_00696b90(param_1);
    if ((cVar3 != '\0') && (*(longlong *)(param_2 + 4) == *(longlong *)(param_1 + 0x10))) {
      cVar3 = FUN_0065be20(*(undefined8 *)(param_1 + 0x10));
      if (cVar3 != '\0') {
        uVar6 = FUN_00786090(param_1);
        iVar4 = thunk_FUN_0419e3da(uVar6);
        if (iVar4 != 0) {
          uVar6 = FUN_00786090(param_1);
          thunk_FUN_041543e0(uVar6,0,0,0x101);
        }
      }
    }
  }
  else if (iVar4 == 0xb00c) {
    if (bVar1) {
      FUN_00786040(param_1,1);
    }
    cVar3 = FUN_0065be20(*(undefined8 *)(param_1 + 0x10));
    if (cVar3 != '\0') {
      uVar6 = FUN_00786090(param_1);
      iVar4 = thunk_FUN_0419e3da(uVar6);
      if (iVar4 != 0) {
        uVar6 = FUN_00786090(param_1);
        thunk_FUN_041543e0(uVar6,0,0,0x101);
      }
    }
  }
  else if (iVar4 == 0xb012) {
    cVar3 = FUN_0065be20(*(undefined8 *)(param_1 + 0x10));
    if (cVar3 != '\0') {
      uVar6 = FUN_00786090(param_1);
      iVar4 = thunk_FUN_0419e3da(uVar6);
      if (iVar4 != 0) {
        uVar6 = FUN_00786090(param_1);
        thunk_FUN_041543e0(uVar6,0,0,0x101);
      }
    }
  }
  return;
}

