/* Ghidra address: 015650e0 */
/* Ghidra symbol: FUN_015650e0 */


void FUN_015650e0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,int param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  plVar1 = (longlong *)param_2[0xa5];
  if (plVar1 == (longlong *)0x0) {
    FUN_01d03160(param_2);
    (**(code **)(*param_2 + 0x210))(param_2,param_3);
    (**(code **)(*param_2 + 0x1f0))(param_2,param_3,param_4,param_5);
  }
  else {
    cVar2 = FUN_01563700(param_1,param_2);
    if ((cVar2 == '\0') || (param_6 != 1)) {
      cVar2 = FUN_01563730(param_1,param_2);
      if ((cVar2 == '\0') || (param_6 != 2)) {
        *param_4 = 0xffffffff;
        *param_5 = 0xffffffff;
        goto LAB_015651bf;
      }
    }
    FUN_01d03160(param_2);
    FUN_01d03160(plVar1);
    iVar3 = FUN_015f8ca0(param_2,param_3);
    if (iVar3 < 0) {
      *param_4 = 0xffffffff;
      *param_5 = 0xffffffff;
    }
    else {
      (**(code **)(*plVar1 + 0x1f0))(plVar1,iVar3,param_4,param_5);
    }
  }
LAB_015651bf:
  *(undefined4 *)(param_1 + 0x928) = 1;
  return;
}

