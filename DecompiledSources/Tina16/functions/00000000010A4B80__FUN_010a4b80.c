/* Ghidra address: 010a4b80 */
/* Ghidra symbol: FUN_010a4b80 */


void FUN_010a4b80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0xa2e) != '\0') {
    FUN_0163cf70(*(undefined8 *)(*(longlong *)(param_1 + 0x1a70) + 0x78),local_20);
    cVar2 = FUN_00440a20(local_20[0],1);
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x938) + 0x510);
      (**(code **)(*plVar1 + 0xd8))(plVar1,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

