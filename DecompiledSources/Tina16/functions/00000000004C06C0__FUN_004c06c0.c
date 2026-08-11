/* Ghidra address: 004c06c0 */
/* Ghidra symbol: FUN_004c06c0 */


int FUN_004c06c0(undefined8 param_1)

{
  char cVar1;
  short local_20;
  char local_1d;
  int local_1c [3];
  
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 == '\x02') {
    FUN_004bea90(param_1,&local_1d,1);
    local_1c[0] = (int)local_1d;
  }
  else if (cVar1 == '\x03') {
    FUN_004bea90(param_1,&local_20,2);
    local_1c[0] = (int)local_20;
  }
  else if (cVar1 == '\x04') {
    FUN_004bea90(param_1,local_1c,4);
  }
  else {
    FUN_004bdee0();
  }
  return local_1c[0];
}

