/* Ghidra address: 0110e870 */
/* Ghidra symbol: FUN_0110e870 */


undefined8 FUN_0110e870(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_1c;
  
  uVar1 = 0;
  uVar2 = FUN_010bfea0(*param_2,0x412e848000000000,0xc12e848000000000,&local_1c);
  *param_2 = uVar2;
  if (local_1c != 0) {
    uVar1 = 0x132;
  }
  return uVar1;
}

