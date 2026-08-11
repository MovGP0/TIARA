/* Ghidra address: 0160e240 */
/* Ghidra symbol: FUN_0160e240 */


undefined1 FUN_0160e240(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_21 = 0;
  local_20 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x28))(*(longlong **)(param_1 + 0xf0));
  if (iVar1 == 2) {
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
                (*(longlong **)(param_1 + 0xf0),&local_48,0);
      FUN_0043e130(&local_30,local_48);
    }
    if (param_2 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
                (*(longlong **)(param_1 + 0xf0),&local_50,1);
      FUN_0043e130(&local_30,local_50);
    }
    local_20 = (longlong *)FUN_01b21480(local_30);
    iVar1 = (**(code **)(*local_20 + 0xb0))(local_20,local_res18[0]);
    local_21 = -1 < iVar1;
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res18);
  return local_21;
}

