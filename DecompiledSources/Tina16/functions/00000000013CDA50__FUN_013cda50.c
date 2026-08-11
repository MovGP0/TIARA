/* Ghidra address: 013cda50 */
/* Ghidra symbol: FUN_013cda50 */


void FUN_013cda50(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x931) != '\0') && (*(char *)(param_1 + 0x932) == '\0')) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    FUN_013cd5c0(param_1,cVar1 == '\0');
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    *(char *)(*(longlong *)(param_1 + 0x900) + 0x309) = cVar1;
    if (cVar1 == '\0') {
      FUN_0074b490(*(undefined8 *)(param_1 + 0x870),0);
    }
    *(bool *)(*(longlong *)(param_1 + 0x900) + 0x30a) =
         *(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) == 1;
  }
  return;
}

