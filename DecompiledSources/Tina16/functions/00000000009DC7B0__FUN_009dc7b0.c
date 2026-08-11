/* Ghidra address: 009dc7b0 */
/* Ghidra symbol: FUN_009dc7b0 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_009dc7b0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_58 = auStack_88;
  local_60 = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uStack_28 = param_2[2];
  FUN_0046bd60(&local_38);
  local_40 = &local_38;
  if ((short)local_38 == 8) {
    FUN_00467e90(&local_60,&local_38);
    local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_60,0xff00);
    uVar1 = FUN_009dc930(param_1,local_20);
    FUN_0041d630(uVar1);
    FUN_00410f20(local_20);
  }
  else {
    FUN_0086ccd0(L"save(object)",L"ADOM XML v4");
  }
  local_50 = 0;
  FUN_00414480(&local_60);
  FUN_00460ba0(&local_38);
  return local_50;
}

