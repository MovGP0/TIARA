/* Ghidra address: 00742d40 */
/* Ghidra symbol: FUN_00742d40 */


void FUN_00742d40(longlong param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*param_2 == 0x113) {
    local_20 = auStack_48;
    pcVar1 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar1)(param_1);
  }
  else {
    uVar2 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x80),*param_2,*(undefined8 *)(param_2 + 2)
                               ,*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  return;
}

