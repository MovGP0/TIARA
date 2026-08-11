/* Ghidra address: 0110e9f0 */
/* Ghidra symbol: FUN_0110e9f0 */


undefined8 FUN_0110e9f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_1c;
  
  uVar1 = 0;
  uVar2 = FUN_010bfea0(*param_2,0x408f400000000000,0x3d719799812dea11,&local_1c);
  *param_2 = uVar2;
  if (local_1c != 0) {
    uVar1 = 0x132;
  }
  return uVar1;
}

