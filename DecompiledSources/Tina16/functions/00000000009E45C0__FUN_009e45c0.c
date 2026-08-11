/* Ghidra address: 009e45c0 */
/* Ghidra symbol: FUN_009e45c0 */


longlong * FUN_009e45c0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_28;
  undefined1 local_20 [16];
  
  local_28 = 0;
  uVar4 = FUN_0045adf0();
  FUN_00459ca0(uVar4,&local_28,*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_009e3580(param_1,(longlong)param_4,2);
  FUN_004169f0(param_2,uVar1);
  FUN_009e4700(param_1,local_20,2);
  lVar5 = 0;
  if (local_28 != 0) {
    lVar5 = *(longlong *)(local_28 + -8);
  }
  iVar2 = FUN_009e3fc0(param_1,param_3,*param_2,param_4,local_28,lVar5 + -1,local_20);
  iVar3 = FUN_009e3ef0(param_1,*param_2 + (longlong)iVar2,local_20);
  FUN_004169f0(param_2,(longlong)(iVar2 + iVar3) / 2 & 0xffffffff);
  FUN_00419430(&local_28,&DAT_00406578);
  return param_2;
}

