/* Ghidra address: 01beb2c0 */
/* Ghidra symbol: FUN_01beb2c0 */


void FUN_01beb2c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res20;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414b50(local_20,local_res20);
  cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_01bdee40);
  if (cVar1 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x78);
    if (*(char *)(lVar3 + 0x4f8) == '\0') {
      FUN_007e8d80(local_30,local_20[0]);
      FUN_00414b50(local_20,local_30[0]);
    }
    if ((*(char *)(lVar3 + 0x671) != '\0') && (*(char *)(param_1 + 0x363) == '\0')) {
      uVar2 = FUN_01c07120(param_1);
      lVar3 = FUN_01c03e40(uVar2);
      FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x70),
                   *(undefined4 *)(lVar3 + 0x94));
    }
    if (*(char *)(param_1 + 0x344) != '\0') {
      uVar2 = FUN_01c07120(param_1);
      lVar3 = FUN_01c03e40(uVar2);
      FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x70),
                   *(undefined4 *)(lVar3 + 0x88));
    }
  }
  FUN_01c05800(param_1,param_2,param_3,local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}

