/* Ghidra address: 0176a090 */
/* Ghidra symbol: FUN_0176a090 */


undefined8 FUN_0176a090(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_48 [48];
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_00414480(param_2);
  }
  else {
    uVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x38),0);
    FUN_00c3d330(uVar1,local_48,param_3);
    FUN_004169a0(param_2,local_48);
  }
  return param_2;
}

