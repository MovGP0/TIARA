/* Ghidra address: 0074aca0 */
/* Ghidra symbol: FUN_0074aca0 */


void FUN_0074aca0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(char *)(param_1 + 0x4a0) == '\0') {
    *(undefined1 *)(param_1 + 0x4a0) = 1;
    if ((*(short *)(param_2 + 10) == 0) || (*(short *)(param_2 + 10) == 5)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x270))(*(longlong **)(param_1 + 0x78))
      ;
      if (cVar1 != '\0') {
        FUN_0068a680(param_1,param_2);
      }
    }
    *(undefined1 *)(param_1 + 0x4a0) = 0;
  }
  return;
}

