/* Ghidra address: 006e73f0 */
/* Ghidra symbol: FUN_006e73f0 */


void FUN_006e73f0(undefined8 param_1,char param_2)

{
  undefined1 local_8c [25];
  undefined1 local_73;
  
  FUN_006e6d80(param_1,local_8c);
  if (param_2 == '\x01') {
    local_73 = 2;
  }
  else if (param_2 == '\x02') {
    local_73 = 1;
  }
  else {
    local_73 = 0;
  }
  FUN_006e6f00(param_1,local_8c);
  return;
}

