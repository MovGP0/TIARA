/* Ghidra address: 01c18ce0 */
/* Ghidra symbol: FUN_01c18ce0 */


void FUN_01c18ce0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779360(uVar3);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1f8))(param_1,&local_38,local_res18,local_res20);
      goto code_r0x01c18d90;
    }
  }
  FUN_01c05900(param_1,&local_38,local_res18[0],local_res20,param_5,param_6);
code_r0x01c18d90:
  FUN_00414480(&local_res20);
  return;
}

