/* Ghidra address: 015c45a0 */
/* Ghidra symbol: FUN_015c45a0 */


undefined1
FUN_015c45a0(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,int param_5
            )

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_40 = auStack_68;
  local_21 = 0;
  local_c = 10000;
  local_20 = FUN_004b6da0(param_2);
  local_18 = FUN_00409570((longlong)local_c);
  local_30 = *param_3;
  do {
    lVar2 = (**(code **)*param_2)(param_2);
    if (lVar2 <= local_30) {
code_r0x015c4654:
      FUN_004095f0(local_18);
      FUN_004b6dc0(param_2,local_20);
      return local_21;
    }
    cVar1 = FUN_015c4470(auStack_68,local_30,param_3);
    if (cVar1 != '\0') {
      local_21 = 1;
      goto code_r0x015c4654;
    }
    local_30 = (local_30 + local_c) - (longlong)param_5;
  } while( true );
}

