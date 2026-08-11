/* Ghidra address: 01b699a0 */
/* Ghidra symbol: FUN_01b699a0 */


void FUN_01b699a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd10) + 0x260))(*(longlong **)(param_1 + 0xd10));
  if (-1 < iVar3) {
    lVar1 = *(longlong *)(param_1 + 0xda8);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0xd10) + 0x260))(*(longlong **)(param_1 + 0xd10))
    ;
    *(char *)(lVar1 + 0x158) = cVar2;
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xc98) + 0x128))(*(longlong **)(param_1 + 0xc98),0);
      (**(code **)(**(longlong **)(param_1 + 0xca0) + 0x128))(*(longlong **)(param_1 + 0xca0),0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xc98) + 0x128))(*(longlong **)(param_1 + 0xc98),1);
      (**(code **)(**(longlong **)(param_1 + 0xca0) + 0x128))(*(longlong **)(param_1 + 0xca0),1);
    }
  }
  return;
}

