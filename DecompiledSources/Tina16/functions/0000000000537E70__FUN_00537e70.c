/* Ghidra address: 00537e70 */
/* Ghidra symbol: FUN_00537e70 */


undefined8 FUN_00537e70(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_00537d50(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar3);
  }
  if (-1 < param_3) {
    iVar2 = FUN_00537db0(param_1);
    if (param_3 < iVar2) goto LAB_00537ed6;
  }
  uVar3 = FUN_0044d490(&PTR_FUN_00434000,1,L"Index");
  FUN_004134c0(uVar3);
LAB_00537ed6:
  uVar3 = FUN_005383e0(param_1,param_3);
  uVar4 = FUN_00536180(param_1);
  uVar4 = FUN_00537e30(uVar4);
  uVar5 = FUN_00417740(param_2,&DAT_00527bf8);
  FUN_00538080(uVar3,uVar4,uVar5);
  return param_2;
}

