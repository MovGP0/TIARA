/* Ghidra address: 018a7200 */
/* Ghidra symbol: FUN_018a7200 */


void FUN_018a7200(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0x568) != 0)) {
    FUN_00452320(param_1 + 0x568);
  }
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x518) != param_2)) {
    uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(param_1 + 0x568) = uVar1;
    uVar1 = FUN_00609e10(uVar1);
    FUN_005fdf10(uVar1);
    (**(code **)(**(longlong **)(param_1 + 0x568) + 0x88))
              (*(longlong **)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x98));
    (**(code **)(**(longlong **)(param_1 + 0x568) + 0x70))
              (*(longlong **)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x9c));
    uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x568));
    uVar1 = FUN_005ffa40(uVar1);
    FUN_006579d0(param_1,uVar1,0,0);
    uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x568));
    FUN_005fe090(uVar1);
  }
  *(char *)(param_1 + 0x518) = param_2;
  return;
}

