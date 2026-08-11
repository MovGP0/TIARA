/* Ghidra address: 005d0320 */
/* Ghidra symbol: FUN_005d0320 */


undefined8 FUN_005d0320(undefined8 param_1,char param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = 0;
  FUN_005bbdb0(param_1,&local_40,(longlong)&local_40 + 2,(longlong)&local_40 + 6,&local_38,
               (longlong)&local_38 + 2,(longlong)&local_38 + 4,(longlong)&local_38 + 6);
  if (param_2 == '\0') {
    local_50 = local_40;
    uStack_48 = local_38;
  }
  else {
    thunk_FUN_0415799a(0,&local_40,&local_50);
  }
  thunk_FUN_0412bf89(&local_50,&local_30);
  return CONCAT44(uStack_2c,local_30);
}

