/* Ghidra address: 00d589a0 */
/* Ghidra symbol: FUN_00d589a0 */


void FUN_00d589a0(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  HDC pHVar5;
  HDC pHVar6;
  undefined8 uVar7;
  
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_041e8c78(uVar4,3);
  if ((char)param_1[0xf] == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar3 == '\0') {
      uVar4 = FUN_005ffa40(param_2);
      iVar1 = *param_3;
      iVar2 = param_3[1];
      uVar7 = FUN_00609e10(param_1);
      uVar7 = FUN_005ffa40(uVar7);
      thunk_FUN_03c1ffbb(uVar4,iVar1,iVar2,param_3[2] - iVar1,param_3[3] - iVar2,uVar7,*param_4,
                         param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],0xcc0020);
    }
    else {
      pHVar5 = (HDC)FUN_005ffa40(param_2);
      iVar1 = *param_3;
      iVar2 = param_3[1];
      uVar4 = FUN_00609e10(param_1);
      pHVar6 = (HDC)FUN_005ffa40(uVar4);
      TransparentBlt(pHVar5,iVar1,iVar2,param_3[2] - iVar1,param_3[3] - iVar2,pHVar6,*param_4,
                     param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],0x7f007f);
    }
  }
  else {
    pHVar5 = (HDC)FUN_005ffa40(param_2);
    iVar1 = *param_3;
    iVar2 = param_3[1];
    uVar4 = FUN_00609e10(param_1);
    pHVar6 = (HDC)FUN_005ffa40(uVar4);
    AlphaBlend(pHVar5,iVar1,iVar2,param_3[2] - iVar1,param_3[3] - iVar2,pHVar6,*param_4,param_4[1],
               param_4[2] - *param_4,param_4[3] - param_4[1],(BLENDFUNCTION)0x1ff0000);
  }
  return;
}

