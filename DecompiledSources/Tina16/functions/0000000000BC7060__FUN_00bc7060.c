/* Ghidra address: 00bc7060 */
/* Ghidra symbol: FUN_00bc7060 */


int FUN_00bc7060(longlong param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((0x60 < param_2) && (param_2 < 0x67)) {
    param_2 = param_2 - 0x20;
  }
  if (((param_2 < 0x30) || (0x46 < param_2)) || ((0x39 < param_2 && (param_2 < 0x41)))) {
    (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x6c);
  }
  else {
    iVar1 = param_2 - 0x30;
    if (0x40 < param_2) {
      iVar1 = param_2 - 0x37;
    }
  }
  return iVar1;
}

