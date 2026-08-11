/* Ghidra address: 00618380 */
/* Ghidra symbol: FUN_00618380 */


void FUN_00618380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_2c;
  
  local_2c = param_1;
  if (DAT_02012090 == (code *)0x0) {
    FUN_006182f0(auStack_68);
  }
  local_48 = param_5;
  (*DAT_02012090)(local_2c,param_2,param_3,param_4);
  return;
}

