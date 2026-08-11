/* Ghidra address: 01892270 */
/* Ghidra symbol: FUN_01892270 */


void FUN_01892270(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined8 local_a8 [9];
  undefined1 local_60 [72];
  
  local_b0 = auStack_f8;
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041804fe(uVar3,local_a8);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
    thunk_FUN_041804fe(param_1[0x9f],local_60);
    FUN_018929e0(param_1);
    thunk_FUN_0416269d(param_1[0x9f],local_60);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
    local_d8 = *(int *)((longlong)param_1 + 0x9c) + -3;
    FUN_00498350(local_c0,3,3,*(int *)((longlong)param_1 + 0x5a4) + 3);
    pcVar4 = (code *)FUN_00411550(param_1,0xffa8);
    (*pcVar4)(param_1,local_a8[0],uVar2,local_c0);
    cVar1 = FUN_01892b60(param_1);
    if (cVar1 == '\0') {
      FUN_01892620(param_1,local_a8[0],0);
      FUN_01892830(param_1,0);
    }
    else {
      FUN_01892620(param_1,local_a8[0],1);
      cVar1 = FUN_006838c0(param_1);
      if (cVar1 == '\0') {
        FUN_01892830(param_1,1);
      }
      else {
        FUN_01892830(param_1,2);
      }
    }
  }
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_0416269d(uVar3,local_a8);
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

