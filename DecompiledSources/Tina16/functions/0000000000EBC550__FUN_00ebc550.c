/* Ghidra address: 00ebc550 */
/* Ghidra symbol: FUN_00ebc550 */


void FUN_00ebc550(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x28))(*(longlong **)(param_1 + 0x758));
  if (0 < iVar3) {
    cVar1 = FUN_00ea9650();
    if (cVar1 == '\a') {
      uVar2 = 1;
      goto LAB_00ebc57c;
    }
  }
  uVar2 = 0;
LAB_00ebc57c:
  *param_3 = uVar2;
  return;
}

