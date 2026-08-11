/* Ghidra address: 00da8fa0 */
/* Ghidra symbol: FUN_00da8fa0 */


undefined8 FUN_00da8fa0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414c70(local_20,local_res10[0]);
  iVar2 = 0;
  do {
    iVar1 = 0;
    if (PTR_s_hD_r70YTT77_uGHjTYT56q_h6_7Gh_j7_01ed3c98 != (undefined *)0x0) {
      iVar1 = *(int *)(PTR_s_hD_r70YTT77_uGHjTYT56q_h6_7Gh_j7_01ed3c98 + -4);
    }
    FUN_004153d0(local_30,PTR_s_hD_r70YTT77_uGHjTYT56q_h6_7Gh_j7_01ed3c98
                          [(longlong)((iVar2 * 10) % iVar1 + 1) + -1],0);
    FUN_00415bd0(local_30[0],local_20,iVar2 * 3 + 1);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xb);
  FUN_00d2a5e0(DAT_0202da60,"Message Digest 5");
  FUN_00d2a810(DAT_0202da60,local_20[0]);
  FUN_00d2a480(DAT_0202da60,param_1,0x10);
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  FUN_004144d0(local_res10);
  return param_1;
}

