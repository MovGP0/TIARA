/* Ghidra address: 006899a0 */
/* Ghidra symbol: FUN_006899a0 */


void FUN_006899a0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (param_3 == '\0') {
    *(undefined1 *)(param_1 + 0x499) = 0;
  }
  else {
    uVar2 = FUN_0041b800(&local_10);
    cVar1 = FUN_00452340(param_2,&DAT_00689a38,uVar2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*local_10 + 0x70))(local_10);
      *(bool *)(param_1 + 0x499) = cVar1 == '\0';
    }
  }
  FUN_0041b800(&local_10);
  return;
}

