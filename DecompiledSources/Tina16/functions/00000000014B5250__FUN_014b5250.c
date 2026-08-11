/* Ghidra address: 014b5250 */
/* Ghidra symbol: FUN_014b5250 */


void FUN_014b5250(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_014b4510(param_1);
  if (cVar1 != '\0') {
    FUN_00c0fae0(*(undefined8 *)(param_1 + 0x860));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x860),1);
    FUN_019953b0(*(undefined8 *)(param_1 + 0x8b0));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x828),0);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x278))(*(longlong **)(param_1 + 0x838));
  }
  return;
}

