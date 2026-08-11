/* Ghidra address: 015f26e0 */
/* Ghidra symbol: FUN_015f26e0 */


undefined8
FUN_015f26e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar2 = *(undefined8 *)(param_3 + 0x1a8);
  uVar1 = FUN_01771420(uVar2,1);
  uVar2 = FUN_015f27d0(local_res8[0],param_2,uVar2,uVar1,param_3,param_4,L"get_design_file",param_5)
  ;
  FUN_00414480(local_res8);
  return uVar2;
}

