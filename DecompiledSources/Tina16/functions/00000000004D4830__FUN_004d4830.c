/* Ghidra address: 004d4830 */
/* Ghidra symbol: FUN_004d4830 */


char FUN_004d4830(undefined8 param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (param_2 != 0) {
    uVar2 = FUN_0041b800(&local_10);
    cVar1 = FUN_00452340(param_2,&DAT_004d48f8,uVar2);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
      goto LAB_004d487c;
    }
  }
  cVar1 = '\0';
LAB_004d487c:
  if (cVar1 != '\0') {
    if (param_3 == '\0') {
      uVar2 = (**(code **)(*local_10 + 0x18))(local_10);
      FUN_004d26c0(uVar2,param_1);
    }
    else {
      uVar2 = (**(code **)(*local_10 + 0x18))(local_10);
      FUN_004d2d90(uVar2,param_1);
    }
  }
  FUN_0041b800(&local_10);
  return cVar1;
}

