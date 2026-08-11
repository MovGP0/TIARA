/* Ghidra address: 00a67590 */
/* Ghidra symbol: FUN_00a67590 */


void FUN_00a67590(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_48 [38];
  short local_22;
  undefined4 local_20;
  undefined4 local_1c;
  int iVar4;
  
  *param_2 = 0;
  local_20 = 0;
  if (param_1 != 0) {
    local_20 = *(undefined4 *)(param_1 + -4);
  }
  local_1c = 0;
  FUN_00a66ba0(auStack_48);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar4 + 1;
    FUN_00419260(param_2,&DAT_00a2b798,1,(longlong)iVar3);
    uVar2 = FUN_00417740(*param_2 + (longlong)iVar4 * 0x10,&DAT_00a2b708);
    cVar1 = FUN_00a66e60(auStack_48,uVar2);
    if (cVar1 == '\0') break;
    iVar4 = iVar3;
    if (local_22 == 0x2c) {
      FUN_00a66ba0(auStack_48);
    }
  }
  if (iVar4 == 0) {
    *(undefined1 *)(*param_2 + 1) = 0;
    *(undefined1 *)*param_2 = 0;
    FUN_00419430(*param_2 + 8,&DAT_00a2b6b8);
  }
  else {
    FUN_00419260(param_2,&DAT_00a2b798,1,(longlong)iVar4);
  }
  return;
}

