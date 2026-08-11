/* Ghidra address: 004c1ad0 */
/* Ghidra symbol: FUN_004c1ad0 */


void FUN_004c1ad0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  local_50 = auStack_78;
  local_38 = (code *)*param_4;
  local_30 = param_4[1];
  (**(code **)*param_1)(param_1,param_2);
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  FUN_004bdfc0(param_1);
  local_48 = *param_2;
  uVar2 = FUN_004a03f0(&DAT_0047e548,1,local_48,1);
  param_1[0x21] = uVar2;
  while( true ) {
    cVar1 = FUN_004be290(param_1);
    if (cVar1 != '\0') break;
    FUN_004c1d40(param_1);
    local_40 = FUN_004bfcb0(param_1,0);
    if (local_38 != (code *)0x0) {
      (*local_38)(local_30);
    }
  }
  FUN_004be030(param_1,0);
  FUN_004be830(param_1);
  FUN_00410f20(param_1[0x21]);
  FUN_004be2c0(param_1);
  return;
}

