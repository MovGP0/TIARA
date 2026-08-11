/* Ghidra address: 009e43b0 */
/* Ghidra symbol: FUN_009e43b0 */


longlong FUN_009e43b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_730;
  longlong local_728;
  undefined1 local_720 [8];
  undefined1 local_718 [1024];
  undefined1 local_318 [768];
  
  local_728 = 0;
  uVar3 = FUN_0045ae90();
  FUN_00459ca0(uVar3,&local_728,*(undefined8 *)(param_1 + 0x10));
  FUN_009e4700(param_1,local_720,1);
  local_730 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_318,0x300);
    lVar4 = 0;
    if (local_728 != 0) {
      lVar4 = *(longlong *)(local_728 + -8);
    }
    iVar2 = FUN_009e3fc0(param_1,local_318,local_718,iVar1,local_728,lVar4 + -1,local_720);
    (**(code **)(*param_3 + 0x20))(param_3,local_718,iVar2);
    local_730 = local_730 + iVar2;
  } while (iVar1 != 0);
  iVar1 = FUN_009e3ef0(param_1,local_718,local_720);
  (**(code **)(*param_3 + 0x20))(param_3,local_718,iVar1);
  FUN_00419430(&local_728,&DAT_00406578);
  return local_730 + iVar1;
}

