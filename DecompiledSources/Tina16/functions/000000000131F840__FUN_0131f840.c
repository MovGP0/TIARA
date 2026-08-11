/* Ghidra address: 0131f840 */
/* Ghidra symbol: FUN_0131f840 */


void FUN_0131f840(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  (**(code **)(**(longlong **)(param_2 + 0x5c0) + 0x90))(*(longlong **)(param_2 + 0x5c0));
  FUN_0199cde0(param_1,FUN_0131e140,param_2);
  cVar1 = FUN_01b07dd0(param_2);
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x33a) != '\0') {
      FUN_0199dc50(param_1,param_2,FUN_0131f600,1);
    }
    uVar2 = FUN_014cdce0(*(undefined8 *)(param_2 + 0xe8));
    uVar3 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8));
    FUN_015fe220(param_1,uVar2,uVar3);
  }
  return;
}

