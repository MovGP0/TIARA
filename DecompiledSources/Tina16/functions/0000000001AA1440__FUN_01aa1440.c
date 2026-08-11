/* Ghidra address: 01aa1440 */
/* Ghidra symbol: FUN_01aa1440 */


void FUN_01aa1440(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  ushort local_26;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20 [8];
  
  FUN_01d3d920(param_1,4,0,&local_26);
  local_21 = (**(code **)(*param_1 + 0x2d0))(param_1,local_26,local_20);
  puVar1 = (undefined8 *)FUN_01cfde70(param_1,local_26 + 1,7,&local_21,&local_22,&local_23);
  *(undefined8 *)(param_3 + 0x30) = *puVar1;
  puVar1 = (undefined8 *)FUN_01cfde70(param_1,local_26 + 1,8,&local_21,&local_22,&local_23);
  *(undefined8 *)(param_3 + 0x38) = *puVar1;
  return;
}

