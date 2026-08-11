/* Ghidra address: 00453230 */
/* Ghidra symbol: FUN_00453230 */


longlong FUN_00453230(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_48 [2];
  undefined1 local_40;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (iVar1 < param_3 + param_4) {
    local_40 = 0;
    local_48[0] = param_3;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,local_48,0);
    FUN_004134c0(uVar2);
  }
  if (param_3 < 0) {
    local_40 = 0;
    local_48[0] = param_3;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,local_48,0);
    FUN_004134c0(uVar2);
  }
  if (0 < param_4) {
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_00455960(param_1,iVar1 + param_4);
    lVar3 = FUN_00414de0(param_1 + 8);
    FUN_00409a70(param_2 + (longlong)param_3 * 2,lVar3 + (longlong)iVar1 * 2,(longlong)(param_4 * 2)
                );
  }
  return param_1;
}

