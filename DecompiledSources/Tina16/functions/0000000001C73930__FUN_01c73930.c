/* Ghidra address: 01c73930 */
/* Ghidra symbol: FUN_01c73930 */


void FUN_01c73930(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_21;
  longlong local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x1348));
  *(undefined4 *)(param_1 + 0x1b44) = uVar2;
  *(undefined4 *)(param_1 + 0x1b48) = *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4a8);
  lVar4 = FUN_00b89270();
  if (*(char *)(lVar4 + 0x2e) != '\0') {
    *(int *)(param_1 + 0x1b48) =
         (*(int *)(*(longlong *)(param_1 + 0x700) + 0x4a4) - *(int *)(param_1 + 0x1b48)) + -1;
  }
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    iVar3 = FUN_01c73210(auStack_58);
    if (iVar3 != -1) {
      if (local_20[0] == 0) {
        FUN_01c738a0(auStack_58,iVar3);
      }
      else {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_20[0]);
      }
      local_38 = 1;
      FUN_01c6ec30(param_1,iVar3,local_21,0);
    }
  }
  FUN_00414480(local_20);
  return;
}

