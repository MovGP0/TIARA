/* Ghidra address: 009e3b10 */
/* Ghidra symbol: FUN_009e3b10 */


longlong FUN_009e3b10(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_72a [2];
  undefined1 local_728 [768];
  undefined1 local_428 [1024];
  
  FUN_009e46f0(param_1,local_72a);
  lVar3 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_428,0x400);
    iVar2 = FUN_009e3910(param_1,local_428,local_728,iVar1,1,local_72a);
    (**(code **)(*param_3 + 0x20))(param_3,local_728,iVar2);
    lVar3 = lVar3 + iVar2;
  } while (iVar1 != 0);
  return lVar3;
}

