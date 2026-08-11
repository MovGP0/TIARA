/* Ghidra address: 00b2c5d0 */
/* Ghidra symbol: FUN_00b2c5d0 */


undefined1 FUN_00b2c5d0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_19 = 1;
  FUN_00415530(&local_10,*param_2,0);
  cVar1 = FUN_00b29d90(param_1,local_10,param_2);
  if (cVar1 == '\0') {
    FUN_00415530(&local_18,*param_2,0);
    cVar1 = FUN_00b29df0(param_1,local_18,param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_00b2a470(param_1,*param_2,param_2);
      if (cVar1 == '\0') {
        cVar1 = FUN_00b2a640(param_1,*param_2,param_2);
        if (cVar1 == '\0') {
          cVar1 = FUN_00b2a800(param_1,*param_2,param_2);
          if (cVar1 == '\0') {
            cVar1 = FUN_00b2aa00(param_1,*param_2,param_2);
            if (cVar1 == '\0') {
              cVar1 = FUN_00b2abb0(param_1,*param_2,param_2);
              if (cVar1 == '\0') {
                cVar1 = FUN_00b2ad60(param_1,*param_2,param_2);
                if (cVar1 == '\0') {
                  local_19 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00414590(&local_18,2);
  return local_19;
}

