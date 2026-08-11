/* Ghidra address: 00705d00 */
/* Ghidra symbol: FUN_00705d00 */


void FUN_00705d00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x538) != 0)) {
    uVar2 = FUN_0041b800(&local_10);
    cVar1 = FUN_00452340(*(undefined8 *)(param_1 + 0x538),&DAT_00705e88,uVar2);
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))
                (*(longlong **)(param_1 + 0x538),-(uint)((*(byte *)(param_1 + 0x540) & 1) != 0));
    }
    else if (*(char *)(param_1 + 0x540) == '\0') {
      (**(code **)(*local_10 + 0x28))(local_10,0);
    }
    else {
      bVar3 = (*(byte *)(param_1 + 0x540) & 1) != 0;
      if ((*(byte *)(param_1 + 0x540) & 2) != 0) {
        bVar3 = bVar3 | 2;
      }
      if ((*(byte *)(param_1 + 0x540) & 4) != 0) {
        bVar3 = bVar3 | 4;
      }
      if ((*(byte *)(param_1 + 0x540) & 8) != 0) {
        bVar3 = bVar3 | 8;
      }
      if ((*(byte *)(param_1 + 0x540) & 0x10) != 0) {
        bVar3 = bVar3 | 0x10;
      }
      if ((*(byte *)(param_1 + 0x540) & 0x20) != 0) {
        bVar3 = bVar3 | 0x20;
      }
      if ((*(byte *)(param_1 + 0x540) & 0x40) != 0) {
        bVar3 = bVar3 | 0x40;
      }
      (**(code **)(*local_10 + 0x28))(local_10,bVar3);
    }
  }
  FUN_0041b800(&local_10);
  return;
}

