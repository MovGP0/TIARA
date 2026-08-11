/* Ghidra address: 013ecbb0 */
/* Ghidra symbol: FUN_013ecbb0 */


void FUN_013ecbb0(longlong param_1)

{
  longlong lVar1;
  
  FUN_014385d0(*(undefined8 *)(param_1 + 0x738),param_1 + 0x745);
  *(uint *)(param_1 + 0x108c) = (uint)*(byte *)(param_1 + 0xcbb);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0xcd0));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0xcd8));
  FUN_006d8180(*(undefined8 *)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0x1080));
  if (*(int *)(param_1 + 0x1080) == 1) {
    if (*(int *)(param_1 + 0x1084) == 0) {
      *(undefined1 *)(param_1 + 0x741) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
      (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),0);
      (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
      (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),0);
      (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
    }
    else {
      *(undefined1 *)(param_1 + 0x741) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),0);
      (**(code **)(**(longlong **)(param_1 + 0x730) + 0x128))(*(longlong **)(param_1 + 0x730),0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x741) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),0);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
  }
  FUN_013ecda0(param_1);
  if ((*(int *)(param_1 + 0x1080) == 1) && (*(int *)(param_1 + 0x1084) == 0)) {
    lVar1 = FUN_019a4600();
    if (10 < *(int *)(*(longlong *)(lVar1 + 0x468) + 0x10)) {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),0);
    }
  }
  return;
}

