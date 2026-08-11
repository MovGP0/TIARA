/* Ghidra address: 0058b2b0 */
/* Ghidra symbol: FUN_0058b2b0 */


void FUN_0058b2b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined1 local_30;
  
  iVar1 = FUN_00589bc0(*(undefined8 *)*param_2,param_3);
  lVar2 = (longlong)iVar1;
  if (lVar2 < 0) {
    local_30 = 0x11;
    local_38 = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00587ce8,1,PTR_PTR_02002540,&local_38,0);
    lVar2 = FUN_004134c0(uVar3);
  }
  FUN_0058af20(param_1,param_2,lVar2);
  return;
}

