/* Ghidra address: 01b0d930 */
/* Ghidra symbol: FUN_01b0d930 */


void FUN_01b0d930(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,char param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar3 = (longlong)param_2;
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(double *)(lVar1 + 0x698 + lVar3 * 8) != *(double *)(PTR_DAT_02001120 + lVar3 * 8 + 0xc0)) {
    if (param_6 == '\0') {
      FUN_00b8fd60(&local_18,*(undefined8 *)(lVar1 + 0x698 + lVar3 * 8),
                   *(undefined1 *)(param_1 + 0x70),0,1);
      FUN_00416cd0(param_1 + 0x48,4,*(undefined8 *)(param_1 + 0x48),local_res18[0],local_18,
                   &DAT_01b0dbac);
    }
    else {
      uVar2 = FUN_0040c770(*(undefined8 *)(lVar1 + 0x698 + (longlong)param_2 * 8));
      FUN_0043f780(&local_10,uVar2);
      FUN_00416cd0(param_1 + 0x48,4,*(undefined8 *)(param_1 + 0x48),local_res18[0],local_10,
                   &DAT_01b0dbac);
    }
    if ((*(int *)(param_1 + 0x44) % 5 == 0) && (*(int *)(param_1 + 0x80) == 0)) {
      FUN_00416ba0(&local_20,L"Analysis Options: ",*(undefined8 *)(param_1 + 0x48));
      uVar2 = FUN_0040f200(*(undefined8 *)(param_1 + 0x68),local_20);
      FUN_0040f590(uVar2);
      FUN_00409900();
      FUN_00b04800();
      FUN_00414480(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else if ((*(int *)(param_1 + 0x44) % 1 == 0) &&
            ((*(int *)(param_1 + 0x80) == 1 && (*(longlong *)(param_1 + 0x78) != 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x78))
                (*(longlong **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x48));
      FUN_00b04800();
      FUN_00414480(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res18);
  return;
}

