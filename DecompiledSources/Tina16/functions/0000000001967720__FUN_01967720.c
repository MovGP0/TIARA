/* Ghidra address: 01967720 */
/* Ghidra symbol: FUN_01967720 */


void FUN_01967720(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_28 = (undefined8 *)0x0;
  FUN_0195c680(param_1);
  if (param_1[0x56] == 0) {
    cVar1 = FUN_0195b980(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x36] + 800))
                        ((longlong *)param_1[0x36],param_1[0x35]);
      if (cVar1 != '\0') {
        local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
        (**(code **)(*(longlong *)param_1[0x36] + 0x348))
                  ((longlong *)param_1[0x36],param_1[0x35],local_20);
        (**(code **)(*param_1 + 800))(param_1,local_20,1);
        FUN_00410f20(local_20);
      }
    }
  }
  else {
    FUN_00414b50(&local_28,param_1[0x56]);
    iVar2 = FUN_004170c0(&LAB_019678c4,local_28,1);
    if (iVar2 != 0) {
      FUN_0195c1f0(param_1,&local_28);
    }
    cVar1 = FUN_00440a20(local_28,1);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)param_1[0x59] + 0x10))((longlong *)param_1[0x59],0);
    }
    else {
      FUN_006042a0(param_1[0x59],local_28);
    }
  }
  FUN_00414480(&local_28);
  return;
}

