/* Ghidra address: 004d46e0 */
/* Ghidra symbol: FUN_004d46e0 */


undefined8 FUN_004d46e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    cVar1 = FUN_00411110();
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x38))(*(undefined8 **)(param_1 + 0x38));
  }
  return uVar2;
}

