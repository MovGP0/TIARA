/* Ghidra address: 005ec410 */
/* Ghidra symbol: FUN_005ec410 */


void FUN_005ec410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_20;
  undefined1 local_15;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_58;
  cVar1 = FUN_005ebec0(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(param_1,param_3);
    if (cVar1 == '\0') {
      local_14 = FUN_005eb5d0(param_1,param_2);
      if (-1 < local_14) {
        local_10 = FUN_00409570((longlong)local_14);
        local_38 = &local_15;
        local_14 = FUN_005ebde0(param_1,param_2,local_10,local_14);
        FUN_005eaff0(param_1,param_2);
        local_38 = (undefined1 *)CONCAT71(local_38._1_7_,local_15);
        FUN_005ebd40(param_1,param_3,local_10,local_14);
        FUN_004095f0(local_10);
      }
    }
  }
  return;
}

