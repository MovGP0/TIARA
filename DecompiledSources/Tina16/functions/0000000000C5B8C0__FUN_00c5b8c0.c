/* Ghidra address: 00c5b8c0 */
/* Ghidra symbol: FUN_00c5b8c0 */


void FUN_00c5b8c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_28 [16];
  
  if (param_2 == *(longlong *)(param_1 + 0x6d0)) {
    iVar2 = *(int *)(param_1 + 0x7e0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x7e4);
  }
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_007314c8);
  if (iVar2 == -2) {
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(lVar1 + 0x310) + 0x78),0);
    (**(code **)(**(longlong **)(lVar1 + 0x310) + 200))(*(longlong **)(lVar1 + 0x310),0,0);
    (**(code **)(**(longlong **)(lVar1 + 0x310) + 0xc0))
              (*(longlong **)(lVar1 + 0x310),*(undefined4 *)(lVar1 + 0x98),
               *(undefined4 *)(lVar1 + 0x9c));
    (**(code **)(**(longlong **)(lVar1 + 0x310) + 200))
              (*(longlong **)(lVar1 + 0x310),*(undefined4 *)(lVar1 + 0x98),0);
    (**(code **)(**(longlong **)(lVar1 + 0x310) + 0xc0))
              (*(longlong **)(lVar1 + 0x310),0,*(undefined4 *)(lVar1 + 0x9c));
  }
  else {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x310) + 0x80),iVar2);
    FUN_00498350(local_28,0,0,*(undefined4 *)(lVar1 + 0x98),*(undefined4 *)(lVar1 + 0x9c));
    (**(code **)(**(longlong **)(lVar1 + 0x310) + 0xa8))(*(longlong **)(lVar1 + 0x310),local_28);
  }
  return;
}

