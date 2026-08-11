/* Ghidra address: 0064d560 */
/* Ghidra symbol: FUN_0064d560 */


void FUN_0064d560(longlong *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if ((*(char *)((longlong)param_1 + 0x2c9) == '\0') && (0 < param_2)) {
    *(undefined1 *)((longlong)param_1 + 0x2c9) = 1;
    puVar2 = auStack_48;
    if (*(int *)((longlong)param_1 + 0x2cc) == 0) {
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar3;
      puVar2 = local_20;
    }
    local_20 = puVar2;
    iVar1 = *(int *)((longlong)param_1 + 0x2cc);
    if (param_2 != iVar1) {
      pcVar4 = (code *)FUN_00411550(param_1,0xffeb);
      (*pcVar4)(param_1,param_2,iVar1,1);
    }
    *(undefined1 *)((longlong)param_1 + 0x2c9) = 0;
  }
  return;
}

