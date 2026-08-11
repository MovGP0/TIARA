/* Ghidra address: 00783c10 */
/* Ghidra symbol: FUN_00783c10 */


undefined8
FUN_00783c10(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5
            ,undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 *param_9,
            undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_9;
  uStack_40 = param_9[1];
  uStack_38 = param_9[2];
  uStack_30 = param_9[3];
  if (((((byte)(param_5 - 2U) < 2) || ((byte)(param_5 - 7U) < 5)) || ((byte)(param_5 - 0xfU) < 5))
     || ((byte)(param_5 - 0x17U) < 3)) {
    (**(code **)(*param_2 + 0x138))(param_2,local_58,2);
    uVar1 = FUN_00779040(param_2,param_3,local_58,param_6,param_7,param_8,&local_48,param_10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

