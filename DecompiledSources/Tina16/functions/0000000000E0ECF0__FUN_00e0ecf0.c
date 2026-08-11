/* Ghidra address: 00e0ecf0 */
/* Ghidra symbol: FUN_00e0ecf0 */


undefined8 FUN_00e0ecf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_21;
  int local_20;
  int local_1c [3];
  
  FUN_00e0eab0(param_1,local_1c);
  FUN_00e0e8e0(param_1,&local_20,&local_21);
  if ((local_20 == 0) && ((local_1c[0] == 1 || (local_1c[0] == 2)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

