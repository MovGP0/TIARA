/* Ghidra address: 00af5480 */
/* Ghidra symbol: FUN_00af5480 */


void FUN_00af5480(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_21;
  undefined8 local_20;
  
  local_30 = auStack_58;
  cVar1 = FUN_00af2f30(param_1);
  if (cVar1 == '\0') {
    FUN_00afe640(param_1,1);
    FUN_00aa7510(param_1[0x116],param_2,param_3,&local_21);
    if (local_21 == '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x126) = 1;
      FUN_00742eb0(param_1[0x125],1);
    }
    FUN_00afe640(param_1,0);
  }
  else {
    if (param_3 == 0) {
      (**(code **)(*(longlong *)param_1[0x124] + 0x80))((longlong *)param_1[0x124],param_2,0);
    }
    else {
      local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      FUN_004b9ef0(local_20,param_3);
      (**(code **)(*(longlong *)param_1[0x124] + 0x80))((longlong *)param_1[0x124],param_2,local_20)
      ;
    }
    FUN_00742eb0(param_1[0x125],1);
  }
  return;
}

