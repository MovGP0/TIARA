/* Ghidra address: 00978370 */
/* Ghidra symbol: FUN_00978370 */


void FUN_00978370(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    if (param_4 != '\0') {
      FUN_00414be0(local_20,&DAT_0097843c);
    }
    local_38 = local_20[0];
    local_30 = &LAB_00978444;
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,&local_38,1,0);
    *(undefined1 *)((longlong)param_1 + 0x79) = 0;
    FUN_009780f0(param_1,5,param_3);
  }
  FUN_00414520(local_20);
  return;
}

