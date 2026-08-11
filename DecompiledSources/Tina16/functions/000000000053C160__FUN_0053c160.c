/* Ghidra address: 0053c160 */
/* Ghidra symbol: FUN_0053c160 */


ulonglong FUN_0053c160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar7 = 0;
  lVar4 = FUN_005361b0(param_1);
  lVar4 = FUN_00587f10(**(undefined8 **)(lVar4 + 1));
  iVar1 = *(int *)(lVar4 + 1);
  lVar4 = FUN_005361b0(param_1);
  lVar4 = FUN_00587f10(**(undefined8 **)(lVar4 + 1));
  iVar2 = *(int *)(lVar4 + 5);
  lVar4 = FUN_00587f10(param_2);
  lVar4 = FUN_00587f10(**(undefined8 **)(lVar4 + 1));
  iVar3 = *(int *)(lVar4 + 1);
  lVar4 = FUN_00587f10(param_2);
  lVar4 = FUN_00587f10(**(undefined8 **)(lVar4 + 1));
  if ((iVar1 == iVar3) && (iVar2 == *(int *)(lVar4 + 5))) {
    uVar5 = FUN_00538390(param_1);
    uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(uVar5,param_2,uVar6);
    uVar7 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar7 & 0xffffffff;
}

