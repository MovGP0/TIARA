/* Ghidra address: 019d01b0 */
/* Ghidra symbol: FUN_019d01b0 */


void FUN_019d01b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_20[0] = *param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_005fcd80(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70),L"Arial");
  FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70),10);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70),0);
  FUN_019cffb0(param_1,local_20,&local_28);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x120))
            (*(longlong **)(param_1 + 0x30),local_28,local_24,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

