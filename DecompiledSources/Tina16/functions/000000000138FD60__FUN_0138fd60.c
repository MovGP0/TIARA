/* Ghidra address: 0138fd60 */
/* Ghidra symbol: FUN_0138fd60 */


void FUN_0138fd60(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  (**(code **)(**(longlong **)(param_2 + 0x5c0) + 0x90))(*(longlong **)(param_2 + 0x5c0));
  FUN_0199cde0(param_1,FUN_0138ea30,param_2);
  cVar1 = FUN_01b07dd0(param_2);
  if (cVar1 != '\0') {
    lVar2 = FUN_014cdd20(*(undefined8 *)(param_2 + 0xe8));
    if ((lVar2 != 0) && (*(char *)(param_2 + 0x33a) != '\0')) {
      FUN_0199dc50(param_1,param_2,FUN_0138faf0,1);
    }
  }
  return;
}

