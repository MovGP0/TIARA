/* Ghidra address: 008452f0 */
/* Ghidra symbol: FUN_008452f0 */


void FUN_008452f0(longlong param_1,short param_2,int param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  pcVar3 = (code *)FUN_00411550(uVar4,0xffc5);
  cVar1 = (*pcVar3)(uVar4);
  if ((cVar1 != '\0') && (param_2 == 0)) {
    if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x4a4) == 1) {
      param_3 = (*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8)) - param_3;
    }
    else {
      param_3 = 0x7f - param_3;
    }
  }
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
  iVar2 = thunk_FUN_04119211(uVar4,param_2);
  if (iVar2 != param_3) {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0xc0));
    thunk_FUN_04145aef(uVar4,param_2,param_3,0xffffffff);
  }
  return;
}

