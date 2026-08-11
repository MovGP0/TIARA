/* Ghidra address: 00af55e0 */
/* Ghidra symbol: FUN_00af55e0 */


void FUN_00af55e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  char *local_48;
  undefined1 *local_30;
  char local_19 [9];
  
  local_30 = auStack_78;
  cVar1 = FUN_00af2f30(param_1);
  if (cVar1 == '\0') {
    FUN_00afe640(param_1,1);
    local_58 = CONCAT31(local_58._1_3_,param_4);
    local_50 = param_6;
    local_48 = local_19;
    FUN_00aa7720(param_1[0x116],param_2,param_3,param_5);
    if (local_19[0] == '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x126) = 1;
      FUN_00742eb0(param_1[0x125],1);
    }
    FUN_00afe640(param_1,0);
  }
  else {
    local_58 = param_5;
    local_50 = 0;
    uVar2 = FUN_00a49380(&DAT_00a43080,1,param_3,param_4);
    (**(code **)(*(longlong *)param_1[0x124] + 0x80))((longlong *)param_1[0x124],param_2,uVar2);
    FUN_00742eb0(param_1[0x125],1);
  }
  return;
}

