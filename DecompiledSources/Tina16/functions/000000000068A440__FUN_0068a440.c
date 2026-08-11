/* Ghidra address: 0068a440 */
/* Ghidra symbol: FUN_0068a440 */


void FUN_0068a440(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  undefined1 auStack_38 [32];
  
  cVar5 = (char)param_2;
  if (*(char *)((longlong)param_1 + 0x499) != cVar5) {
    *(char *)((longlong)param_1 + 0x499) = cVar5;
    FUN_0065bce0(param_1,param_2);
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(param_1);
      uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      thunk_FUN_041b2403(uVar3,0xf1,uVar2,0);
    }
    if (cVar5 != '\0') {
      FUN_0068a330(auStack_38);
      FUN_0064d480(param_1);
      if ((char)param_1[0x92] == '\0') {
        pcVar4 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar4)(param_1);
      }
    }
  }
  return;
}

