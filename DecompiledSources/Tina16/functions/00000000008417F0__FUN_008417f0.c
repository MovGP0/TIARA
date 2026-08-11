/* Ghidra address: 008417f0 */
/* Ghidra symbol: FUN_008417f0 */


undefined8 FUN_008417f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar3)(param_1);
  if (cVar1 == '\0') {
    local_30 = FUN_00841710(auStack_58,param_4,param_2);
  }
  else {
    local_30 = FUN_008417b0(auStack_58,param_4,param_2);
  }
  uVar2 = FUN_00841710(auStack_58,param_4 + 0x38,param_3);
  return CONCAT44(uVar2,local_30);
}

