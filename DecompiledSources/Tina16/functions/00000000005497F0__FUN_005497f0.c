/* Ghidra address: 005497f0 */
/* Ghidra symbol: FUN_005497f0 */


undefined8 FUN_005497f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)param_1[7] + 0x70))((longlong *)param_1[7],param_2);
  }
  else {
    FUN_004192a0(param_2,*(undefined8 *)(param_1[7] + 0x48),&DAT_00531510);
  }
  return param_2;
}

