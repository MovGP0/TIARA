/* Ghidra address: 0138c5c0 */
/* Ghidra symbol: FUN_0138c5c0 */


void FUN_0138c5c0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined4 local_1c;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x128))
              (*(longlong **)(param_1 + 0xe88),&local_1c,param_1 + 0xe74);
    local_1c = FUN_00f04d50(*(undefined8 *)(param_1 + 0xc38));
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x130))
              (*(longlong **)(param_1 + 0xe88),&local_1c,param_1 + 0xe74,1);
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x120))
              (*(longlong **)(param_1 + 0xe88),local_1c,*(undefined1 *)(param_1 + 0xe74));
    FUN_00f04fa0(*(undefined8 *)(param_1 + 0xc38),local_1c);
  }
  return;
}

