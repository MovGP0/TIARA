/* Ghidra address: 0173cfa0 */
/* Ghidra symbol: FUN_0173cfa0 */


bool FUN_0173cfa0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    FUN_01d04970(param_1[5],param_3,param_4,&local_2c,&local_30,1);
    (**(code **)(*param_1 + 0x10))(param_1,local_48,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    uVar3 = FUN_00498310(local_2c,local_30);
    iVar2 = thunk_FUN_03f16006(local_48,uVar3);
    bVar4 = iVar2 != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

