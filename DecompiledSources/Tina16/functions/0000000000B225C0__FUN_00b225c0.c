/* Ghidra address: 00b225c0 */
/* Ghidra symbol: FUN_00b225c0 */


void FUN_00b225c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_40 [20];
  undefined1 local_2c;
  undefined1 local_28;
  undefined2 local_24;
  undefined2 local_20;
  int local_1c;
  
  local_1c = FUN_00b22360(param_1);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    do {
      FUN_00b22330(param_1,local_40,local_1c);
      local_58 = param_5;
      cVar1 = FUN_00b21e10(local_40,param_2,param_3,param_4);
      if (cVar1 != '\0') {
        cVar1 = FUN_00b22480(auStack_78);
        if (param_8 == '\0') {
          if (cVar1 != '\0') {
            local_58 = CONCAT31(local_58._1_3_,local_2c);
            FUN_00b22230(param_1,local_20,local_24,local_28);
          }
        }
        else if (cVar1 == '\0') {
          FUN_00b22460(param_1,local_1c);
        }
        else {
          local_58 = CONCAT31(local_58._1_3_,local_28);
          local_50 = local_2c;
          FUN_00b22370(param_1,local_1c,local_20,local_24);
        }
      }
      local_1c = local_1c + -1;
    } while (local_1c != -1);
  }
  return;
}

