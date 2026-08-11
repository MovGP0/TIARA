/* Ghidra address: 00784750 */
/* Ghidra symbol: FUN_00784750 */


ulonglong FUN_00784750(void)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  char in_R9B;
  char in_stack_00000028;
  undefined4 *in_stack_00000030;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (in_R9B == '\x02') {
    uVar2 = 0;
  }
  else if (in_R9B == '\x03') {
    if (in_stack_00000028 == '\x02') {
      uVar1 = FUN_005fbf20(0xff000014);
      *in_stack_00000030 = uVar1;
    }
    else if (in_stack_00000028 == '\x0e') {
      uVar1 = FUN_005fbf20(0xff000010);
      *in_stack_00000030 = uVar1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

