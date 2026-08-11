/* Ghidra address: 0184bed0 */
/* Ghidra symbol: FUN_0184bed0 */


void FUN_0184bed0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0xa0),&PTR_FUN_01843fa0);
  if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_2 + 0xa0) + 0x88) != '\0')) {
    uVar2 = FUN_0184b910(*(undefined8 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0x98));
    FUN_01848710(*(undefined8 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0x9c),0,uVar2);
  }
  return;
}

