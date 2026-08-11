/* Ghidra address: 01b99090 */
/* Ghidra symbol: FUN_01b99090 */


void FUN_01b99090(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  cVar1 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x18f8) + 0xa8))
                    (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x18f8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x18f8),&local_38);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_38);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_40);
    lVar2 = FUN_017708f0(local_40);
    local_20 = (longlong *)(**(code **)(lVar2 + 0x20))(lVar2,1,0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_48);
    (**(code **)(*local_20 + 0x28))
              (local_20,local_48,0,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    FUN_0043ea00(&local_50,local_20[7]);
    if (local_50 != 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_20[7]);
    }
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    FUN_01b96ae0(param_1,uVar3,1);
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  return;
}

