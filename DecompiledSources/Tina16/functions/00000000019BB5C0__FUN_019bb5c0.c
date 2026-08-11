/* Ghidra address: 019bb5c0 */
/* Ghidra symbol: FUN_019bb5c0 */


void FUN_019bb5c0(longlong *param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  if (*(char *)((longlong)param_1 + 0x49a) != param_2) {
    *(char *)((longlong)param_1 + 0x49a) = param_2;
    lVar1 = param_1[0x93];
    FUN_019bb4e0(param_1,0);
    (**(code **)(*param_1 + 0x268))(param_1);
    pcVar2 = (code *)FUN_00411550(param_1,0xffce);
    (*pcVar2)(param_1);
    FUN_019bb4e0(param_1,(char)lVar1);
  }
  return;
}

