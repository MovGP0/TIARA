/* Ghidra address: 004b4820 */
/* Ghidra symbol: FUN_004b4820 */


void FUN_004b4820(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_004bf510(param_2);
  FUN_004b3260(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  while( true ) {
    cVar1 = FUN_004be290(param_2);
    if (cVar1 != '\0') break;
    FUN_004c1ed0(param_2,&local_28);
    (**(code **)(*param_1 + 0x78))(param_1,local_28);
  }
  FUN_004b3390(param_1);
  FUN_004bf520(param_2);
  FUN_00414480(&local_28);
  return;
}

