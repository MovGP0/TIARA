/* Ghidra address: 0086b4d0 */
/* Ghidra symbol: FUN_0086b4d0 */


void FUN_0086b4d0(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_68;
  longlong local_60 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_68 = 0;
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_0046bd60(&local_40);
  FUN_00417580(local_60,&DAT_00862ac0);
  iVar4 = 0;
  bVar1 = false;
  FUN_004194b0(&local_68,DAT_020127b8,&DAT_00862b58);
  uVar5 = 0;
  while( true ) {
    uVar3 = 0;
    if (local_68 != 0) {
      uVar3 = *(ulonglong *)(local_68 + -8);
    }
    if (uVar3 <= uVar5) goto code_r0x0086b5b5;
    FUN_00417c40(local_60,local_68 + uVar5 * 0x20,&DAT_00862ac0);
    if (param_2 == local_60[0]) {
      bVar6 = true;
    }
    else if ((param_2 == 0) || (local_60[0] == 0)) {
      bVar6 = false;
    }
    else {
      iVar2 = FUN_0043e420(param_2,local_60[0]);
      bVar6 = iVar2 == 0;
    }
    if (bVar6) break;
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 + 1;
  }
  bVar1 = true;
code_r0x0086b5b5:
  FUN_00419430(&local_68,&DAT_00862b58);
  if (bVar1) {
    iVar2 = -1;
    if (param_4 != '\0') {
      iVar2 = iVar4;
    }
  }
  else {
    iVar2 = 0;
    if (DAT_020127b8 != 0) {
      iVar2 = (int)*(undefined8 *)(DAT_020127b8 + -8);
    }
    FUN_00419260(&DAT_020127b8,&DAT_00862b58,1,(longlong)(iVar2 + 1));
  }
  if (iVar2 != -1) {
    FUN_00414ad0(DAT_020127b8 + (longlong)iVar2 * 0x20,param_2);
    FUN_00461840(DAT_020127b8 + 8 + (longlong)iVar2 * 0x20,&local_40);
  }
  FUN_00419430(&local_68,&DAT_00862b58);
  FUN_00417740(local_60,&DAT_00862ac0);
  FUN_00460ba0(&local_40);
  return;
}

