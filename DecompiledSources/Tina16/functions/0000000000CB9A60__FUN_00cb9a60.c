/* Ghidra address: 00cb9a60 */
/* Ghidra symbol: FUN_00cb9a60 */


undefined8 FUN_00cb9a60(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined4 local_c;
  
  local_20 = auStack_48;
  local_18 = 0;
  local_c = thunk_FUN_04118f82(1);
  cVar1 = FUN_00440a20(param_2,1);
  if (cVar1 != '\0') {
    if (((*(longlong *)PTR_PTR_02003ab8 != 0) && (cVar1 = FUN_00cb0ad0(param_1), cVar1 == '\0')) &&
       (param_3 != '\0')) {
      local_18 = (**(code **)PTR_PTR_02003ab8)
                           (*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x20),param_2);
      FUN_00cb9b20(0,local_20);
      return local_18;
    }
    local_18 = FUN_00cb0940(param_1,param_2,param_3);
  }
  thunk_FUN_04118f82(local_c);
  return local_18;
}

