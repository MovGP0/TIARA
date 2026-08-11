/* Ghidra address: 01bd58f0 */
/* Ghidra symbol: FUN_01bd58f0 */


void FUN_01bd58f0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_0064ccb0(param_1,param_2,&local_38);
  cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x120))(param_1,0);
    if (param_1[0x93] != 0) {
      FUN_01bfb2a0(param_1[0x93],0);
    }
    iVar2 = (**(code **)(*param_1 + 0x398))(param_1);
    if (iVar2 != (int)param_1[0xa1] * 2) {
      FUN_0064cbf0(param_1,iVar2);
    }
    FUN_0064cc50(param_1,0);
  }
  else {
    if (param_1[0x93] != 0) {
      FUN_01bfb2a0(param_1[0x93],1);
    }
    (**(code **)(*param_1 + 0x120))(param_1,0);
  }
  return;
}

