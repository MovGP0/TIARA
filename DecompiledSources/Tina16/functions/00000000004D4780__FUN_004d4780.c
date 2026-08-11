/* Ghidra address: 004d4780 */
/* Ghidra symbol: FUN_004d4780 */


undefined1 FUN_004d4780(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (param_2 != 0) {
    uVar3 = FUN_0041b800(&local_10);
    cVar1 = FUN_00452340(param_2,&DAT_004d4818,uVar3);
    if (cVar1 != '\0') {
      lVar4 = (**(code **)(*local_10 + 0x18))(local_10);
      if (lVar4 == param_1) {
        uVar2 = 1;
        goto LAB_004d47df;
      }
    }
  }
  uVar2 = 0;
LAB_004d47df:
  FUN_0041b800(&local_10);
  return uVar2;
}

