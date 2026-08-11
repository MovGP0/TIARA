/* Ghidra address: 00971cd0 */
/* Ghidra symbol: FUN_00971cd0 */


undefined8 FUN_00971cd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_89 [16];
  undefined1 local_79 [16];
  undefined1 local_69 [16];
  char local_59 [16];
  undefined1 local_49 [16];
  undefined1 local_39 [16];
  char local_29 [16];
  char local_19;
  
  uVar1 = 0;
  FUN_0059b830(param_2 + 8,5,1,&local_19);
  if (local_19 == '\x02') {
    do {
      FUN_0059b830(param_2 + 8,5,0,local_39);
      FUN_0059b830(param_2 + 8,5,1,local_29);
    } while (local_29[0] != '\x06');
    FUN_0059b830(param_2 + 8,5,0,local_49);
    FUN_0059b830(param_2 + 8,5,1,local_59);
    if (local_59[0] == '\0') {
      local_79[0] = 1;
      FUN_0059b9e0(param_2 + 8,local_79);
      uVar1 = 0;
    }
    else if (local_59[0] == '\x06') {
      local_69[0] = 5;
      FUN_0059b9e0(param_2 + 8,local_69);
    }
    else if (local_59[0] == '\r') {
      local_89[0] = 0xe;
      FUN_0059b9e0(param_2 + 8,local_89);
    }
    else {
      uVar1 = 0x87;
    }
  }
  return uVar1;
}

