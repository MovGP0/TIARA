/* Ghidra address: 005ecc40 */
/* Ghidra symbol: FUN_005ecc40 */


void FUN_005ecc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  cVar1 = FUN_005ec370(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ec370(param_1,param_3);
    if (cVar1 == '\0') {
      local_18 = FUN_005ebee0(param_1,param_2);
      if (local_18 != 0) {
        FUN_005ea710(param_1,param_3);
        local_10 = FUN_005ebee0(param_1,param_3);
        if (local_10 != 0) {
          FUN_005ec670(auStack_48,local_18,local_10);
          FUN_005ec890(auStack_48,local_18,local_10);
          if (param_4 != '\0') {
            FUN_005eacf0(param_1,param_2);
          }
          thunk_FUN_0418fb4b(local_10);
        }
        thunk_FUN_0418fb4b(local_18);
      }
    }
  }
  return;
}

