/* Ghidra address: 019504e0 */
/* Ghidra symbol: FUN_019504e0 */


void FUN_019504e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1e];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_004aee50(*(undefined8 *)(lVar1 + 0x80),param_1,*(undefined1 *)(param_1[0x10] + 0x28));
    }
    if (param_2 != 0) {
      FUN_004ae7e0(*(undefined8 *)(param_2 + 0x80),param_1);
    }
  }
  param_1[0x1e] = param_2;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0xf0))(param_1,(char)param_1[0x17]);
  }
  return;
}

