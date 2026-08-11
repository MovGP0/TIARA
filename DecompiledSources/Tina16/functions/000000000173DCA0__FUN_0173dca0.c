/* Ghidra address: 0173dca0 */
/* Ghidra symbol: FUN_0173dca0 */


void FUN_0173dca0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*PTR_DAT_02001560 != '\0') {
    cVar1 = FUN_01d06fe0(param_1[5]);
    if (cVar1 != '\0') {
      cVar1 = FUN_01d07320(param_1[5]);
      if (-1 < cVar1) {
        FUN_01d04970(param_1[5],param_3,param_4,&local_2c,&local_30,0);
        goto LAB_0173dd22;
      }
    }
  }
  FUN_01d04970(param_1[5],param_3,param_4,&local_2c,&local_30,1);
LAB_0173dd22:
  (**(code **)(*param_1 + 0x10))(param_1,local_48,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  uVar3 = FUN_00498310(local_2c,local_30);
  iVar2 = thunk_FUN_03f16006(local_48,uVar3);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x90))(param_1,param_2);
  }
  return;
}

