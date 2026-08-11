/* Ghidra address: 0108c4a0 */
/* Ghidra symbol: FUN_0108c4a0 */


undefined4 FUN_0108c4a0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  undefined1 local_9;
  
  local_20[0] = 0;
  if (param_2 == 0) {
    uVar1 = FUN_010b3cd0(*(undefined8 *)(param_1 + 0xac8));
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0xaa0);
  }
  else {
    FUN_0043e1a0(local_20,*(undefined8 *)(param_1 + 0xb38));
    FUN_01055a50(*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + 0x48),local_20[0],param_1 + 0x4d18
                 ,&local_9,*(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x108));
    uVar1 = **(undefined4 **)(param_1 + 0x4d18);
  }
  FUN_00414480(local_20);
  return uVar1;
}

