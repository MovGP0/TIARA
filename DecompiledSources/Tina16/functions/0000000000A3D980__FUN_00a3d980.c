/* Ghidra address: 00a3d980 */
/* Ghidra symbol: FUN_00a3d980 */


void FUN_00a3d980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_38 [40];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_0044d490(&PTR_FUN_00a3d870,1,local_res8[0]);
  uVar2 = FUN_00a3d970(auStack_38);
  FUN_004133b0(uVar1,uVar2);
  FUN_00414480(local_res8);
  return;
}

