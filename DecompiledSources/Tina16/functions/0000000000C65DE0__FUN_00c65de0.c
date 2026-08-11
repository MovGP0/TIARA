/* Ghidra address: 00c65de0 */
/* Ghidra symbol: FUN_00c65de0 */


undefined8 FUN_00c65de0(undefined8 param_1,char param_2)

{
  undefined1 local_222 [522];
  
  FUN_00414480(param_1);
  if (param_2 == '\a') {
    thunk_FUN_0412858d(0,local_222,0,0xffffffff);
    FUN_00442b00(param_1,local_222);
  }
  else if (param_2 == '\t') {
    FUN_00414ad0(param_1,L"::{20D04FE0-3AEA-1069-A2D8-08002B30309D}");
  }
  else if (param_2 == '\r') {
    thunk_FUN_0412858d(0,local_222,5,0xffffffff);
    FUN_00442b00(param_1,local_222);
  }
  else if (param_2 == '\x0e') {
    thunk_FUN_0412858d(0,local_222,6,0xffffffff);
    FUN_00442b00(param_1,local_222);
  }
  else if (param_2 == '\f') {
    FUN_00414ad0(param_1,L"::{208D2C60-3AEA-1069-A2D7-08002B30309D}");
  }
  return param_1;
}

