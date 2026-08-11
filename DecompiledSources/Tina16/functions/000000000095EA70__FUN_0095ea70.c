/* Ghidra address: 0095ea70 */
/* Ghidra symbol: FUN_0095ea70 */


void FUN_0095ea70(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_00414b90(param_1 + 0x50,param_2);
  *(undefined1 *)(param_1 + 0x60) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))(*(longlong **)(param_1 + 0x30));
  local_20 = (longlong *)FUN_0096d760(&PTR_FUN_00919020,1,param_2);
  while ((char)local_20[4] != '\x01') {
    (**(code **)(*local_20 + 8))(local_20);
    if ((char)local_20[4] == '\x02') {
      (**(code **)*local_20)(local_20,&local_38);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x68))(*(longlong **)(param_1 + 0x30),local_38)
      ;
    }
  }
  FUN_00410f20(local_20);
  FUN_00414520(&local_38);
  return;
}

