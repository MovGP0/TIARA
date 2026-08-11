/* Ghidra address: 01cc34d0 */
/* Ghidra symbol: FUN_01cc34d0 */


longlong FUN_01cc34d0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar2 = FUN_01cc1630(&PTR_FUN_01cb4260,1);
  *(undefined1 *)(lVar2 + 8) = param_4;
  FUN_01cc09f0(lVar2,local_res10[0]);
  *(undefined4 *)(lVar2 + 0x38) = param_3;
  uVar3 = FUN_01cb13d0(&PTR_FUN_01cb0660,1);
  uVar1 = (**(code **)(**(longlong **)(param_1[0x88] + 8) + 0x50))
                    (*(longlong **)(param_1[0x88] + 8),uVar3);
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  (**(code **)(*param_1 + 0x50))(param_1,lVar2);
  FUN_00414480(local_res10);
  return lVar2;
}

