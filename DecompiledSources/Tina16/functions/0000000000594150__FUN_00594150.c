/* Ghidra address: 00594150 */
/* Ghidra symbol: FUN_00594150 */


undefined4 FUN_00594150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  FUN_00461840(&local_48,param_2);
  FUN_00461840(&local_60,param_3);
  cVar1 = FUN_0046c5b0(&local_48,&local_60);
  if (cVar1 == '\0') {
    local_2c = 0;
  }
  else if (cVar1 == '\x01') {
    local_2c = 0xffffffff;
  }
  else if (cVar1 == '\x02') {
    local_2c = 1;
  }
  else if (cVar1 == '\x03') {
    cVar1 = FUN_0046c3b0(&local_48);
    if (cVar1 == '\0') {
      cVar1 = FUN_0046c3d0(&local_48);
      if (cVar1 == '\0') {
        local_2c = 0xffffffff;
        goto LAB_005942a7;
      }
    }
    local_2c = 1;
  }
LAB_005942a7:
  FUN_00417840(&local_60,&DAT_004013d8,2);
  FUN_00414560(&local_28,2);
  return local_2c;
}

