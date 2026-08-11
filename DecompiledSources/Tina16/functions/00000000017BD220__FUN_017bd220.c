/* Ghidra address: 017bd220 */
/* Ghidra symbol: FUN_017bd220 */


undefined8 FUN_017bd220(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (*(short *)(param_1 + 0x2d8) < 0) {
    uVar1 = (**(code **)(*param_2 + 0xd0))(param_2,0x13);
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0xd0))(param_2,0x1a);
  }
  return uVar1;
}

