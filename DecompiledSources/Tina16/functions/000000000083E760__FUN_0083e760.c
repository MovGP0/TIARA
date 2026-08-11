/* Ghidra address: 0083e760 */
/* Ghidra symbol: FUN_0083e760 */


void FUN_0083e760(longlong *param_1,int *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  cVar3 = FUN_00423b30(param_2);
  if (cVar3 != '\0') {
    FUN_0083e670(param_1);
    return;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1);
  if (param_3 == '\0') {
    uVar5 = FUN_0065b870(param_1);
    iVar4 = thunk_FUN_0419e3da(uVar5);
    if (iVar4 != 0) {
      bVar2 = false;
      goto LAB_0083e7b9;
    }
  }
  bVar2 = true;
LAB_0083e7b9:
  FUN_0083e5c0(param_1);
  uVar5 = FUN_0065b870(param_1);
  thunk_FUN_041cc6e2(uVar5,0,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0x48)
  ;
  (**(code **)(*param_1 + 0x2d0))(param_1);
  if (bVar2) {
    FUN_0083e5c0(param_1);
  }
  lVar1 = param_1[0xa1];
  pcVar6 = (code *)FUN_00411550(lVar1,0xffb0);
  cVar3 = (*pcVar6)(lVar1);
  if (cVar3 != '\0') {
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_03c244fb(uVar5);
  }
  return;
}

