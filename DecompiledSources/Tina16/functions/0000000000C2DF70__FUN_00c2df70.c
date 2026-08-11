/* Ghidra address: 00c2df70 */
/* Ghidra symbol: FUN_00c2df70 */


void FUN_00c2df70(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  cVar1 = FUN_004113d0(param_2,&LAB_00c13930);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*param_2 + 0x28))(param_2,local_20);
    (**(code **)(*local_20 + 0x48))(local_20,0,0);
    (**(code **)(*param_1 + 0x30))(param_1,local_20);
    FUN_00410f20(local_20);
  }
  return;
}

