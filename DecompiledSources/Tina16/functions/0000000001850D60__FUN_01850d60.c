/* Ghidra address: 01850d60 */
/* Ghidra symbol: FUN_01850d60 */


undefined8
FUN_01850d60(undefined8 param_1,char param_2,undefined8 param_3,int param_4,undefined1 param_5,
            undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_58 = param_6;
  FUN_01847460(local_res8,0,param_3,param_5);
  if (param_4 == -1) {
    local_1c = 0;
    do {
      local_58 = 0;
      local_50 = 0 < local_1c;
      local_48 = 0;
      uVar2 = FUN_01847a00(&PTR_FUN_01843af8,1,0,10);
      FUN_01847420(local_res8,uVar2);
      local_1c = local_1c + 1;
    } while (local_1c != 3);
  }
  else {
    local_1c = 0;
    if (-1 < param_4 + -1) {
      do {
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        uVar2 = FUN_01847a00(&PTR_FUN_01843af8,1,0,10);
        FUN_01847420(local_res8,uVar2);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

