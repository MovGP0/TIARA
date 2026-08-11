/* Ghidra address: 00ce2330 */
/* Ghidra symbol: FUN_00ce2330 */


void FUN_00ce2330(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_00414480(local_20);
    }
    else {
      lVar3 = FUN_00cdd8c0(&PTR_FUN_00cdd5f0,1);
      *(longlong *)(param_1 + 8) = lVar3;
      FUN_00cd98b0(*(undefined8 *)(lVar3 + 0x10),L"Username",*(undefined8 *)(param_1 + 0x28));
      FUN_00cd98b0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),L"Password",
                   *(undefined8 *)(param_1 + 0x10));
      (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_20);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_20);
  }
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(param_2,L"Proxy-Authorization",local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

