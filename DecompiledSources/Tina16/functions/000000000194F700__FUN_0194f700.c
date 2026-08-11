/* Ghidra address: 0194f700 */
/* Ghidra symbol: FUN_0194f700 */


void FUN_0194f700(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01918c28);
  if (cVar1 != '\0') {
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_48 = 0;
    (**(code **)(*param_2 + 0x1c8))(param_2,local_20,0,1);
    FUN_004b6dc0(local_20,0);
    (**(code **)(*param_1 + 0x1c0))(param_1,local_20);
    FUN_00410f20(local_20);
  }
  return;
}

