/* Ghidra address: 00553690 */
/* Ghidra symbol: FUN_00553690 */


undefined8 FUN_00553690(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_0053c6d0(**(undefined1 **)(param_1 + 8),0,2);
  if (cVar1 == '\0') {
    lVar3 = FUN_00552420(*(undefined8 *)(param_1 + 0x38));
    if (*(longlong *)(lVar3 + 2) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else if (cVar1 == '\x01') {
    lVar3 = FUN_00552420(*(undefined8 *)(param_1 + 0x38));
    if (*(longlong *)(lVar3 + 2) == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 5;
    }
  }
  else if (cVar1 == '\x02') {
    uVar2 = 2;
  }
  else if (cVar1 == '\x03') {
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

