/* Ghidra address: 009590d0 */
/* Ghidra symbol: FUN_009590d0 */


void FUN_009590d0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined1 *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *param_6 = 0;
  lVar1 = FUN_00958690(param_1);
  if (lVar1 == 0) {
    FUN_00414520(param_6);
    *param_7 = 0x9a;
  }
  else {
    FUN_00414be0(local_20,param_4);
    FUN_008fdec0(param_3,param_5,&local_28);
    if (param_2 == '\0') {
      plVar2 = (longlong *)FUN_00958690(param_1);
      uVar3 = FUN_00414520(param_6);
      (**(code **)(*plVar2 + 0x100))
                (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),local_20,&local_28,uVar3,
                 param_7);
    }
    else {
      plVar2 = (longlong *)FUN_00958690(param_1);
      uVar3 = FUN_00414520(param_6);
      (**(code **)(*plVar2 + 0x100))
                (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_20,&local_28,uVar3,
                 param_7);
    }
  }
  FUN_004145c0(&local_28,2);
  return;
}

