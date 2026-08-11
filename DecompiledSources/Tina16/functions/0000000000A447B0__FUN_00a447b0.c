/* Ghidra address: 00a447b0 */
/* Ghidra symbol: FUN_00a447b0 */


undefined8 FUN_00a447b0(longlong *param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  
  local_30 = auStack_58;
  local_28 = 0;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    FUN_0060be30(param_1,param_3);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*param_1 + 0x80))(param_1,1);
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar2 = FUN_0060c340(param_1);
  FUN_0060b650(local_28,uVar2);
  (**(code **)(*param_1 + 0x80))(param_1,0);
  return local_28;
}

