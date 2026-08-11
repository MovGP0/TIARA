/* Ghidra address: 009e3da0 */
/* Ghidra symbol: FUN_009e3da0 */


longlong * FUN_009e3da0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_28;
  undefined1 local_20 [16];
  
  local_28 = 0;
  param_4 = param_4 + 1;
  if (param_4 < 1) {
    FUN_00419430(param_2,&DAT_00406578);
  }
  else {
    uVar3 = FUN_0045ae90();
    FUN_00459ca0(uVar3,&local_28,*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_009e3580(param_1,(longlong)param_4,1);
    FUN_00419260(param_2,&DAT_00406578,1,uVar3);
    FUN_009e4700(param_1,local_20,1);
    lVar4 = 0;
    if (local_28 != 0) {
      lVar4 = *(longlong *)(local_28 + -8);
    }
    iVar1 = FUN_009e3fc0(param_1,param_3,*param_2,param_4,local_28,lVar4 + -1,local_20);
    iVar2 = FUN_009e3ef0(param_1,*param_2 + (longlong)iVar1,local_20);
    FUN_00419260(param_2,&DAT_00406578,1,(longlong)(iVar1 + iVar2));
  }
  FUN_00419430(&local_28,&DAT_00406578);
  return param_2;
}

