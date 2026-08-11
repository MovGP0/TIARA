/* Ghidra address: 01434da0 */
/* Ghidra symbol: FUN_01434da0 */


undefined8 FUN_01434da0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_01d01970(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d04d40(param_1);
    if ((cVar1 == '\0') || ((char)param_1[0x34] != '\x02')) {
      uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      cVar1 = FUN_01d3d620(uVar2);
      if (cVar1 == '\0') {
        uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
        cVar1 = FUN_01d42330(uVar2);
        if (cVar1 == '\0') {
          uVar3 = 4;
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

