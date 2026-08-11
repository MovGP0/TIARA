/* Ghidra address: 00537f40 */
/* Ghidra symbol: FUN_00537f40 */


void FUN_00537f40(undefined8 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_00527bf8);
  cVar1 = FUN_00537d50(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar3);
  }
  if (-1 < param_2) {
    iVar2 = FUN_00537db0(param_1);
    if (param_2 < iVar2) goto LAB_00537fc5;
  }
  uVar3 = FUN_0044d490(&PTR_FUN_00434000,1,L"Index");
  FUN_004134c0(uVar3);
LAB_00537fc5:
  uVar3 = FUN_00536180(param_1);
  uVar3 = FUN_00537e30(uVar3);
  FUN_005376c0(param_3,local_28,uVar3,1);
  uVar3 = FUN_005383e0(param_1,param_2);
  FUN_005382b0(local_28,uVar3);
  FUN_00417740(local_28,&DAT_00527bf8);
  return;
}

