/* Ghidra address: 01ade740 */
/* Ghidra symbol: FUN_01ade740 */


longlong FUN_01ade740(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar3 = FUN_01ccd700(&DAT_01ccbf00,1);
  *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(param_1 + 0x290);
  *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(param_1 + 600);
  FUN_00416ba0(local_20,local_res10[0],L"Orientation");
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                    (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),local_20[0],0)
  ;
  *(undefined1 *)(lVar3 + 0xf0) = uVar1;
  FUN_00416ba0(&local_28,local_res10[0],L"Scale");
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x20))
                    (*(longlong **)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x248),local_28,0);
  *(undefined1 *)(lVar3 + 0x70) = uVar1;
  FUN_00416ba0(&local_38,local_res10[0],L"Caption");
  (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))
            (*(longlong **)(param_1 + 0x250),&local_30,*(undefined8 *)(param_1 + 0x248),local_38,
             L"Axis");
  FUN_01cd64a0(lVar3,local_30);
  if ((*(char *)(*(longlong *)(param_1 + 0x290) + 0x10b) == '\0') &&
     (*(char *)(lVar3 + 0x70) != '\0')) {
    uVar2 = FUN_01cd66b0(lVar3);
    uVar2 = FUN_00b905e0(uVar2,2);
    *(undefined4 *)(lVar3 + 0x90) = uVar2;
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res10);
  return lVar3;
}

